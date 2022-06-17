#include <iostream>
#include <string>
#include <ctype.h>
#include <cstdlib>
#include <string.h>
#include <fstream>
#include <Windows.h>
using namespace std;
	int main()
	{
		setlocale(LC_ALL, "ru");

		string path = "start_rows.txt";
		string name = "result_rows.txt";
		ofstream start_rows_input(path);
		ofstream result_rows_input(name);
		if (!start_rows_input.is_open())
		{
			cout << "Помилка вiдкриття файлу!!!" << endl;
		}
		else
		{
			string row;
			int number_of_rows = 3;
			cout << "Введiть 3 рядки: " << endl;
			//cout << "Введiть кiлькiсть рядкiв: " << endl;
			//cin >> number_of_rows;
			for (int i = 0; i < number_of_rows; i++)
			{
				SetConsoleCP(1251);
				cout << "Введiть рядок номер " << i+1 << ":" << endl;
				getline(cin, row);
				start_rows_input << row;
				start_rows_input << "\n";
				SetConsoleCP(866);
			}
			start_rows_input.close();

			ifstream start_rows_output(path);
			if (!start_rows_output.is_open())
			{
				cout << "Помилка вiдкриття файлу!!!" << endl;
			}
			else
			{
				string file_row = "";
				int ya_plachu;
				int ide;
				char give_number = '0';
				int number = 1, result = 0, zero_number = 0, zero_number_now = 0, get_number_now, get_number;
				int id, max_amount, max_amount_now;
				string max_number_now, max_number;
				char* top[3];
				while (!start_rows_output.eof())
				{
					ide = 0;
					give_number = '0';
					max_number = "";
					max_number_now = "";
					max_amount = 1;
					max_amount_now = 0;
					get_number = 0;
					get_number_now = 0;
					zero_number_now = 0;
					id = 0;
					file_row = "";
					getline(start_rows_output, file_row);
					if (file_row!= "")
					{
						cout << "Початковий рядок номер " << number << ": " << file_row << endl;

						while (file_row[id] != '\0')
						{
							id++;
						}
						for (int i = 0; i < id; i++)
						{
							if (file_row[i] <= '9' && file_row[i] >= '0')
							{
								if (file_row[i] == '0')
								{
									zero_number_now++;
									give_number = file_row[i];
									get_number_now += (int(give_number) - 48) * pow(10, max_amount_now);
									max_number_now += file_row[i];
									max_amount_now++;
								}
								else
								{
									give_number = file_row[i];
									get_number_now += (10) * pow(10, max_amount_now);
									max_number_now += file_row[i];
									max_amount_now++;
								}
								if ((max_amount <= max_amount_now && (file_row[i+1] > '9' || file_row[i+1] < '0') && get_number < get_number_now))
								{
									
									get_number = get_number_now;
									get_number_now = 0;
									max_number = max_number_now;
									max_number_now = "";
									max_amount = max_amount_now;
									max_amount_now = 0;
									zero_number = zero_number_now;
									zero_number_now = 0;
								}
								else
									if (zero_number >= max_amount && (file_row[i + 1] > '9' || file_row[i + 1] < '0'))
								{
									get_number = get_number_now;
									get_number_now = 0;
									max_number = max_number_now;
									max_number_now = "";
									max_amount = max_amount_now;
									max_amount_now = 0;
									zero_number = zero_number_now;
									zero_number_now = 0;
								}
								if (file_row[i + 1] > '9' || file_row[i + 1] < '0')
								{
									max_number_now = "";
									max_amount_now = 0;
									give_number = 0;
									get_number_now = 0;
									zero_number_now = 0;
								}
							}
						}
						cout << "Максимальне число у рядку: " << max_number << endl;
						//file_row.erase(file_row.find(max_number), file_row.find(max_number)+max_amount);
						result_rows_input << max_number <<", ";
						while (file_row[ide] != '\0')
						{
							if ((file_row[ide] <= '9' && file_row[ide] >= '0')&&(file_row[ide+1] <= '9' && file_row[ide+1] >= '0'))
							{
								result_rows_input << file_row[ide];
							}
							else
							{
								if ((file_row[ide] <= '9' && file_row[ide] >= '0') && (file_row[ide + 1] > '9' || file_row[ide + 1] < '0'))
								{
									result_rows_input << file_row[ide] << ", ";
								}
							}
							ide++;
						}
						result_rows_input << "\n";
						
						
					}
					
					number++;
					cout << endl;
				}
				result_rows_input.close();
				start_rows_output.close();
				ifstream result_rows_output(name);
				if (!result_rows_output.is_open())
				{
					cout << "Помилка вiдкриття файлу!!!" << endl;
				}
				int number1 = 0;
				string result_file_row;
				while (!result_rows_output.eof())
				{
					result_file_row = "";
					getline(result_rows_output, result_file_row);
					if (result_file_row != "")
					{
						cout << "Опрацьований рядок номер " << number1 + 1 << ": " << result_file_row << endl;
						number1++;
					}
					else
					{
						break;
					}
				}
			result_rows_output.close();
			}	
		}

	}
