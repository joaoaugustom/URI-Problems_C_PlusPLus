#include <iostream>

using namespace std;

int main()
{
    int inic, fin;

    cin>> inic >> fin;

    if  (inic >= fin)
        cout<< "O JOGO DUROU " << (24 - inic) + fin << " HORA(S)\n";
    else
        cout<< "O JOGO DUROU " << fin - inic << " HORA(S)\n";

    return 0;
}
