#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float S = 1.00, j = 2.00;

    for (int i = 3; i <= 39; i += 2)
    {
        S += i / j;
        j *= 2.00;
    }

    cout << fixed << setprecision(2) << S << endl;

    return 0;
}
