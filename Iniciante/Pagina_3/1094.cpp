#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<< fixed << setprecision(0);
    int N;
    char Tipo;

    cin>> N;

    float Quantia[N], TotalC= 0, TotalR= 0, TotalS= 0, Total;

    for (int i= 0; i < N; i++)
    {
        cin>> Quantia[i] >> Tipo;

        if  (Tipo == 'C')
            TotalC += Quantia[i];
        else if(Tipo == 'R')
            TotalR += Quantia[i];
        else
            TotalS += Quantia[i];
        
    }
    Total = TotalC + TotalR + TotalS;

    cout<< "Total: " << Total << " cobaias\nTotal de coelhos: " << TotalC << "\nTotal de ratos: " << TotalR
    << "\nTotal de sapos: " << TotalS;

    cout<< fixed << setprecision(2);

    cout<< "\nPercentual de coelhos: " << (TotalC / Total) * 100.00 << " %\n"
    << "Percentual de ratos: " << (TotalR / Total) * 100.00 << " %\n" << "Percentual de sapos: " 
    << (TotalS / Total) * 100.00 << " %\n";

    return 0;
}
