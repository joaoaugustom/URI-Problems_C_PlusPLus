#include <iostream>

using namespace std;

int main()
{
    int N[100], pos, maior= 0;

    for (int i= 0; i < 100; i++)
    {
        cin>> N[i];

        if  (N[i] > maior)
        {
            maior= N[i];
            pos= i + 1;
        }
    }

    cout<< maior << endl << pos << endl;

    return 0;
}
