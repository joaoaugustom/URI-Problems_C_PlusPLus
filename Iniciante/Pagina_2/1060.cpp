#include <iostream>

using namespace std;

int main()
{
    int i, aux= 0;
    float num[6];

    for (i= 0; i < 6; i++)
        cin>> num[i];

    for (i=0; i < 6; i++)
    {
        if  (num[i] > 0)
            aux++;
    }

    cout<< aux << " valores positivos\n";

    return 0;
}
