#include <iostream>

using namespace std;

int main()
{
    int opcao= 1, Grenal= 0, Inter= 0, Gremio= 0, Res[2];

    while(opcao != 2)
    {
        cin>> Res[0] >> Res[1];

        Grenal++;

        if  (Res[0] > Res[1])
            Inter++;
        else if(Res[1] > Res[0])
            Gremio++;

        cout<< "Novo grenal (1-sim 2-nao)\n";
        cin>> opcao;
    }

    cout<< Grenal << " grenais\nInter:" << Inter << "\nGremio:"
    << Gremio << "\nEmpates:" << Grenal - (Inter + Gremio);

    if  (Inter > Gremio)
        cout<< "\nInter venceu mais\n";
    else if(Gremio > Inter)
        cout<< "\nGremio venceu mais\n";
    else
        cout<< "\nNao houve vencedor\n";
    
    return 0;
}
