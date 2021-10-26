#include <iostream>
#include <math.h> 
#include <cmath>  
#include <stdio.h>
using namespace std;
int main() {
    double S, i, n, F;
    cout << "n = ";
    cin >> n;
    F = 1;
    S = 0;
    for (i = 1; i <= n; i++)
    {
        F = F*i;
        S =S+1/F;
    }
    cout << "S = ";
    cout << S << endl;
    system("pause");
}