#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
    int Tempo, VeloMedia;
    double Litros;

    cout<< fixed;
    cout<< setprecision(3);

    cin>> Tempo;
    cin>> VeloMedia;

    Litros= (VeloMedia * Tempo) / 12.000;

    cout<< Litros << endl;

    return 0;
}
