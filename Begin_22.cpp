// Begin_22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
/*Поменять местами содержимое переменных A и B и вывести новые
значения A и B.*/
int main()
{
	int a, b,c;
	cout << "Enter a&b  ";
	cin >> a >> b;
	c = a;
	a = b;
	b = c;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return 0;
}

