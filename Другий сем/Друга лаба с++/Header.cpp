#include "Header.h"

void Human::output_info()
{
	cout << "\nПIБ: " << name << "\nДата народження: " << date_of_birth;
}

void amount_of_humans(int& amount)
{
	cout << "Введiть кiлькiсть людей: ";
	cin >> amount;
}
Human* input_info_in_arr(int amount, Human* arr_of_humans)
{
	SetConsoleCP(1251);
	string PIB, date_of_birth;
	for (int i = 0; i < amount; i++)
	{
		setlocale(LC_ALL, "ru");
		cout << endl << "Введiть ПIБ людини №" << i + 1 << ": ";
		if (i == 0)
		{
			cin.get();
		}
		getline(cin, PIB);
		arr_of_humans[i].name = PIB;
		cout << endl << "Введiть день народження людини №" << i + 1 << " (у форматi ДД-ММ-РРРР): ";
		getline(cin, date_of_birth);
		arr_of_humans[i].date_of_birth = date_of_birth;
	}
	return arr_of_humans;
}

void output_info_from_arr(int amount, Human* arr_of_humans)
{
	for (int i = 0; i < amount; i++)
	{
		arr_of_humans[i].output_info();
	}
}

void search_time(int amount, Human* arr_of_humans)
{
	for (int i = 0; i < amount; i++)
	{
		string day, month, year;
		int j = 0, int_day, int_month, int_year;
		while (arr_of_humans[i].date_of_birth[j] == ' ')
		{
			j++;
		}
		day = arr_of_humans[i].date_of_birth.substr(0 + j, 2);
		month = arr_of_humans[i].date_of_birth.substr(3 + j, 2);
		year = arr_of_humans[i].date_of_birth.substr(6 + j, 4);
		int_day = stoi(day);
		int_month = stoi(month);
		int_year = stoi(year);
		int sum_day = 0, sum_month = 0, sum_year = 0;
		while (int_day != 0)
		{
			sum_day += int_day % 10;
			int_day /= 10;
		}
		while (int_month != 0)
		{
			sum_month += int_month % 10;
			int_month /= 10;
		}
		while (int_year != 0)
		{
			sum_year += int_year % 10;
			int_year /= 10;
		}
		if (sum_year % 7 == sum_month % 7 && sum_month % 7 == sum_day % 7)
		{
			arr_of_humans[i].output_info();
			cout << "\nЩасливий день: Так";
		}
		else
		{
			arr_of_humans[i].output_info();
			cout << "\nЩасливий день: Нi";
		}
	}
	cout << endl;
}
