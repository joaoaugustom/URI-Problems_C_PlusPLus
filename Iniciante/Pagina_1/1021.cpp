#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
    float N, aux1;
    int aux;

    cout<< fixed;
    cout<< setprecision(2);

    cin>> N;

    cout<< "NOTAS:" << endl;
    aux= N / 100; N= N - (aux * 100);
    cout<< aux << " nota(s) de R$ 100.00" << endl;
    aux= N / 50; N= N - (aux * 50);
    cout<< aux << " nota(s) de R$ 50.00" << endl;
    aux= N / 20; N= N - (aux * 20);
    cout<< aux << " nota(s) de R$ 20.00" << endl;
    aux= N / 10; N= N - (aux * 10);
    cout<< aux << " nota(s) de R$ 10.00" << endl;
    aux= N / 5; N= N - (aux * 5);
    cout<< aux << " nota(s) de R$ 5.00" << endl;
    aux= N / 2; N= N - (aux * 2);
    cout<< aux << " nota(s) de R$ 2.00" << endl;

    cout<< "MOEDAS:" << endl;
    aux= N / 1; N= N - (aux * 1);
    cout<< aux << " moeda(s) de R$ 1.00" << endl;
    aux= N / 0.50; N= N - (aux * 0.50);
    cout<< aux << " moeda(s) de R$ 0.50" << endl;
    aux= N / 0.25; N= N - (aux * 0.25);
    cout<< aux << " moeda(s) de R$ 0.25" << endl;
    aux= N / 0.10; N= N - (aux * 0.10);
    cout<< aux << " moeda(s) de R$ 0.10" << endl;
    aux= N / 0.05; N= N - (aux * 0.05);
    cout<< aux << " moeda(s) de R$ 0.05" << endl;
    aux1= N / 0.01;
    cout<< fixed;
    cout<< setprecision(0);
    cout<< aux1 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}