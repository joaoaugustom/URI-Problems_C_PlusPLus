#include <iostream>
#include <vector>

using namespace std;

int main()
{
    unsigned int N;
    vector <int> Divisores;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        if  (N % i == 0)
        {
            Divisores.push_back(i);
        }
    }

    for (int i = 0; i < Divisores.size(); i++)
    {
        cout << Divisores[i] << endl;
    }

    return 0;
}
