#include <iostream>

using namespace std;

int main()
{
    int C= 9999, senha[C];

    for (int i= 0; i < C; i++)
    {
        cin>> senha[i];

        if  (senha[i] == 2002)
        {
            C= i;
            break;
        }
    }

    for (int i= 0; i <= C; i++)
    {
        if  (senha[i] != 2002)
            cout<< "Senha Invalida\n";
        else
            cout<< "Acesso Permitido\n";
    }

    return 0;
}
