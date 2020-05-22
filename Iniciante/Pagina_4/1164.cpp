#include <iostream>

using namespace std;

int main()
{
    int N, Soma = 0;

    cin >> N;

    int X[N];

    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j < X[i]; j++)
        {
            if  (X[i] % j == 0)
            {
                Soma += j;
            }
        }

        if  (Soma == X[i]) cout << X[i] << " eh perfeito" << endl;
        else cout << X[i] << " nao eh perfeito" << endl;
        Soma = 0;
    }

    return 0;
}
