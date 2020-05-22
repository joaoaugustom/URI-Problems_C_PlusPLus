#include <iostream>

using namespace std;

int main()
{
    float aux= 1.00;

    for (float i= 0.0; i < 2.2; i += 0.2)
    {
        for (float j= aux; j < aux + 2.2; j++)
            cout<< "I=" << i << " J=" << j << endl;

        aux += 0.2;
    }

    return 0;
}
