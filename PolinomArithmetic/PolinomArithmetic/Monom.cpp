
#include "Monom.h"
Monom::Monom(int _A, int _sv)//����������� �� ���������(��������� �������� �� ���������)
{
	A = _A;
	sv = _sv;
	Next = this;
}
Monom::Monom(const Monom &M)//����������� �����������
{
	A = M.A;
	sv = M.sv;
	Next = this;
}
Monom::~Monom()//����������
{
	Next = 0;
}
Monom Monom::operator= (const Monom & M)//���������� ����������
{
	A = M.A;
	sv = M.sv;
	Next = this;
	return (*this);
}
int Monom::StringtoA(string str)//�������� �����������
{
	int l = str.find("x");//������� �� ������
	if (l == -1)//�� ����� ����=> ��� ������ - �����
	{
		return stoi(str);
	}
	if (l == 0)//���� ����� 1� ����� � ����� 1
	{
		return 1;
	}
	if (l == 1)//���� ���� ��� ����� ���� - ���� + ���� �� 0 �� 9
	{
		if (str[0] == '-')
			return -1;
		else
			if (str[0] == '+')
				return 1;
			else
			{
				char *a = new char[1];
				a[0] = str[0];
				return atoi(a);
			}
	}
	else
	{
		string s = str.substr(0, l);
		return stoi(s);
	}
}
int Monom::StringtoSv(string _str, int maxst, int N)
{
	//�������� ������ ��������
	int *n = new int[N];//��� ��������
	string str = _str;
	for (int i = 0; i < N; i++)
	{
		char *intStr = new char[10];
		intStr = _itoa(i, intStr, 10);
		string t = "x" + string(intStr);//������������� ���������� ����� ������
		int l = str.find(t);//������� ����������
		if (l == -1)
		{
			n[i] = 0;
		}
		else
		{
			str.erase(l, t.length());
			if (l >= str.length())
			{
				n[i] = 1;
			}
			else
			{
				if (str[l] == 'x')
				{
					n[i] = 1;
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
					n[i] = stoi(s);
					if (n[i] >= maxst)
					{
						sv = -1;
						return -1;
					}
				}
			}
		}
	}
	//������� ������
	int _sv = 0;
	for (int i = 0; i < N - 1; i++)
	{
		_sv = (_sv + n[i])*maxst;
	}
	_sv += n[N - 1];
	sv = _sv;
	return sv;
}
string Monom::MonomtoString(int maxst, int n)
{
	string res = "";
	int ost; int chast = sv;//������� � �������
	for (int i = n - 1; i >= 0; i--)
	{
		ost = chast%maxst;
		chast = chast / maxst;
		if (ost == 1)
		{
			res = "x" + to_string(i) + res;
		}
		if (ost > 1)
		{
			res = "x" + to_string(i) + "^" + to_string(ost) + res;
		}
	}
	res = to_string(GetA()) + res;
	return res;
}
Monom Monom::multMon(Monom m, int maxst, int k)
{
	Monom *res = new Monom;
	int powa = sv;
	int powb = m.sv;
	int *a = new int[k];//1
	int *b = new int[k];//2
	int *c = new int[k];//���-�
	for (int i = 0; i < k; i++)
	{
		a[k - i - 1] = powa%maxst;
		powa = powa / maxst;
		b[k - i - 1] = powb%maxst;
		powb = powb / maxst;
		c[k - i - 1] = a[k - i - 1] + b[k - i - 1];
		if (c[k - i - 1] >= maxst)
			return *res;
	}
	res->sv = c[0];
	for (int i = 0; i < k; i++)
	{
		res->sv = res->sv*maxst + c[i];
	}
	res->A = A*m.A;
	return *res;
}