#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{   
    int aux;
    float Media = 0;
    vector <int> Idade;

    cout << fixed;
    cout << setprecision(2);

    while(true)
    {
        cin >> aux;

        if  (aux < 0) break;

        Idade.push_back(aux);
    }

    for (int i = 0; i < Idade.size(); i++)
    {
        Media += Idade[i];
    }

    cout << Media / Idade.size() << endl;

    return 0;
}
