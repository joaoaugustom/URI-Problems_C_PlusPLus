#include <iostream>

using namespace std;

int main()
{
    int n, m;

    cin>> n >> m;

    if (m > n)
    {
        if (m % n == 0)
            cout << "Sao Multiplos\n";
        else
            cout << "Nao sao Multiplos\n";
    }
    else
    {
        if (n % m == 0)
            cout << "Sao Multiplos\n";
        else
            cout << "Nao sao Multiplos\n"; 
    }
    
    return 0;
}
