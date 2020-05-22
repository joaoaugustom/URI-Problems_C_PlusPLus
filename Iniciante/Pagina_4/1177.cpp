#include <iostream>

using namespace std;

int main()
{
    int T, N[1000], X = 0;

    cin >> T;

    for (int i = 0; i < 1000; i++)
    {
        cout << "N[" << i << "] = " << X << endl;

        X++;

        if (X == T) X = 0;
    }

    return 0;
}
