#pragma once
#include "TMatrix.h"
class TMatrix3 : public TMatrix
{
public:
	TMatrix3() : TMatrix(3) {}
	virtual ~TMatrix3() {}
	virtual int Determ() const {
		return +Matrix[0][0] * Matrix[1][1] * Matrix[2][2]+ Matrix[0][1] * Matrix[1][2] * Matrix[2][0]	+ Matrix[1][0] * Matrix[2][1] * Matrix[0][2]- Matrix[0][2] * Matrix[1][1] * Matrix[2][0] - Matrix[0][1] * Matrix[1][0] * Matrix[2][2]- Matrix[1][2] * Matrix[2][1] * Matrix[0][0];
	}
};

