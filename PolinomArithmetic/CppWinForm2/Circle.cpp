#include "Circle.h"

CircleList::CircleList()
{
	Head = new Monom();
}

CircleList::CircleList(const CircleList & op)
{
	Head = new Monom();
	Monom *Last = Head;
	Monom *Cur = op.Head->GetNext();
	while (Cur != op.Head)
	{
		Monom *tmp = new Monom(*Cur);
		tmp->SetNext(Head);
		Last->SetNext(tmp);
		Last = Last->GetNext();
		Cur = Cur->GetNext();
	}
}

CircleList::~CircleList()
{
	Monom *Cur = Head->GetNext();
	while (Cur != Head)//удалим все,кроме хед
	{
		Head->SetNext(Cur->GetNext());
		Cur = Head->GetNext();
	}
	//удалим хед,а с ним и кар
	Head->SetNext(NULL);
	delete Head;
}

CircleList & CircleList::operator=(const CircleList & op)
{
	Monom *Last = Head->GetNext();
	Head->SetNext(NULL);
	delete(Last);
	Head = new Monom();
	Last = Head;
	Monom *Cur = op.Head->GetNext();
	while (Cur != op.Head)
	{
		Monom *tmp = new Monom(*Cur);
		tmp->SetNext(Head);
		Last->SetNext(tmp);
		Last = Last->GetNext();
		Cur = Cur->GetNext();
	}
	return(*this);
}

void CircleList::AddMonom(int _A, int _sv)
{
	Monom *m = new Monom(_A, _sv);
	Monom *prev = Head;
	Monom *cur = Head->GetNext();
	while (_sv < cur->GetSv())//двигаем пока входная свертка меньше
	{
		prev = cur;
		cur = cur->GetNext();
	}
	if (_sv != -1)//чтобы ненулевой моном там то да сё
	{
		if (cur->GetSv() == _sv)
		{
			int nA = cur->GetA() + _A;
			if (nA != 0)//такой моном должен быть
			{
				cur->SetA(nA);
			}
			else//был и уничтожился
			{
				prev->SetNext(cur->GetNext());
				cur->SetNext(NULL);
				delete cur;
			}
		}
		else//такого вообще не было
		{
			prev->SetNext(m);
			m->SetNext(cur);
		}
	}
}

CircleList CircleList::operator+(const CircleList & op)
{
	CircleList A(*this);
	Monom *Cur = op.Head->GetNext();
	while (Cur != op.Head)
	{
		A.AddMonom(Cur->GetA(), Cur->GetSv());
		Cur = Cur->GetNext();
	}
	return (A);
}

CircleList CircleList::operator-(const CircleList & op)
{
	CircleList A(*this);
	Monom *Cur = op.Head->GetNext();
	while (Cur != op.Head)
	{
		A.AddMonom((-1)*Cur->GetA(), Cur->GetSv());
		Cur = Cur->GetNext();
	}
	return (A);
}

CircleList CircleList::operator*(int k)
{
	if (k == 0)
	{
		CircleList Lol;
		return(Lol);
	}
	CircleList A(*this);
	Monom *Cur = A.Head->GetNext();
	while (Cur != A.Head)
	{
		Cur->SetA(k*Cur->GetA());
		Cur = Cur->GetNext();
	}

	return (A);
}

string CircleList::CircleListToString(int maxst, int n)
{
	string res = "";
	Monom* Cur = Head->GetNext();
	while (Cur != Head)
	{
		string tmp = Cur->MonomtoString(maxst, n);
		if (tmp[0] == '-')
		{
			res += tmp;
		}
		else
		{
			res += "+" + tmp;
		}
		Cur = Cur->GetNext();
	}
	if (res == "")
		return(res = "0");
	return res;
}
void CircleList::SetHead(Monom * _head)
{
	Head = _head;
}

Monom* CircleList::GetHead()
{
	return (Head);
}

CircleList CircleList::Mult(CircleList p, int maxst, int k)
{
	CircleList res;
	Monom *Cur = Head->GetNext();
	while (Cur != Head)
	{
		Monom *Current = p.Head->GetNext();
		while (Current != p.Head)
		{
			Monom m = Cur->multMon(*Current, maxst, k);
			res.AddMonom(m.GetA(), m.GetSv());
			Current = Current->GetNext();
		}
		Cur = Cur->GetNext();
	}
	return res;
}