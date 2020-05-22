#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> a;
    int aux;
    
    while(true)
    {
        cin >> aux;
        if  (aux == 0)
        {
            break;
        }
        a.push_back(aux);
    }

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 1; j <= a[i]; j++)
        {
            cout << j;
            if  (j != a[i])
            {
                cout << ' ';
            }
        }

        if  (i != a.size() - 1)
        {
            cout << endl;
        }
    }

    cout << endl;
    return 0;
}
