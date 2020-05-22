#include <iostream>

using namespace std;

int main()
{
    int X, Y, aux= 1;

    cin>> X >> Y;

    for (int i= 1; i <= Y; i++)
    {
        cout<< i;
        
        if  (aux == X)
        {
            cout<< endl;
            aux= 1;
        }
        else if(i != Y)
        {
            cout<< ' ';
            aux++;
        }
    }

    if  (Y % X != 0)
        cout<< endl;

    return 0;
}
