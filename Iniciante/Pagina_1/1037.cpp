#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
    float Num;

    cout<< fixed;
    cout<< setprecision(2);

    cin>> Num;

    if  (Num >= 0 && Num <= 25)
    {
        cout<< "Intervalo [0,25]\n";
    }
    else
    if  (Num > 25 && Num <= 50)
    {
        cout<< "Intervalo (25,50]\n";
    }
    else
    if  (Num > 50 && Num <= 75)
    {
        cout<< "Intervalo (50,75]\n";
    }
    else
    if  (Num > 75 &&Num <= 100)
    {
        cout<< "Intervalo (75,100]\n";
    }
    else 
    {
        cout<< "Fora de intervalo\n";
    }

    return 0;
}