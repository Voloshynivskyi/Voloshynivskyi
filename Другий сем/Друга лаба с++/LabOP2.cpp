#include <iostream>
#include <string>
#include <Windows.h>
#include "Header.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int amount;
	amount_of_humans(amount);
	Human *arr_of_humans = new Human[amount];
	arr_of_humans = input_info_in_arr(amount, arr_of_humans);
	search_time(amount, arr_of_humans);
	system("pause");
	delete[]arr_of_humans;
}
