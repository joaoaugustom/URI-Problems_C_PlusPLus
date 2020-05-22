#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float A, B, C;

    cout<< fixed;
    cout<< setprecision(1);

    cin>> A;
    cin>> B;
    cin>> C;

    if ((A + C) > B and (B + C) > A and (A + B) > C)
    {
        cout<< "Perimetro = " << A + B + C << endl;
    }
    else
    {
        cout<< "Area = " << (A + B) * C / 2 << endl;
    }

    return 0;
}
