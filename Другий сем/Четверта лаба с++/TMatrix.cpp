#include "TMatrix.h"

TMatrix::TMatrix()
{
	this->size = 0;
	this->Matrix = 0;
}
TMatrix::TMatrix(int size1)
{
	size = size1;
	Matrix = new int* [size];

	for (int i = 0; i < size; ++i) {
		Matrix[i] = new int[size];
	}
}


void TMatrix::operator=(const TMatrix& other)
{
	for (int i = 0; i < this->size; i++)
	{
		for (int j = 0; j < this->size; j++)
		{
			this->Matrix[i][j] = other.Matrix[i][j];
		}
	}
	this->size = other.size;
}

int TMatrix::SUM() const
{
	int temp = 0;
	for (int i = 0; i < this->size; i++)
	{
		for (int j = 0; j < this->size; j++)
		{
			temp += this->Matrix[i][j];
		}
	}
	return temp;
}

ostream& operator<<(ostream& cout, const TMatrix& temp)
{
	for (int i = 0; i < temp.size; i++)
	{
		for (int j = 0; j < temp.size; j++)
		{
			cout << "|" << setw(3) << temp.Matrix[i][j];
		}
		cout << "|\n";
	}
	cout << "\n";
	return cout;
}
void TMatrix::EnterMatrix()
{
	cout << "¬вед≥ть матрицю:\n";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << "≈лемент" << "[" << i+1 << "][" << j+1 << "]: ";
			cin >> Matrix[i][j];
		}
	}
}
TMatrix::~TMatrix()
{
	for (unsigned int i = 0; i < size; ++i) {
		if (Matrix[i])
			delete[] Matrix[i];
	}

	if (Matrix)
		delete[] Matrix;
}