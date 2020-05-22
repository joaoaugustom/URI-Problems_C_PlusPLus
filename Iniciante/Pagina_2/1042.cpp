#include <iostream>

using namespace std;

int main()
{
    int Num[3], aux, X[3], i, j;

    for (i= 0; i < 3; i++)
    {
        cin>> Num[i];
        X[i]= Num[i];
    }

    for (i= 0; i < 3; i++)
    {
        for (j= i + 1; j < 3; j++)
        {
            if  (X[i] > X[j])
            {
                aux= X[i];
                X[i]= X[j];
                X[j]= aux;
            }
        }
    }

    for (i= 0; i < 3; i++)
    {
        cout<< X[i] << endl;
    }

    cout<< endl;

    for (i= 0; i < 3; i++)
    {
        cout<< Num[i] << endl;
    }

    return 0;
}