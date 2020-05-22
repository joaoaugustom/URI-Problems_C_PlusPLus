#include <iostream>

using namespace std;

int main()
{
    int num[5], par= 0, impar= 0, posi= 0, negat= 0;

    for (int i= 0; i < 5; i++)
    {
        cin>> num[i];

        if  (num[i] % 2 == 0)
            par++;
        else
            impar++;

        if  (num[i] > 0)
            posi++;
        else if(num[i] < 0)
            negat++;
        
    }

    cout<< par << " valor(es) par(es)\n" << impar << " valor(es) impar(es)\n" << posi << " valor(es) positivo(s)\n"
    << negat << " valor(es) negativo(s)\n";

    return 0;
}
