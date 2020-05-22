#include <iostream>

using namespace std;

int main()
{
    int N[20], j = 0;

    for (int i = 0; i < 20; i++)
    {
        cin >> N[i];
    }

    for (int i = 19; i >= 0; i--)
    {
        cout << "N[" << j << "] = " << N[i] << endl;
        j++;
    }

    return 0;
}
