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
	/*Получаение дескриптора устройства стандартного вывода*/
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	/*Установка белого фона за отдельным символом. Цвет символа - черный*/
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
	//_getch();
	//cout << "------------------------------------------------------" << endl;
	setlocale(LC_ALL, "Russian");
	string str1,str2,str3;
	int maxst, n;
	cout << "Введите число переменных" << endl;
	cin >> n;
	cout << "Введите максимальную степень" << endl;
	cin >> maxst;
	
	Monom a1, a2, a3;
	string mon1;
	cout << "Введите моном 1" << endl;
	cin >> str1;
	a1.SetA(a1.StringtoA(str1));
	a1.SetSv(a1.StringtoSv(str1, maxst, n));
	cout << "Введите моном 2" << endl;
	cin >> str2;
	a2.SetA(a2.StringtoA(str2));
	a2.SetSv(a2.StringtoSv(str2, maxst, n));
	a3 = a1.multMon(a2, maxst, n);
	mon1 = a3.MonomtoString(maxst, n);
	cout << "Моном после умножения 1го на 2й:" << endl;
	cout << mon1 << endl;
	
	///МОНОМ УМНОЖАЕТСЯ ХОРОШО


	CircleList c1, c2, c3;
	cout << "Делаем полином из мономов" << endl;
	string cp1,cp2,cp3,cp4;
	c1.AddMonom(a1.GetA(), a1.GetSv());
	c1.AddMonom(a3.GetA(), a3.GetSv());
	c2.AddMonom(a2.GetA(), a2.GetSv());
	c2.AddMonom(a3.GetA(), a3.GetSv());
	cp1 = c1.CircleListToString(maxst, n);
	cp2 = c2.CircleListToString(maxst, n);
	cout << "Первый:" << endl;
	cout << cp1 << endl;
	cout << "Второй:" << endl;
	cout << cp2 << endl;
	c3 = c1.Mult(c2, maxst, n);
	cp3 = c3.CircleListToString(maxst, n);
	cout << "Результат умножения:" << endl;
	cout << cp3 << endl;
	cp4 = c1.CircleListToString(maxst, n);
	
	///УМНОЖЕНИЕ СПИСКОВ РАБОТАЕТ ХОРОШО

	
		
	Polinom res(cp1, maxst, n);
	string pol,pol1,pol2,pol3,res1,pol4;
	pol = res.PolinomtoString();
	cout << "Вот полином Основной" << pol<<endl;
	
	Polinom p1(res);
	Polinom p2(res);
	Polinom p3(res);
	Polinom p4(maxst, n);
	pol1 = p1.PolinomtoString();
	cout << "Вот полином 1" << pol1 << endl;
	pol2 = p2.PolinomtoString();
	cout << "Вот полином 2" << pol2 << endl;
	p3=p1-p2;
	pol3 = p3.PolinomtoString();
	cout << "Результат вычитания:" <<pol3<< endl;
	pol1 = p1.PolinomtoString();
	cout << "Проверка портит ли " << pol1 << endl;
	p4.AddMonom(mon1);
	pol4 = p4.PolinomtoString();
	int a, sv;
	a = p4.StringtoA(mon1);
	sv = p4.StringtoSv(mon1);
	cout << "Коэффициент: " << a << endl << "Свертка: " << sv << endl;
	cout << "Добавка монома " << pol4 << endl;

	/*
	Monom a;
	string str;
	int maxst, numvar;
	CircleList A;
	cout << "Введите число переменных" << endl;
	cin >> numvar;
	cout << "Введите максимальную степень" << endl;
	cin >> maxst;
	do
	{
		cout << "Введите строку МОНОМ" << endl;
		cin >> str;
		a.SetA(a.StringtoA(str));
		a.SetSv(a.StringtoSv(str, maxst, numvar));
	//	cout << "Коэффициент =" << a.GetA() << endl;
	//	cout << "Свертка =" << a.GetSv() << endl;
		_getch();
	//	string res;
	//	res = a.MonomtoString(maxst, numvar);
	//	cout << "Ща моном будет" << endl;
	//	cout << res << endl;
	//	_getch();
		A.AddMonom(a.GetA(), a.GetSv());
	} while (str != "Exit");
	string List;
	cout << "Ща будет типа полином,жмите книпку" << endl;
	List = A.CircleListToString(maxst, numvar);
	_getch();
	cout << List << endl;
	_getch();
	CircleList A2(A);
	CircleList res;
	res = A + A2;
	cout << "Результат сложения: " << res.CircleListToString(maxst, numvar) << endl;
	res = A - A2;
	cout << "Результат вычитания: " << res.CircleListToString(maxst, numvar) << endl;
	res = A*numvar;
	cout << "Результат умножения на константу: " << res.CircleListToString(maxst, numvar) << endl;
	*/
	_getch();
}