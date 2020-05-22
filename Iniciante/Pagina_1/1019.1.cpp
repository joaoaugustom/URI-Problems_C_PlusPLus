#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int N, H, Min, S;

    cin>> N;

    H= N / 3600;
    N= N % 3600;
    Min= N / 60;
    S= N % 60;

    cout<< H << ":" << Min << ":" << S << endl;

    return 0;
}