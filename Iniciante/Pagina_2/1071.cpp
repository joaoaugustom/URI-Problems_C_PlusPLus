#include <iostream>

using namespace std;

int main()
{
    int num1, num2, aux;

    cin>> num1 >> num2;

    if  (num2 < num1)
    {
        aux = num2;
        num2 = num1;
        num1 = aux;
        aux = 0;
    }

    if  (num1 % 2 == 0)
        num1++;
    else
        num1 += 2;

    while(num1 < num2)
    {
        aux += num1;

        num1 += 2;
    }

    cout<< aux << endl;

    return 0;
}
