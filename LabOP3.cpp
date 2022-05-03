#include <iostream>
#include <Windows.h>
#include <cmath>
#include "Header.h"
using namespace std;

int main()
{
	ukrainian();
	Polynomial P1;
	P1.input_co();
	P1.output();
	Polynomial P2(4);
	P2.output();
	Polynomial P3(1, 2, 3, 4 );
	P3.output();
	Polynomial P4 = P1 + P2;
	P4.output();
	P4.find_value_in_point();
	Polynomial P5 = P2 * P3;
	P5.output();
	P5.find_value_in_point();
	cout << "GETER co3: " << P1.Get_co3();
	system("pause");
}