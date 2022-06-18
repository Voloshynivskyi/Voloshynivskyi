#pragma once
#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
class TMatrix
{
protected:
	int** Matrix;
	int size;
public:
	TMatrix();
	TMatrix(int size1);
	friend ostream& operator<<(ostream& cout, const TMatrix& temp);
	void operator=(const TMatrix& other);
	int SUM() const;
	void EnterMatrix();
	virtual ~TMatrix();
	virtual int Determ() const = 0;
};

