#include "TMatrix.h"
#include "TMatrix2.h"
#include "TMatrix3.h"
#include "functions.h"
int main()
{
	ukrainian();
	TMatrix2 a;
	TMatrix3 b;
	
	a.EnterMatrix();
	b.EnterMatrix();	
	cout << a;
	cout << b;
	cout << "Cума елементів першої матриці: " << a.SUM() << "\n";
	cout << "Визначник першої матриці: " << a.Determ() << "\n";
	cout << "Визначник другої матриці: " << b.Determ() << "\n";
	cout << "Сума усіх елементів першої матриці + Визначник першої матриці + Визначник другої матриці:\n " << a.SUM()+a.Determ()+b.Determ() << "\n";
}
