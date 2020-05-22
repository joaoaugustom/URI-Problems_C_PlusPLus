#include <iostream>

using namespace std;

int main()
{
    int aux= 7;

    for (int i= 1; i < 10; i += 2)
    {
        for (int j= aux; j > aux - 3; j--)
            cout<< "I=" << i << " J=" << j << endl;

        aux += 2;
    }

    return 0;
}
