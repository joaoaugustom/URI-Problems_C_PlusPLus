#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> X;
    int aux;

    while(true)
    {
        cin >> aux;
        if  (aux == 0) break;

        if  (aux % 2 != 0) aux++;

        X.push_back(aux);
    }

    for (int i = 0; i < X.size(); i++)
    {
        aux = 0;

        for (int j = 0; j < 5; j++)
        {
            aux += X[i];
            X[i] += 2;
        }

        cout << aux << endl;
    }

    return 0;
}
