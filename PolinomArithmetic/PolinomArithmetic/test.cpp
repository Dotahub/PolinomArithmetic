#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
#include <conio.h>
#include "polinom.h"
#include <clocale>
#include <Windows.h>
using namespace std;

void main()
{
	/*���������� ����������� ���������� ������������ ������*/
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	/*��������� ������ ���� �� ��������� ��������. ���� ������� - ������*/
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
	//_getch();
	//cout << "------------------------------------------------------" << endl;
	setlocale(LC_ALL, "Russian");
	string str1,str2,str3;
	int maxst, n;
	cout << "������� ����� ����������" << endl;
	cin >> n;
	cout << "������� ������������ �������" << endl;
	cin >> maxst;
	
	Monom a1, a2, a3;
	string mon1;
	cout << "������� ����� 1" << endl;
	cin >> str1;
	a1.SetA(a1.StringtoA(str1));
	a1.SetSv(a1.StringtoSv(str1, maxst, n));
	cout << "������� ����� 2" << endl;
	cin >> str2;
	a2.SetA(a2.StringtoA(str2));
	a2.SetSv(a2.StringtoSv(str2, maxst, n));
	a3 = a1.multMon(a2, maxst, n);
	mon1 = a3.MonomtoString(maxst, n);
	cout << "����� ����� ��������� 1�� �� 2�:" << endl;
	cout << mon1 << endl;
	
	///����� ���������� ������


	CircleList c1, c2, c3;
	cout << "������ ������� �� �������" << endl;
	string cp1,cp2,cp3,cp4;
	c1.AddMonom(a1.GetA(), a1.GetSv());
	c1.AddMonom(a3.GetA(), a3.GetSv());
	c2.AddMonom(a2.GetA(), a2.GetSv());
	c2.AddMonom(a3.GetA(), a3.GetSv());
	cp1 = c1.CircleListToString(maxst, n);
	cp2 = c2.CircleListToString(maxst, n);
	cout << "������:" << endl;
	cout << cp1 << endl;
	cout << "������:" << endl;
	cout << cp2 << endl;
	c3 = c1.Mult(c2, maxst, n);
	cp3 = c3.CircleListToString(maxst, n);
	cout << "��������� ���������:" << endl;
	cout << cp3 << endl;
	cp4 = c1.CircleListToString(maxst, n);
	
	///��������� ������� �������� ������

	
		
	Polinom res(cp1, maxst, n);
	string pol,pol1,pol2,pol3,res1,pol4;
	pol = res.PolinomtoString();
	cout << "��� ������� ��������" << pol<<endl;
	
	Polinom p1(res);
	Polinom p2(res);
	Polinom p3(res);
	Polinom p4(maxst, n);
	pol1 = p1.PolinomtoString();
	cout << "��� ������� 1" << pol1 << endl;
	pol2 = p2.PolinomtoString();
	cout << "��� ������� 2" << pol2 << endl;
	p3=p1-p2;
	pol3 = p3.PolinomtoString();
	cout << "��������� ���������:" <<pol3<< endl;
	pol1 = p1.PolinomtoString();
	cout << "�������� ������ �� " << pol1 << endl;
	p4.AddMonom(mon1);
	pol4 = p4.PolinomtoString();
	int a, sv;
	a = p4.StringtoA(mon1);
	sv = p4.StringtoSv(mon1);
	cout << "�����������: " << a << endl << "�������: " << sv << endl;
	cout << "������� ������ " << pol4 << endl;

	/*
	Monom a;
	string str;
	int maxst, numvar;
	CircleList A;
	cout << "������� ����� ����������" << endl;
	cin >> numvar;
	cout << "������� ������������ �������" << endl;
	cin >> maxst;
	do
	{
		cout << "������� ������ �����" << endl;
		cin >> str;
		a.SetA(a.StringtoA(str));
		a.SetSv(a.StringtoSv(str, maxst, numvar));
	//	cout << "����������� =" << a.GetA() << endl;
	//	cout << "������� =" << a.GetSv() << endl;
		_getch();
	//	string res;
	//	res = a.MonomtoString(maxst, numvar);
	//	cout << "�� ����� �����" << endl;
	//	cout << res << endl;
	//	_getch();
		A.AddMonom(a.GetA(), a.GetSv());
	} while (str != "Exit");
	string List;
	cout << "�� ����� ���� �������,����� ������" << endl;
	List = A.CircleListToString(maxst, numvar);
	_getch();
	cout << List << endl;
	_getch();
	CircleList A2(A);
	CircleList res;
	res = A + A2;
	cout << "��������� ��������: " << res.CircleListToString(maxst, numvar) << endl;
	res = A - A2;
	cout << "��������� ���������: " << res.CircleListToString(maxst, numvar) << endl;
	res = A*numvar;
	cout << "��������� ��������� �� ���������: " << res.CircleListToString(maxst, numvar) << endl;
	*/
	_getch();
}