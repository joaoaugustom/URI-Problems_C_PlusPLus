#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double X, Y, N[100];
    cout << fixed << setprecision(4);

    cin >> X;
    Y = X;

    for (int i = 0; i < 100; i++)
    {
        cout << "N[" << i << "] = " << Y << endl;
        
        Y /= 2;
    }

    return 0;
}
