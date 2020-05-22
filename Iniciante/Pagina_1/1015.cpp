#include <iostream>
#include <windows.h>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    double x1, x2, y1, y2, Distancia;

    cout<< fixed;
    cout<< setprecision(4);

    cin>> x1;
    cin>> y1;
    cin>> x2;
    cin>> y2;

    Distancia= sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout<< Distancia << endl;

    return 0;
}