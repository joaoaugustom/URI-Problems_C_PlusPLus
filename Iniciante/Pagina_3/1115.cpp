#include <iostream> 

using namespace std;

int main()
{
    int C= 9999, X[C], Y[C];

    for (int i= 0; i < C; i++)
    {
        cin>> X[i] >> Y[i];

        if  (X[i] == 0 or Y[i] == 0)
        {
            C= i;
            break;
        }
    }

    for (int i= 0; i < C; i++)
    {
        if  (X[i] > 0 and Y[i] > 0)
            cout<< "primeiro\n";
        else if(X[i] > 0)
            cout<< "quarto\n";
        else if(Y[i] > 0)
            cout<< "segundo\n";
        else
            cout<< "terceiro\n";
    }

    return 0;
}
