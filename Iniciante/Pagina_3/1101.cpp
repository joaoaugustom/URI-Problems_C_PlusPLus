#include <iostream>

using namespace std;

int main()
{
    int S= 9999;
    int M[S], N[S], aux;

    for (int i= 0; i < S; i++)
    {
        cin>> M[i] >> N[i];

        if  (M[i] <= 0 or N[i] <= 0)
        {
            S= i;
            break;
        }
    }

    for (int i= 0; i < S; i++)
    {
        if  (N[i] < M[i])
        {
            aux= N[i];
            N[i]= M[i];
            M[i]= aux;
        }
        
        aux= 0;
        
        for (int j= M[i]; j <= N[i]; j++)
        {
            cout<< j << ' ';

            aux += j;
        }
            

        cout<< "Sum=" << aux << endl;
    }

    return 0;
}
