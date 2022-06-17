#pragma once
#include <string>
#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

class Human
{
public:
	string name, date_of_birth;
	void output_info();
};
void amount_of_humans(int& amount);
Human* input_info_in_arr(int amount, Human* arr_of_humans);
void output_info_from_arr(int amount, Human* arr_of_humans);
void search_time(int amount, Human* arr_of_humans);