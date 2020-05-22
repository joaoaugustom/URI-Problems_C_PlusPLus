#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<< fixed << setprecision(1);

    int N, i, j, peso[3] = {2, 3, 5};

    cin>> N;

    float Test[N][3], aux, Media[N];

    for (i= 0; i < N; i++)
    {
        for (j= 0; j < 3; j++)
            cin>> Test[i][j];
    }

    for (i= 0; i < N; i++)
    {
        for (j= 0; j < 3; j++)
            aux= aux + (Test[i][j] * peso[j]);

        Media[i]= aux / 10;
        aux= 0;
    }

    for (i= 0; i < N; i++)
        cout<< Media[i] << endl;

    return 0;
}
