#include <iostream>

using namespace std;

int main()
{
    unsigned long long int N;

    cin >> N;

    unsigned long long int X[N], F[N], aux1 = 0, aux2 = 1;

    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
    }

    for (int i = 0; i < N; i++)
    {
        F[i] = aux1;

        for (int j = 1; j <= X[i]; j++)
        {
            F[i] = aux2;
            aux2 += aux1;
            aux1 = F[i];
        }

        aux1 = 0; 
        aux2 = 1;
    }

    for (int i = 0; i < N; i++)
    {
        cout << "Fib(" << X[i] << ") = " << F[i] << endl;
    }

    return 0;
}
