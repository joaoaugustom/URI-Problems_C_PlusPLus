// 1005
#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
    double A, B, MEDIA;

    cout<< fixed;
    cout<< setprecision(2);

    cin>> A;
    cin>> B;

    cout<< fixed;
    cout<< setprecision(5);

    MEDIA= ((A * 3.5) + (B * 7.5)) / 11;

    cout<< "MEDIA = " << MEDIA << endl;

    return 0;
}