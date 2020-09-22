// Begin_39.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
using namespace std;
/*Найти корни квадратного уравнения A·x2+ B·x + C = 0, заданного
своими коэффициентами A, B, C (коэффициент A не равен 0), если извест-
но, что дискриминант уравнения положителен. Вывести вначале меньший,
а затем больший из найденных корней. Корни квадратного уравнения на-
ходятся по формуле x1,2 = ( )/ − ± B D (2·A), где D — дискриминант, рав-
ный B2– 4·A·C.*/

int main()
{
	int x, y, a,b,c,D;
	cout << "Enter a,b,c ";
	cin >> a>>b>>c;
	if (a != 0) { D = b * b - 4 * a * c;
	if (D > 0) { x = (-b + sqrt(D)) / (2*a);
	y= (-b - sqrt(D) )/ (2*a);
	if (x < y) { cout << x << " " << y;
	}
	else { cout << y << " " << x; }
	}
	};
	
	
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
