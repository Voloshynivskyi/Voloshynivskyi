#include <iostream>
#include <math.h> 
#include <cmath>  
using namespace std;
#define PI 3.14159265  
int main() {
    int a, b, c;

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;
    double radianA = acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c)), gradusA = 180 / PI * acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c));
    double radianB = acos((pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c)), gradusB = 180 / PI * acos((pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c));
    double radianC = acos((pow(b, 2) + pow(a, 2) - pow(c, 2)) / (2 * b * a)), gradusC = 180 / PI * acos((pow(b, 2) + pow(a, 2) - pow(c, 2)) / (2 * b * a));
    cout << "Kut a=";
    cout << gradusA;
    cout << " gradusiv  ";
    cout << radianA;
    cout << " radian  ";
    cout << "Kut b=";
    cout << gradusB;
    cout << " gradusiv  ";
    cout << radianB;
    cout << " radian  ";
    cout << "Kut c=";
    cout << gradusC;
    cout << " gradusiv  ";
    cout << radianC;
    cout << " radian  ";
    system("pause");
}