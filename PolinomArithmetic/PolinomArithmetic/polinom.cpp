#pragma once
#include "Polinom.h"

int Polinom::StringtoA(string str)
{
	int _A;
	int l = str.find("x");//бегунок по строке
	if (l == -1)//не нашел иксы=> вся строка - коэфф
	{
		return stoi(str);
	}
	if (l == 0)//типа когда 1й моном и коэфф 1
	{
		//int k = (int)str[l + 1] - 48;
		//if (k >= n)
		//	return 0;
		_A = 1;
	}
	if (l == 1)//один знак под коэфф типа - либо + либо от 0 до 9
	{
		if (str[0] == '-')
		{
			//int k = (int)str[l + 1] - 48;
			//if (k >= n)
			//	return 0;
			_A = -1;
		}
		else
			if (str[0] == '+')
			{
				//int k = (int)str[l + 1] - 48;
				//if (k >= n)
				//	return 0;
				_A = 1;
			}
			else
			{
				//int k = (int)str[l + 1] - 48;
				//if (k >= n)
				//	return 0;
				char *a = new char[1];
				a[0] = str[0];
				_A = atoi(a);
			}
	}
	if (l != 0 && l != 1 && l != -1)
	{
		//int k = (int)str[l + 1] - 48;
		//if (k >= n)
		//	return 0;
		string s = str.substr(0, l);
		return stoi(s);
	}
	int k = ((int)str[l + 1] - 48);
	if (k >= n)
	{
		string tmp = str;
		tmp.erase(0, l + 1);
		l = tmp.find("x");
		if (l == -1)
			_A = 0;
	}
	return _A;
}

int Polinom::StringtoSv(string _str)
{
	//заполним массив степеней
	int *num = new int[n];//для степеней
	int sv;
	string str = _str;
	for (int i = 0; i < n; i++)
	{
		char *intStr = new char[10];
		intStr = _itoa(i, intStr, 10);
		string t = "x" + string(intStr);//представление переменных через строку
		int l = str.find(t);//позиция переменной
		if (l == -1)
		{
			num[i] = 0;
		}
		else
		{
			str.erase(l, t.length());
			if (l >= str.length())
			{
				num[i] = 1;
			}
			else
			{
				if (str[l] == 'x')
				{
					num[i] = 1;
				}
				else
				{
					str.erase(l, 1);
					string s = "";
					while ((l < str.length()) && (str[l] >= '0') && (str[l] <= '9'))
					{
						s += str[l];
						str.erase(l, 1);
					}
					num[i] = stoi(s);
					if (num[i] >= maxst)
					{
						sv = -1;
						return -1;
					}
				}
			}
		}
	}
	//считаем свёртку
	int _sv = 0;
	for (int i = 0; i < n - 1; i++)
	{
		_sv = (_sv + num[i])*maxst;
	}
	_sv += num[n - 1];
	sv = _sv;
	return sv;
}

Polinom::Polinom(int _maxst, int _n)
{
	p = new CircleList();
	maxst = _maxst;
	n = _n;
}

Polinom::Polinom(string st, int _maxst, int _n)
{
	maxst = _maxst;
	n = _n;
	p = new CircleList;
	Polinom *res = new Polinom(maxst, n);
	res->StringtoPolinom(st);
	p = res->p;
}

Polinom::~Polinom()
{
	delete p;
}

Polinom::Polinom(const Polinom & op)
{
	maxst = op.maxst;
	n = op.n;
	p = new CircleList(*op.p);

}

string Polinom::PolinomtoString()
{
	return (p->CircleListToString(maxst, n));

}

Polinom* Polinom::StringtoPolinom(string str)
{

	int _A, _Sv;
	Monom *a = new Monom;
	Polinom *tmp = new Polinom(maxst, n);
	int l = str.find_first_of("+-");
	if (l == -1)//полином-только одно слагаемое
	{
		_A = this->StringtoA(str);
		_Sv = a->StringtoSv(str, maxst, n);
		this->AddMonom(str);
		return(this);
	}
	else
	{
		while (str.length() != 0)
		{
			l = str.find_first_of("+-");
			if (l == -1)//положительный моном в строке
			{
				l = str.length();

			}
			if (l == 0)//перед первым слагаемым какой-то знак
			{
				if (str[l] == '-')
				{
					str.erase(0, l + 1);
					l = str.find_first_of("+-");
					if (l == -1)
					{
						l = str.length();
					}
					string s = str.substr(0, l);
					s = "-" + s;
					this->AddMonom(s);
					str.erase(0, l);
				}
				else
				{
					str.erase(0, l + 1);
					l = str.find_first_of("+-");
					if (l == -1)
					{
						l = str.length();
					}
					string s = str.substr(0, l);
					_A = (tmp->StringtoA(s));
					_Sv = tmp->StringtoSv(s);
					this->AddMonom(s);
					str.erase(0, l);
				}
			}
			else
			{

				string s = str.substr(0, l);
				_A = tmp->StringtoA(s);
				_Sv = tmp->StringtoSv(s);
				this->AddMonom(s);
				str.erase(0, l);
			}


		}
		return(this);
	}

}

Polinom & Polinom::operator=(const Polinom & op)
{
	maxst = op.maxst;
	n = op.n;
	delete p;
	CircleList *tmp = new CircleList();
	tmp = op.p;
	p = new CircleList(*tmp);
	return(*this);
}

void Polinom::AddMonom(string str)
{
	Polinom *tmp = new Polinom(maxst, n);
	int _A, _Sv;
	_A = (tmp->StringtoA(str));
	if (_A == 0)
	{

	}
	else
	{
		_Sv = tmp->StringtoSv(str);
		p->AddMonom(_A, _Sv);
	}
}

Polinom Polinom::operator+(Polinom op)
{
	Polinom *res = new Polinom(*this);
	if (maxst != op.maxst || n != op.n)
		return *res;
	else
	{
		*(res->p) = res->GetPol() + op.GetPol();
	}
	return *(res);
}

Polinom Polinom::operator-(Polinom op)
{
	Polinom *res = new Polinom(*this);
	if (maxst != op.maxst || n != op.n)
		return *res;
	else
	{
		*(res->p) = res->GetPol() - op.GetPol();
	}
	return *(res);
}

Polinom Polinom::operator*(Polinom op)
{
	Polinom *res = new Polinom(*this);
	if (maxst != op.maxst || n != op.n)
		return *res;
	else
	{

		*(res->p) = (res->p->Mult(op.GetPol(), maxst, n));
		return *res;
	}
}

Polinom Polinom::operator*(int k)
{
	Polinom tmp(maxst, n);
	*tmp.p = *p*k;
	return(tmp);
}

CircleList Polinom::GetPol()
{
	return *p;
}

