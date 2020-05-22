#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
    double raio, area;
    double const n= 3.14159;

    cout<< fixed;
    cout<< setprecision(2);

    cin>> raio;

    cout<< fixed;
    cout<< setprecision(4);

    area= n * (raio * raio);

    cout<< "A=" << area << endl;

    return 0;
}