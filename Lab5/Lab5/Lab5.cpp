#include <iostream>
#include <math.h> 
#include <cmath>  
#include <stdio.h>
using namespace std;
int y=201,x=200,s = 0, s1 = 0;
int main()
{
    while (x < 300)
    {
        y = x + 1;
        while (y < 300)
        {
            for (int i = 1; i < x; i++)
            {
                if (x % i == 0)
                {
                    s += i;
                }
            }
            for (int i = 1; i < y; i++)
            {
                if (y % i == 0)
                {
                    s1 += i;
                }
            }
            if (s == y && s1 == x)
            {
                cout << "Para " << x << " ta " << y << " - druzhni chisla" << endl;
            }
            s = 0;
            s1 = 0;
            y++;
        }
        x++;
    }
}