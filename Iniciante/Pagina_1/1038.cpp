#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main()
{
    int Codigo, Quant;
    float Total;

    cout<< fixed;
    cout<< setprecision(2);

    cin>> Codigo;
    cin>> Quant;

    switch  (Codigo)
    {
        case 1:
            Total= 4 * Quant;
            break;

        case 2:
            Total= 4.5 * Quant;
            break;

        case 3:
            Total= 5 * Quant;
            break;
        
        case 4:
            Total= 2 * Quant;
            break;

        case 5:
            Total= 1.5 * Quant;
    }

    cout<< "Total: R$ " << Total << endl;

    return 0;
}