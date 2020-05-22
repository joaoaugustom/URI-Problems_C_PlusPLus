#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
    int NumFun, Numh;
    float Salarioh, SalarioT;

    cout<< fixed;
    cout<< setprecision(2);

    cin>> NumFun;
    cin>> Numh;
    cin>> Salarioh;

    SalarioT= Numh * Salarioh;

    cout<< "NUMBER = " << NumFun << endl;
    cout<< "SALARY = U$ " << SalarioT << endl;

    return 0;
}
