#include <iostream>

using namespace std;

int main()
{
    int X, Z, Soma = 0, cont = 0;

    cin >> X;

    do
    {
        cin >> Z;
    } while (Z <= X);
    
    do
    {
        cont++;
        Soma += X;
        X++;
    }while(Soma < Z);

    cout << cont << endl;

    return 0;
}
