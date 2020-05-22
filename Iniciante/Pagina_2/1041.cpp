#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
    float X, Y;

    cout<< fixed;
    cout<< setprecision(1);

    cin>> X;
    cin>> Y;

    if  (X == 0 && Y == 0)
    {
        cout<< "Origem" << endl;
    }
    else if  (X == 0 && Y != 0)
    {
        cout<< "Eixo Y" << endl;
    }
    else if  (X != 0 && Y == 0)
    {
        cout<< "Eixo X" << endl;
    }
    else if  (X > 0 && Y > 0)
    {
        cout<< "Q1" << endl;
    }
    else if  (X > 0 && Y < 0)
    {
        cout<< "Q4" << endl;
    }
    else if (X < 0 && Y > 0)
    {
        cout<< "Q2" << endl;
    }
    else 
    {
        cout<< "Q3" << endl;
    }

    return 0;
}
