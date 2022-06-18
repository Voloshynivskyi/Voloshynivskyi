#pragma once
#include "TMatrix.h"
class TMatrix2 : public TMatrix
{
public:
	TMatrix2() : TMatrix(2) {}
	virtual ~TMatrix2() {}
	virtual int Determ() const {
		return Matrix[0][0] * Matrix[1][1] - Matrix[0][1] * Matrix[1][0];
	}
};

