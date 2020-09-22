// Begin_15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
using namespace std;
/*Дана площадь S круга. Найти его диаметр D и длину L окружности,
ограничивающей этот круг, учитывая, что L = π·D, S = π·D2/4. В качестве

значения π использовать 3.14.*/
int main()
{
	double s;
	cout << "Enter S=  ";

	cin >> s;
	double d = sqrt((4 * s) / 3.14);
	double l = 3.14 * d;
	cout << "D=" << d << endl;
	cout << "L=" << l;
	return 0; 
}