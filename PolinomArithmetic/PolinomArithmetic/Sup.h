#pragma once
#include <string>
using namespace std;
int CheckBigVar(string str, int n, int l)
{
	int k = (int)str[l + 1] - 48;
	if (k >= n)
		return 1;
}