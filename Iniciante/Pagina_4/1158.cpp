#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int X[N], Y[N], Soma[N];

    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
        if  (X[i] % 2 == 0) X[i]++;
        cin >> Y[i];

        Soma[i] = 0;
        for (int j = 0; j < Y[i]; j++)
        {
            Soma[i] += X[i];
            X[i] += 2;
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << Soma[i] << endl;
    }

    return 0;
}
