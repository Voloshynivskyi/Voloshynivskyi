#include <iostream>
#include <math.h>

using namespace std;
float formula(double x, double p, int n) {
    double x1 = x;
    for (int i = 0; i < n; i++) {
        x1 = (double)(1 / p) * ((x / (double)pow(x1, (p - 1))) + (double)(x1 * (p - 1)));
    }
    return (double)x1;
}
float factorial(int m) {
    double F1 = 1;
    for (int i = 1; i <= m; i++)
    {
        F1 = F1 * i;
    }
    return (float)F1;
}
int main() {
   
    double m;
    double k;
    double n;
    cout << "Input m: ";
    cin >> m;
    cout << "Input k: ";
    cin >> k;
    cout << "Input n: ";
    cin >> n;
    double Fm=factorial(m);
    double Fk=factorial(k);
    double pershe = formula(4, 2 / 3, n);
    double druge = formula(4, 3 / 5, n);

    cout << ((Fk / Fm) * pershe - pow(m, 2) * druge) << endl;

    system("pause");

}
