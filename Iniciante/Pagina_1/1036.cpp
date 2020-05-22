#include <iostream>
#include <windows.h>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    double A, B, C, Delta, R1, R2;

    cout<< fixed;
    cout<< setprecision(5);

    cin>> A;
    cin>> B;
    cin>> C;

    Delta= (pow(B, 2)) - (4 * A * C);

    if  (A == 0 || Delta < 0)
    {
        cout<< "Impossivel calcular" << endl;
    }
    else
    {
        R1= (-B + sqrt(Delta)) / (2 * A);
        R2= (-B - sqrt(Delta)) / (2 * A);

        cout<< "R1 = " << R1 << endl;
        cout<< "R2 = " << R2 << endl;
    }


}