#include <iostream>

using namespace std;

int main()
{
    int N, aux, F[2] = {0, 1};
    
    do
    {
        cin >> N;
    } while (N > 46 || N < 0);

    cout << "0 1 ";
    for (int i = 0; i < N - 2; i++)
    {
        cout << F[0] + F[1];
        if  (i < N - 3)
        {
            cout << ' ';
        }
        aux = F[1];
        F[1] = F[0] + F[1];
        F[0] = aux;
    }
    
    cout << endl;
    return 0;
}
