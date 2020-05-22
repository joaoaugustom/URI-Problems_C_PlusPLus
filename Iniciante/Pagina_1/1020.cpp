#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int N, Ano, Mes, Dia;

    cin>> N;

    Ano= N / 365;
    N= N % 365;
    Mes= N / 30;
    Dia= N % 30;

    cout<< Ano << " ano(s)" << endl;
    cout<< Mes << " mes(es)" << endl;
    cout<< Dia << " dia(s)" << endl;

    return 0;
}