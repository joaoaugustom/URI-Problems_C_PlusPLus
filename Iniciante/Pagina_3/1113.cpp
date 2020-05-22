#include <iostream>

using namespace std;

int main()
{
    int S= 9999;
    int X[S], Y[S];

    for (int i= 0; i < S; i++)
    {
        cin>> X[i] >> Y[i];

        if  (X[i] == Y[i])
        {
            S= i;
            break;
        }
    }

    for (int i= 0; i < S; i++)
    {
        if  (X[i] < Y[i])
            cout<< "Crescente\n";
        else
            cout<< "Decrescente\n";
    }

    return 0;
}
