#include <iostream>
#include <stdio.h>
using namespace std;
float* vvid(int&);
float* poshuk(float* A, int);
void vuvid(float* A, int);

int main()
{
	float* A;
	int n;
	A = vvid(n);
	A = poshuk(A, n);
	vuvid(A, n);
}

float* vvid(int& n) 
{
	cout << "Vvedit n: "; 
	cin >> n;
	cout << "Vvedit chleni massiva: " << endl;
	float* qwe = new float[n];
	for (int i = 0; i < n; i++) 
	{
		cin >> *(qwe + i);
	}
	return qwe;
}

float* poshuk(float* A, int n) 
{
	float minimal = A[0];
	float maximal = A[0];
	int min_index = 0;
	int max_index = 0;
	for (int i = 0; i < n; i++) 
	{
		if (A[i] > maximal) 
		{
			maximal = A[i];
			max_index = i;
		}
		else if (A[i] < minimal) 
		{
			minimal = A[i];
			min_index = i;
		}
	}
	A[max_index] = minimal;
	A[min_index] = maximal;
	return A;
}

void vuvid(float* A, int n) 
{		
	cout << "Rezultuyuchii masiv:" << endl;
	for (int i = 0; i < n; i++) 
	{

		cout << A[i] << endl;
	}
	system("pause");
}