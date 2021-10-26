#include <iostream>
#include <math.h> 
#include <cmath>  
#include <stdio.h>
using namespace std;
int main() {
    double x, y, a, e, y1;
    cout << "a = ";
    cin >> a;
    cout << "x = ";
    cin >> x;
    cout << "e = ";
    cin >> e;
    y1 = a;
    y = (y1 + x / y1) / 2;
    while (abs(pow(y, 2) - pow(y1, 2)) >= e)
    {
        y1 = y;
        y = (y1 + x / y1) / 2;
    } 
    cout << "yi = ";
    cout << y << endl;
    system("pause");
}