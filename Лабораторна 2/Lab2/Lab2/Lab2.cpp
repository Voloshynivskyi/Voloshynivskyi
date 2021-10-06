#include <iostream>
#include <math.h> 
#include <cmath>  
#include <stdio.h>
using namespace std;
int main() {
    double x, y;
    cout << "x="; 
    cin >> x;
    if (x <= -1)
    {
        y = 1 / pow(x,2);
    }
    else
    {
        if (x > -1 && x < 2)
        {
            y = pow(x, 2);
        }
        else
        {
            y = 4;
        }
    }

cout << "y = ";
cout << y;
cout << "";
system("pause");
}