#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int X[N];

    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
    }

    for (int i = 0; i < N; i++)
    {
        if  (X[i] == 2) cout << X[i] << " eh primo" << endl;

        for (int j = 2; j < X[i]; j++)
        {
            if  (X[i] % j == 0)
            {
                cout << X[i] << " nao eh primo" << endl;
                break;
            }

            if  (j == X[i] - 1) cout << X[i] << " eh primo" << endl;
        }
    }

    return 0;
}
