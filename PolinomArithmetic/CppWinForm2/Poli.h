#pragma once
#include "Circle.h"
class Polinom
{
	int maxst, n;
	CircleList *p;

public:
	Polinom(int _maxst, int _n);
	Polinom(string st = "", int _maxst = 10, int _n = 3);
	~Polinom();
	Polinom(const Polinom &op);
	string PolinomtoString();
	Polinom &operator=(const Polinom &op);
	void AddMonom(string str);
	Polinom operator+(Polinom op);
	Polinom operator-(Polinom op);
	Polinom operator*(Polinom op);
	Polinom operator*(int k);
	CircleList GetPol();
	int StringtoA(string str);
	int StringtoSv(string _str);
	Polinom* StringtoPolinom(string str);
};