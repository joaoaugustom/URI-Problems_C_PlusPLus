#include <iostream>

using namespace std;

int main()
{
    int N;

    cin>> N;

    int X[N];

    for (int i= 0; i < N; i++)
        cin>> X[i];

    for (int i= 0; i < N; i++)
    {
        if  (X[i] == 0)
            cout<< "NULL\n";
        else
        {
            if  (X[i] % 2 == 0)
                cout<< "EVEN ";
            else 
                cout<< "ODD ";

            if  (X[i] > 0)
                cout<< "POSITIVE\n";
            else 
                cout<< "NEGATIVE\n";
        }
        
    }

    return 0;
}