#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
    double SalFixo, Venda, TOTAL;
    double const Comissao= 0.15;
    string Nome;

    cout<< fixed;
    cout<< setprecision(2);

    getline(cin,Nome);
    cin>> SalFixo;
    cin>> Venda;

    TOTAL= (Venda * Comissao) + SalFixo;

    cout<< "TOTAL = R$ " << TOTAL << endl;

    return 0;
}