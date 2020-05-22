#include <iostream>
#include <iomanip>

using namespace std;

float N[2];
int Ninv= 0, flag= 0;
void Inserir(), Fim();

int main()
{
    cout<< fixed << setprecision(2);

    Inserir();

    for (int i= 0; i < Ninv; i++)
        cout<< "nota invalida\n";

    cout<< "media = " << (N[0] + N[1]) / 2 << endl;

    Fim();

    return 0;
}

void Inserir()
{
    float aux= 0;

    while(flag < 2)
    {
        cin>> aux;

        if  (aux >= 0 and aux <= 10)
        {
            N[flag]= aux;
            flag++;
        }
        else
            Ninv++;
    }

    return;
}

void Fim()
{
    int X;

    while(X != 1 and X != 2)
    {
        cout<< "novo calculo (1-sim 2-nao)\n";

        cin>> X;
    }

    if  (X == 1)
    {
        Ninv= 0;
        flag= 0;

        main();
    }
    
    return;
}
