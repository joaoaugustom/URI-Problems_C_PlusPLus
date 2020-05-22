#include <iostream>

using namespace std;

int main()
{
    int N, aux;

    cin>> N;

    int X[N], Y[N], soma[N];

    for (int i= 0; i < N; i++)
    {
        cin>> X[i] >> Y[i];

        if  (Y[i] < X[i])
        {
            aux= Y[i];
            Y[i]= X[i];
            X[i]= aux;
        }

        if  (X[i] % 2 == 0)
            X[i]++;
        else
            X[i] += 2;
        

        soma[i]= 0;

        for (int j= X[i]; j < Y[i]; j += 2)
            soma[i] += j;
    }
        
    for (int i= 0; i < N; i++)
        cout<< soma[i] << endl;

    

    return 0;
}
