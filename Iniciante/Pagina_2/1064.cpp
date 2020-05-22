#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int aux= 0;
    float num[6], soma= 0;

    cout<< fixed << setprecision(1);

    for  (int i= 0; i < 6; i++)
    {
        cin>> num[i];

        if  (num[i] > 0)
        {
            aux++;
            soma += num[i];
        }
    }

    cout<< aux << " valores positivos\n" << soma / aux << endl; 

    return 0;
}
