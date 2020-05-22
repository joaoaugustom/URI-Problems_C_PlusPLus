#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
    int Cod1, NumPeca1, Cod2, NumPeca2;
    double ValorU1, ValorU2, Total= 0;

    cout<< fixed;
    cout<< setprecision(2);

    cin>> Cod1;
    cin>> NumPeca1;
    cin>> ValorU1;
    cin>> Cod2;
    cin>> NumPeca2;
    cin>> ValorU2;

    Total= (NumPeca1 * ValorU1) + (NumPeca2 * ValorU2);

    cout<< "VALOR A PAGAR: R$ " << Total << endl;

    return 0;
}