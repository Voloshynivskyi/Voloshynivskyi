#include "Polynomial.h"
Polynomial::Polynomial()
{
	this->coefs.push_back(0);
	this->coefs.push_back(0);
	this->coefs.push_back(0);
	this->coefs.push_back(0);
}

Polynomial::Polynomial(int co3, int co2, int co1, int co0)
{
	this->coefs.push_back(co3);
	this->coefs.push_back(co2);
	this->coefs.push_back(co1);
	this->coefs.push_back(co0);
}

Polynomial::Polynomial(int multiplier)
{
	this->coefs.push_back(0);
	this->coefs.push_back(0);
	this->coefs.push_back(0);
	this->coefs.push_back(0);
	int value;
	cout << "\nВведіть коефіцієнт для усіх членів(його буде домножено на задане у коді число): ";
	cin >> value;
	coefs[0] = coefs[1] = coefs[2] = coefs[3] = value * multiplier;
}

void Polynomial::input_co()
{
	cout << "\nВведіть коефіцієнт змінної третього степепеня: ";
	cin >> coefs[0];
	cout << "\nВведіть коефіцієнт змінної другого степепеня: ";
	cin >> coefs[1];
	cout << "\nВведіть коефіцієнт змінної першого степепеня: ";
	cin >> coefs[2];
	cout << "\nВведіть коефіцієнт змінної нульового степепеня: ";
	cin >> coefs[3];
}

void Polynomial::find_value_in_point()
{
	int point;
	cout << "Введіть координату точки в якій ви хочете знайти значення поліному: ";
	cin >> point;
	cout << "\n";
	int value=0;
	for (int i = 0; i < coefs.size()-1; i++)
	{
		value += pow(coefs[i], coefs.size() - 1 - i);
	}
	value += coefs[coefs.size()-1];
	cout << "Значення полінома у заданій точці " << point << " = " << value << "\n";
}
Polynomial Polynomial:: operator+(const Polynomial other)
{
	Polynomial temp;
	for (int i = 0; i< coefs.size(); i++)
	{
		temp.coefs[i] = this->coefs[i] + other.coefs[i];
	}
	return temp;
}

Polynomial Polynomial:: operator*(const Polynomial other)
{
	Polynomial temp;
	temp.coefs.push_back(0);
	temp.coefs.push_back(0);
	temp.coefs.push_back(0);
	temp.coefs[0] = this->coefs[0] * other.coefs[0];
	temp.coefs[1] = (this->coefs[0] * other.coefs[1]) + (this->coefs[1] * other.coefs[0]);
	temp.coefs[2] = (this->coefs[0] * other.coefs[2]) + (this->coefs[2] * other.coefs[0]) + (this->coefs[1] * other.coefs[1]);
	temp.coefs[3] = (this->coefs[0] * other.coefs[3]) + (this->coefs[3] * other.coefs[0]) + (this->coefs[1] * other.coefs[2]) + (this->coefs[2] * other.coefs[1]);
	temp.coefs[4] = (this->coefs[1] * other.coefs[3]) + (this->coefs[3] * other.coefs[1]) + (this->coefs[2] * other.coefs[2]);
	temp.coefs[5] = (this->coefs[2] * other.coefs[3]) + (this->coefs[3] * other.coefs[2]);
	temp.coefs[6] = this->coefs[3] * other.coefs[3];
	return temp;
}

void ukrainian()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
}
int Polynomial::Get_co3()
{
	int co3 = this->coefs[0];
	return co3;
}

int Polynomial::Get_co2()
{
	int co2 = this->coefs[1];
	return co2;
}

int Polynomial::Get_co1()
{
	int co1 = this->coefs[2];
	return co1;
}

int Polynomial::Get_co0()
{
	int co0 = this->coefs[3];
	return co0;
}

void Polynomial::Set_co3(int co3)
{
	this->coefs[0] = co3;
}

void Polynomial::Set_co2(int co2)
{
	this->coefs[1] = co2;
}

void Polynomial::Set_co1(int co1)
{
	this->coefs[2] = co1;
}

void Polynomial::Set_co0(int co0)
{
	this->coefs[3] = co0;
}

void Polynomial::Set_all_co(int co3, int co2, int co1, int co0)
{
	this->coefs[0] = co3;
	this->coefs[1] = co2;
	this->coefs[2] = co1;
	this->coefs[3] = co0;
}

