// Begin_14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Дана длина L окружности. Найти ее радиус R и площадь S круга, ог-
раниченного этой окружностью, учитывая, что L = 2·π·R, S = π·R2
 В качестве значения π использовать 3.14.*/
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	double l;
	cout << "Enter L=  ";

	cin >> l ;
	double r = l/(2* 3.14);
	double s = 3.14*r*r;
	cout << "R=" << r<< endl;
	cout << "S=" << s;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
