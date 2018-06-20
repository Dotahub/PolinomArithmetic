#pragma once
#pragma once
#include "Mon.h"
class CircleList
{
	Monom *Head;
public:
	CircleList();
	CircleList(const CircleList &op);
	~CircleList();
	CircleList &operator=(const CircleList &op);
	void AddMonom(int _A, int _sv);
	CircleList operator+ (const CircleList&op);
	CircleList operator- (const CircleList&op);
	CircleList operator*(int k);
	string CircleListToString(int maxst, int n);
	void SetHead(Monom *_head);
	Monom* GetHead();
	CircleList Mult(CircleList p, int maxst, int k);
};
