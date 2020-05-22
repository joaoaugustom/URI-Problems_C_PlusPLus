#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float S = 1.00;

    for (int i = 2; i < 101; i++)
    {
        S += 1.00 / i;
    }

    cout << fixed << setprecision(2) << S << endl;

    return 0;
}
