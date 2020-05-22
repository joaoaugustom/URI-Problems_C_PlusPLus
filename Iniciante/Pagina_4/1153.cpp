#include <iostream>

using namespace std;

int main()
{
    int N, Fat = 1;

    do
    {
        cin >> N;
    } while (N < 0 || N > 13);
    
    for (int i = N; i > 0; i--)
    {
        Fat *= i;
    }

    cout << Fat << endl;

    return 0;
}
