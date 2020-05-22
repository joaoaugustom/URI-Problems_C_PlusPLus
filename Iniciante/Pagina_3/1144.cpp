#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x, aux= 1;

    cin>> x;

    for (int i= 0; i < x; i++)
    {
        cout<< aux << ' ' << aux * aux << ' ' << aux * aux * aux << endl;
        cout<< aux << ' ' << aux * aux + 1 << ' ' << aux * aux * aux + 1 << endl;

        aux++;
    }

    return 0;
}
