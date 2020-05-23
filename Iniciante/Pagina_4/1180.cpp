// URI Online Judge - 1180
// Menor e Posição

#include <iostream>

using namespace std;

int main()
{
    int N = 0;

    cin >> N;

    int X[N], menor = 2147483647, posicao = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> X[i];

        if (X[i] < menor)
        {
            menor = X[i];
            posicao = i;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}
