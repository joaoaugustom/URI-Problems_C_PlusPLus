#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int Valor, aux;

    cin>> Valor;

    cout<< Valor << endl;
    aux= Valor / 100;
    Valor= Valor - (aux * 100);
    cout<< aux << " nota(s) de R$ 100,00" << endl;
    aux= Valor / 50;
    Valor= Valor - (aux * 50);
    cout<< aux << " nota(s) de R$ 50,00" << endl;
    aux= Valor / 20;
    Valor= Valor - (aux * 20);
    cout<< aux << " nota(s) de R$ 20,00" << endl;
    aux= Valor / 10;
    Valor= Valor - (aux * 10);
    cout<< aux << " nota(s) de R$ 10,00" << endl;
    aux= Valor / 5;
    Valor= Valor - (aux * 5);
    cout<< aux << " nota(s) de R$ 5,00" << endl;
    aux= Valor / 2;
    Valor= Valor - (aux * 2);
    cout<< aux << " nota(s) de R$ 2,00" << endl;
    aux= Valor / 1;
    Valor= Valor - (aux * 1);
    cout<< aux << " nota(s) de R$ 1,00" << endl;

    return 0;
}
