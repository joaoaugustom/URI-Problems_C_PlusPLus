#include <iostream>

using namespace std;

int main()
{
    int inic_h, fin_h, inic_min, fin_min;

    cin>> inic_h >> inic_min >> fin_h >> fin_min;

    if  (inic_h == fin_h and inic_min == fin_min)
        cout<< "O JOGO DUROU " << (24 - inic_h) + fin_h << " HORA(S) E " << fin_min - inic_min << " MINUTO(S)\n";

    else if  (inic_min <= fin_min)
    {
        if  (inic_h > fin_h)
            cout<< "O JOGO DUROU " << (24 - inic_h) + fin_h << " HORA(S) E " << fin_min - inic_min << " MINUTO(S)\n";
        else
            cout<< "O JOGO DUROU " << fin_h - inic_h << " HORA(S) E " << fin_min - inic_min << " MINUTO(S)\n";

    }  
    else
    {
        if  (inic_h >= fin_h)
            cout<< "O JOGO DUROU " << ((24 - inic_h) + fin_h) - 1 << " HORA(S) E " << (60 - inic_min) + fin_min << " MINUTO(S)\n";
        else
            cout<< "O JOGO DUROU " << (fin_h - inic_h) - 1 << " HORA(S) E " << (60 - inic_min) + fin_min << " MINUTO(S)\n";

    }     

    return 0;
}
