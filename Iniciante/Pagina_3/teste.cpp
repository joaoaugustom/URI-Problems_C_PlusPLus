#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x= 10, y= 3;

    cout<< fixed << setprecision(1);

    cout<< (static_cast<float>(x)) / (static_cast<float>(y)) << endl;

    return 0;
}
