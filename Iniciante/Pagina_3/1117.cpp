#include <iostream>

using namespace std;

int main()
{
    float aux, N[2];
    int Ninv= 0, flag= 0;

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

    for (int i= 0; i < Ninv; i++)
        cout<< "nota invalida\n";

    cout<< "media = " << (N[0] + N[1]) / 2 << endl;

    return 0;
}
