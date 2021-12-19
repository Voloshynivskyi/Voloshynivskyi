#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void FillArray(float* arr[], int n);
void PrintArray(float* arr[], int n);
float DiagonalSum(float* arr[], int n);
void ResultArray(float* arr[], int n, int c);
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	int n;
	cout << "Введiть розмiр квадратних матриць:";
	cin >> n;
	float** arr;
	float** arr1;
	float** arr2;
	arr = new float* [n];
	arr1 = new float* [n];
	arr2 = new float* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new float[n];
		arr1[i] = new float[n];
		arr2[i] = new float[n];
	}
	FillArray(arr, n);
	FillArray(arr1, n);
	FillArray(arr2, n);
	cout << endl << endl << "Першa матриця:" << endl << endl;
	PrintArray(arr,n);
	cout << endl << endl << "Друга матриця:" << endl << endl;
	PrintArray(arr1, n);
	cout << endl << endl << "Третя матриця:" << endl << endl;
	PrintArray(arr2, n);

	int suma = DiagonalSum(arr, n);
	int suma1 = DiagonalSum(arr, n);
	int suma2 = DiagonalSum(arr, n);

	if (suma >= suma1 && suma >= suma2)
	{
		cout << endl << "Найбiльшу суму елементiв над головною дiагоналлю має перша матриця: " << suma << endl << endl;
		cout << endl << "Результуюча матриця: " << endl << endl;
		ResultArray(arr, n, suma);
	}
	else if (suma1 > suma && suma1 >= suma2) {
		cout << endl << "Найбiльшу суму елементiв над головною дiагоналлю має друга матриця: " << suma1 << endl << endl;
		cout << endl << "Результуюча матриця: " << endl << endl;
		ResultArray(arr1, n, suma1);
	}
	else if (suma2 > suma && suma2 > suma1) {
		cout << endl << "Найбiльшу суму елементiв над головною дiагоналлю має перша матриця: " << suma2 << endl << endl;
		cout << endl << "Результуюча матриця: " << endl << endl;
		ResultArray(arr2, n, suma2);
	}
	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	for (int i = 0; i < n; i++)
	{
		delete[] arr1[i];
	}
	delete[] arr1;
	for (int i = 0; i < n; i++)
	{
		delete[] arr2[i];
	}
	delete[] arr2;
}

void FillArray(float* arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		
		for (int j = 0; j < n; j++)
		{
			
			arr[i][j] = rand() % (200);
		}
	}
}
void PrintArray(float* arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
		{
			cout << setw(4)<< " | " << arr[i][j];
		}
		cout << " |";
	}
	cout << endl;
}
float DiagonalSum(float* arr[], int n) {
	int suma = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			suma += arr[i][j];
		}
	}
	return suma;
}
void ResultArray(float* arr[], int n, int c) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] < 0)
			{
				cout << setw(4) << " | " << c;
			}
			else {
				cout << setw(4) << " | " << arr[i][j];
			}
			cout << " |";
		}
		cout << endl;
	}
	cout << endl << endl << endl << endl << endl << endl;
	system("pause");
}