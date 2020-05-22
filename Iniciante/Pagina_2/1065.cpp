#include <iostream>

using namespace std;

int main()
{
    int num[5], aux= 0;

    for (int i= 0; i < 5; i++)
    {
        cin>> num[i];

        if  (num[i] % 2 == 0)
            aux++;
    }

    cout<< aux << " valores pares\n";

    return 0;
}
