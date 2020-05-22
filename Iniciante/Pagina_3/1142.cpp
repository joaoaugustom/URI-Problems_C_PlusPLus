#include <iostream>

using namespace std;

int main()
{
    int x, aux= 1;

    cin>> x;

    for (int i= 0; i < x; i++)
    {
        for (int j= aux; j < aux + 3; j++)
        {
            cout<< j << ' ';
        }

        aux += 4;
        cout<< "PUM\n";
    }

    return 0;
}
