#pragma once
#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdlib.h>
#include <string>
using namespace std;
class Monom
{
private:
	int A;//коэффициент
	int sv;//свертка
	Monom *Next;
public:
	Monom(int _A = 0, int _sv = -1);
	Monom(const Monom &M);
	~Monom();
	Monom operator=(const Monom & M);
	int GetA() { return A; }
	int GetSv() { return sv; }
	void SetA(int _A) { A = _A; }
	void SetSv(int _sv) { sv = _sv; }
	void SetNext(Monom *_Next) { Next = _Next; }
	Monom *GetNext() { return Next; }
	string MonomtoString(int maxst, int n);
	int StringtoA(string str);
	int StringtoSv(string _str, int maxst, int N);
	Monom multMon(Monom m, int maxst, int k);
};