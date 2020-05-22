#include <iostream>

using namespace std;

int main()
{
    int N, in= 0, out= 0;

    cin>> N;

    int X[N];

    for (int i= 0; i < N; i++)
    {
        cin>> X[i];

        if  (X[i] <= 20 and X[i] >= 10)
            in++;
    }

    out= N - in;

    cout<< in << " in\n" << out << " out\n";

    return 0;
}
