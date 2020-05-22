#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
    double R, VOLUME;
    double const pi= 3.14159;

    cout<< fixed;
    cout<< setprecision(3);

    cin>> R;

    VOLUME= (4.0/3) * pi * (R * R * R);

    cout<< "VOLUME = " << VOLUME << endl;

    return 0;
}