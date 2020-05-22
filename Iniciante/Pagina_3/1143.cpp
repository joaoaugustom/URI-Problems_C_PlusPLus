#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x, aux= 1;

    cin>> x;

    for (int i= 0; i < x; i++)
    {
        cout<< aux << ' ' << pow(aux, 2) << ' ' << pow(aux, 3) << endl;

        aux++;
    }

    return 0;
}
