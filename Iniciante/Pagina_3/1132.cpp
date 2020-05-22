#include <iostream>

using namespace std;

int main()
{
    int X, Y, aux, res= 0;

    cin>> X >> Y;

    if  (Y < X)
    {
        aux= Y;
        Y= X;
        X= aux;
    }    

    for (int i= X; i <= Y; i++)
    {
        if  (i % 13 != 0)
            res += i;
    }

    cout<< res << endl;

    return 0;
}
