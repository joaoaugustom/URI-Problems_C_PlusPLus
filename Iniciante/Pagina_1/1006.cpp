#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
    double A, B, C, MEDIA;

    cout<< fixed;
    cout<< setprecision(1);

    cin>> A;
    cin>> B;
    cin>> C;

    MEDIA= ((A * 2) + (B * 3) + (C * 5)) / 10;

    cout<< "MEDIA = " << MEDIA << endl;

    return 0;
}