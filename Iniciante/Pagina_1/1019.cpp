#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int Valor, Min= 0, Hora= 0, Seg= 0;
    double aux;

    cin>> Valor;

    if  (Valor >= 60)
    {
        aux= Valor / 60.00;

        if  (aux >= 60)
        {
            aux= aux / 60.00;
            Hora= aux;
            aux= aux - Hora;
            aux= aux * 60;
            Min= aux;
            aux= aux - Min;
            aux= aux * 60;
            Seg= aux;

            cout<< Hora << ":" << Min << ":" << Seg << endl;
        }
        else
        {
            Min= aux;
            aux= aux - Min;
            aux= aux * 60;
            Seg= aux;

            cout<< Hora << ":" << Min << ":" << Seg << endl;
        }

    }
    else
    {
        Seg= Valor;
        cout<< Hora << ":" << Min << ":" << Seg << endl;
    }

    return 0;
}