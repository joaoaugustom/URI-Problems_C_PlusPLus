#include <iostream>

using namespace std;

int main()
{
    int Vpar[5][3], Vimp[5][3], contP = 0, contI = 0, aux = 0, posPar[2] = {0, 0};
    int posImp[2] = {0, 0}, flagP = 0, flagI = 0;

    for (int i = 0; i < 15; i++)
    {
        cin >> aux;

        if (aux % 2 == 0)
        {
            Vpar[posPar[0]][posPar[1]] = aux;
            posPar[0]++;
            if (posPar[0] > 4)
            {
                posPar[0] = 0;
                posPar[1]++;
                contP++;

                if (flagI == 0 && flagP == 0) flagP++;
            }
        }
        else 
        {
            Vimp[posImp[0]][posImp[1]] = aux;
            posImp[0]++;
            if (posImp[0] > 4)
            {
                posImp[0] = 0;
                posImp[1]++;
                contI++;

                if (flagI == 0 && flagP == 0) flagI++;
            }            
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (flagP > 0)
        {
            if (i < contP)
            {
                for (int j = 0; j < 5; j++)
                {
                    cout << "par[" << j << "] = " << Vpar[j][i] << endl;
                }
            }

            if (i < contI)
            {
                for (int j = 0; j < 5; j++)
                {
                    cout << "impar[" << j << "] = " << Vimp[j][i] << endl;
                }
            }
        }
        else
        {
            if (i < contI)
            {
                for (int j = 0; j < 5; j++)
                {
                    cout << "impar[" << j << "] = " << Vimp[j][i] << endl;
                }
            }
            
            if (i < contP)
            {
                for (int j = 0; j < 5; j++)
                {
                    cout << "par[" << j << "] = " << Vpar[j][i] << endl;
                }
            }
        }
    }

    if (posImp[0] > 0)
    {
        for (int i = 0; i < posImp[0]; i++)
        {
            cout << "impar[" << i << "] = " << Vimp[i][contI] << endl;
        }
    }

    if (posPar[0] > 0)
    {
        for (int i = 0; i < posPar[0]; i++)
        {
            cout << "par[" << i << "] = " << Vpar[i][contP] << endl;
        }       
    }

    return 0;
}
