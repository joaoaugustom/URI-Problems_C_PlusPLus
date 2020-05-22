#include <iostream>

using namespace std;

int main()
{
    int T;

    cin >> T;

    int PA[T], PB[T], cont[T];
    float G1[T], G2[T];

    for (int i = 0; i < T; i++)
    {
        cont[i] = 0;
        cin >> PA[i];
        cin >> PB[i];
        cin >> G1[i];
        cin >> G2[i];
        
        while (PA[i] <= PB[i])
        {
            cont[i]++;

            PA[i] += PA[i] * (G1[i] / 100);
            PB[i] += PB[i] * (G2[i] / 100);

            if  (cont[i] > 100) break;
        }
    }
    
    for (int i = 0; i < T; i++)
    {    
        if  (cont[i] > 100) cout << "Mais de 1 seculo." << endl;
        else cout << cont[i] << " anos." << endl;
    }

    return 0;
}
