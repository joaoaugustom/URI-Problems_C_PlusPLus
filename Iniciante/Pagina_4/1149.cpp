#include <iostream>

using namespace std;

int main()
{
    int A, N, Soma = 0;

    cin >> A;

    do
    {
        cin >> N;
    } while (N <= 0);

    for (int i = 0; i < N; i++)
    {
        Soma += A + i;
    }

    cout << Soma << endl;

    return 0;
}
