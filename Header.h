#pragma once
#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

class Polynomial
{
private:
	int co6, co5, co4, co3, co2, co1, co0;
public:
	Polynomial()
	{
		this->co6 = 0;
		this->co5 = 0;
		this->co4 = 0;
		this->co3 = 0;
		this->co2 = 0;
		this->co1 = 0;
		this->co0 = 0;
	}
	Polynomial(int co3, int co2, int co1, int co0 )
	{
		this->co6 = 0;
		this->co5 = 0;
		this->co4 = 0;
		this->co3 = co3;
		this->co2 = co2;
		this->co1 = co1;
		this->co0 = co0;
	}
	Polynomial(int multiplier)
	{
		this->co6 = 0;
		this->co5 = 0;
		this->co4 = 0;
		int value;
		cout << "\nВведіть коефіцієнт для усіх членів(його буде домножено на задане у коді число): ";
		cin >> value;
		this->co3 = this->co2 = this->co1 = this->co0 = value*multiplier;
	}
	
	void input_co()
	{
		cout << "\nВведіть коефіцієнт змінної третього степепеня: ";
		cin >> this->co3;
		cout << "\nВведіть коефіцієнт змінної другого степепеня: ";
		cin >> this->co2;
		cout << "\nВведіть коефіцієнт змінної першого степепеня: ";
		cin >> this->co1;
		cout << "\nВведіть коефіцієнт змінної нульового степепеня: ";
		cin >> this->co0;
	}
	int  Get_co3()
	{
		int co3 = this->co3;
		return co3;
	}
	int Get_co2()
	{
		int co2 = this->co2;
		return co2;
	}
	int Get_co1()
	{
		int co1 = this->co1;
		return co1;
	}
	int Get_co0()
	{
		int co0 = this->co0;
		return co0;
	}
	void  Set_co3(int co3)
	{
		this->co3 = co3;
	}
	void Set_co2(int co2)
	{
		this->co2 = co2;
	}
	void Set_co1(int co1)
	{
		this->co1 = co1;
	}
	void Set_co0(int co0)
	{
		this->co0 = co0;
	}
	void Set_all_co(int co3, int co2, int co1, int co0)
	{
		this->co3 = co3;
		this->co2 = co2;
		this->co3 = co1;
		this->co0 = co0;
	}
	void output()
	{
		int check_sum;
		cout << "\nНовий поліном:\n";
		check_sum = co3 + co2 + co1 + co0;
		if (check_sum == 0)
		{
			cout << "\nУсі коефіцієнти полінома дорівнюють нулю!!!";
		}
		if (co4 != 0 or co5 != 0 or co6 !=0)
		{
			if (co6 != 0)
			{
				cout << co6 << "x^6";
			}
			if (co5 > 0 && co6 != 0)
			{
				cout << " + " << co5 << "x^5";
			}
			else if (co5 < 0 && co6 != 0)
			{
				cout << " - " << abs(co5) << "x^5";
			}
			else if (co5 != 0 && co6 == 0)
			{
				cout << co5 << "x^5";
			}
			if (co4 > 0 && co5 != 0)
			{
				cout << " + " << co4 << "x^4";
			}
			else if (co4 < 0 && co5 != 0)
			{
				cout << " - " << abs(co4) << "x^4";
			}
			else if (co4 != 0 && co5 == 0)
			{
				cout << co4 << "x^4";
			}
			if (co3 > 0 && co4 != 0)
			{
				cout << " + " << co3 << "x^3";
			}
			else if (co3 < 0 && co4 != 0)
			{
				cout << " - " << abs(co3) << "x^3";
			}
			else if (co3 != 0 && co4 == 0)
			{
				cout << co3 << "x^3";
			}
			if (co2 > 0 && co3 != 0)
			{
				cout << " + " << co2 << "x^2";
			}
			else if (co2 < 0 && co3 != 0)
			{
				cout << " - " << abs(co2) << "x^2";
			}
			else if (co2 != 0 && co3 == 0)
			{
				cout << co2 << "x^2";
			}
			if (co1 > 0 && co2 != 0)
			{
				cout << " + " << co1 << "x";
			}
			else if (co1 < 0 && co2 != 0)
			{
				cout << " - " << abs(co1) << "x";
			}
			else if (co1 != 0 && co2 == 0)
			{
				cout << co1 << "x";
			}
			if (co0 > 0 && co1 != 0)
			{
				cout << " + " << co0;
			}
			else if (co0 < 0 && co1 != 0)
			{
				cout << " - " << abs(co0);
			}
			else if (co0 > 0 && co1 == 0)
			{
				cout << " + " << co0;
			}
			else if (co0 < 0 && co1 == 0)
			{
				cout << " - " << abs(co0);
			}
		}
		else
		{
			if (co3 != 0)
			{
				cout << co3 << "x^3";
			}
			if (co2 > 0 && co3 != 0)
			{
				cout << " + " << co2 << "x^2";
			}
			else if (co2 < 0 && co3 != 0)
			{
				cout << " - " << abs(co2) << "x^2";
			}
			else if (co2 != 0 && co3 == 0)
			{
				cout << co2 << "x^2";
			}
			if (co1 > 0 && co2 != 0)
			{
				cout << " + " << co1 << "x";
			}
			else if (co1 < 0 && co2 != 0)
			{
				cout << " - " << abs(co1) << "x";
			}
			else if (co1 != 0 && co2 == 0)
			{
				cout << co1 << "x";
			}
			if (co0 > 0 && co1 != 0)
			{
				cout << " + " << co0;
			}
			else if (co0 < 0 && co1 != 0)
			{
				cout << " - " << abs(co0);
			}
			else if (co0 > 0 && co1 == 0)
			{
				cout << " + " << co0;
			}
			else if (co0 < 0 && co1 == 0)
			{
				cout << " - " << abs(co0);
			}
		}
		cout << "\n";
	}
	void find_value_in_point()
	{
		int point;
		cout << "Введіть координату точки в якій ви хочете знайти значення поліному: ";
		cin >> point;
		cout << "\n";
		int value = co6 * pow(point, 6) + co5 * pow(point, 5) + co4 * pow(point, 4) + co3 * pow(point, 3) + co2 * pow(point, 2) + co1 * point + co0;
		cout << "Значення полінома у заданій точці " << point << " = " << value << "\n";
	}
	Polynomial operator +(const Polynomial other)
	{
		Polynomial temp;
		temp.co3 = this->co3 + other.co3;
		temp.co2 = this->co2 + other.co2;
		temp.co1 = this->co1 + other.co1;
		temp.co0 = this->co0 + other.co0;
		return temp;
	}
	Polynomial operator *(const Polynomial other)
	{
		Polynomial temp;
		temp.co6 = this->co3 * other.co3;
		temp.co5 = (this->co3 * other.co2) + (this->co2 * other.co3);
		temp.co4 = (this->co3 * other.co1) + (this->co1 * other.co3) + (this->co2 * other.co2);
		temp.co3 = (this->co3 * other.co0) + (this->co0 * other.co3) + (this->co2 * other.co1) + (this->co1 * other.co2);
		temp.co2 = (this->co2 * other.co0) + (this->co0 * other.co2) + (this->co1 * other.co1);
		temp.co1 = (this->co1 * other.co0) + (this->co0 * other.co1);
		temp.co0= this->co0 * other.co0;
		return temp;
	}
};
void ukrainian()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
}