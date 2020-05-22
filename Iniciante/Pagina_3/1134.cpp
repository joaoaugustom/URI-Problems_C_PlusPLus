#include <iostream>

using namespace std;

int main()
{
    int Al= 0, Ga= 0, Di= 0, aux;

    do
    {
        cin>> aux;

        if  (aux == 1)
            Al++;
        else if(aux == 2)
            Ga++;
        else if(aux == 3)
            Di++;
    }
    while(aux != 4);

    cout<< "MUITO OBRIGADO\nAlcool: " << Al << "\nGasolina: " << Ga
        << "\nDiesel: " << Di << endl;

    return 0;
}
