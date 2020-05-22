#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
    double Y, Consumo;
    int X;

    cout<< fixed;
    cout<< setprecision(1);

    cin>> X;
    cin>> Y;

    cout<< fixed;
    cout<< setprecision(3);   

    Consumo= X / Y;

    cout<< Consumo << " km/l" << endl;

    return 0;
}