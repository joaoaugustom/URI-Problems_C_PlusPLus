#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
    double A, B, C;
    double const pi= 3.14159;

    cout<< fixed;
    cout<< setprecision(3);

    cin>> A;
    cin>> B;
    cin>> C;

    cout<< "TRIANGULO: " << (A * C) / 2 << endl;
    cout<< "CIRCULO: " << pi * (C * C) << endl;
    cout<< "TRAPEZIO: " << ((A + B) * C) / 2 << endl;
    cout<< "QUADRADO: " << B * B << endl;
    cout<< "RETANGULO: " << A * B << endl;

    return 0;
}