void Polynomial::output()
{
	int count = 0;
	cout << "\nНовий поліном:\n";
	for (int i = 0; i < coefs.size(); i++)
	{
		if (coefs[i] == 0)
		{
			count++;
		}
	}
	if (count == coefs.size())
	{
		cout << "\nУсі коефіцієнти полінома дорівнюють нулю!!!";
	}
	if (coefs.size() == 7)
	{
		if (coefs[0] != 0)
		{
			cout << coefs[0] << "x^6";
		}
		if (coefs[1] > 0 && coefs[0] != 0)
		{
			cout << " + " << coefs[1] << "x^5";
		}
		else if (coefs[1] < 0 && coefs[0] != 0)
		{
			cout << " - " << abs(coefs[1]) << "x^5";
		}
		else if (coefs[1] != 0 && coefs[0] == 0)
		{
			cout << coefs[1] << "x^5";
		}
		if (coefs[2] > 0 && coefs[1] != 0)
		{
			cout << " + " << coefs[2] << "x^4";
		}
		else if (coefs[2] < 0 && coefs[1] != 0)
		{
			cout << " - " << abs(coefs[2]) << "x^4";
		}
		else if (coefs[2] != 0 && coefs[1] == 0)
		{
			cout << coefs[2] << "x^4";
		}
		if (coefs[3] > 0 && coefs[2] != 0)
		{
			cout << " + " << coefs[3] << "x^3";
		}
		else if (coefs[3] < 0 && coefs[2] != 0)
		{
			cout << " - " << abs(coefs[3]) << "x^3";
		}
		else if (coefs[3] != 0 && coefs[2] == 0)
		{
			cout << coefs[3] << "x^3";
		}
		if (coefs[4] > 0 && coefs[3] != 0)
		{
			cout << " + " << coefs[4] << "x^2";
		}
		else if (coefs[4] < 0 && coefs[3] != 0)
		{
			cout << " - " << abs(coefs[4]) << "x^2";
		}
		else if (coefs[4] != 0 && coefs[3] == 0)
		{
			cout << coefs[4] << "x^2";
		}
		if (coefs[5] > 0 && coefs[4] != 0)
		{
			cout << " + " << coefs[5] << "x";
		}
		else if (coefs[5] < 0 && coefs[4] != 0)
		{
			cout << " - " << abs(coefs[5]) << "x";
		}
		else if (coefs[5] != 0 && coefs[4] == 0)
		{
			cout << coefs[5] << "x";
		}
		if (coefs[6] > 0 && coefs[5] != 0)
		{
			cout << " + " << coefs[6];
		}
		else if (coefs[6] < 0 && coefs[5] != 0)
		{
			cout << " - " << abs(coefs[6]);
		}
		else if (coefs[6] > 0 && coefs[5] == 0)
		{
			cout << " + " << coefs[6];
		}
		else if (coefs[6] < 0 && coefs[5] == 0)
		{
			cout << " - " << abs(coefs[6]);
		}
	}
	else
	{
		if (coefs[0] != 0)
		{
			cout << coefs[0] << "x^3";
		}
		if (coefs[1] > 0 && coefs[0] != 0)
		{
			cout << " + " << coefs[1] << "x^2";
		}
		else if (coefs[1] < 0 && coefs[0] != 0)
		{
			cout << " - " << abs(coefs[1]) << "x^2";
		}
		else if (coefs[1] != 0 && coefs[0] == 0)
		{
			cout << coefs[1] << "x^2";
		}
		if (coefs[2] > 0 && coefs[1] != 0)
		{
			cout << " + " << coefs[2] << "x";
		}
		else if (coefs[2] < 0 && coefs[1] != 0)
		{
			cout << " - " << abs(coefs[2]) << "x";
		}
		else if (coefs[2] != 0 && coefs[1] == 0)
		{
			cout << coefs[2] << "x";
		}
		if (coefs[3] > 0 && coefs[2] != 0)
		{
			cout << " + " << coefs[3];
		}
		else if (coefs[3] < 0 && coefs[2] != 0)
		{
			cout << " - " << abs(coefs[3]);
		}
		else if (coefs[3] > 0 && coefs[2] == 0)
		{
			cout << " + " << coefs[3];
		}
		else if (coefs[3] < 0 && coefs[2] == 0)
		{
			cout << " - " << abs(coefs[3]);
		}
	}
	cout << "\n";
}
