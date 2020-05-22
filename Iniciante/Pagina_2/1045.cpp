#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int i, j, y= 1;
    float X[3], aux;

    cout<< fixed << setprecision(2);

    for (i= 0; i < 3; i++)
    {
        cin>> X[i];
    }

    for (i= 0; i < 3; i++)
    {
        for (j= i + 1; j < 3; j++)
        {
            if  (X[i] <= X[j])
            {
                aux= X[i];
                X[i]= X[j];
                X[j]= aux;
            }
        }
    }

    if  (X[0] >= (X[1] + X[2]))
        cout<< "NAO FORMA TRIANGULO\n";
    else
    {
        if   (pow(X[0], 2) == (pow(X[1], 2) + pow(X[2], 2)))
            cout<< "TRIANGULO RETANGULO\n";
        else if(pow(X[0], 2) > (pow(X[1], 2) + pow(X[2], 2)))
            cout<< "TRIANGULO OBTUSANGULO\n";
        else if(pow(X[0], 2) < (pow(X[1], 2) + pow(X[2], 2)))
            cout<< "TRIANGULO ACUTANGULO\n";
    }

    for (i= 0; i < 2; i++)
    {
        if  (X[i] == X[i + 1])
        {
            y++;
        }
    }

    if  (y == 3)
        cout<< "TRIANGULO EQUILATERO\n";
    else if(y == 2)
        cout<< "TRIANGULO ISOSCELES\n";

    return 0;
}