#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<< fixed << setprecision(1);

    int N;

    cin>> N;

    int X[N], Y[N];

    for (int i= 0; i < N; i++)
        cin>> X[i] >> Y[i];

    for (int i= 0; i < N; i++)  
    {
        if  (Y[i] == 0)
            cout<< "divisao impossivel\n";
        else
            cout<< (static_cast<float>(X[i])) / (static_cast<float>(Y[i])) << endl;
    }

    return 0;
}
