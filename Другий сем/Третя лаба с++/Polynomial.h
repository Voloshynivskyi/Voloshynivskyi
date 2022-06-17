#pragma once
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <vector>
using namespace std;

class Polynomial
{
private:
	vector<int> coefs;
public:
	Polynomial();
	Polynomial(int co3, int co2, int co1, int co0);
	Polynomial(int multiplier);

	void input_co();
	int  Get_co3();
	int Get_co2();
	int Get_co1();
	int Get_co0();
	void  Set_co3(int co3);
	void Set_co2(int co2);
	void Set_co1(int co1);
	void Set_co0(int co0);
	void Set_all_co(int co3, int co2, int co1, int co0);
	void output();
	void find_value_in_point();
	Polynomial operator +(const Polynomial other);
	Polynomial operator *(const Polynomial other);
};
void ukrainian();