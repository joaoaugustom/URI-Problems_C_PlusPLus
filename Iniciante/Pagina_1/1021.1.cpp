#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
    float N= 0.03;
    int x;
    double const y= 0.01;

    cout<< fixed;
    cout<< setprecision(2);

    x= N / y;

    //cout<< fixed;
    //cout<< setprecision(0);
    cout<< x;

    return 0;
}