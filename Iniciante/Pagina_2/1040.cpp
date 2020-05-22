#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
    float N1, N2, N3, N4, NEx, Media;

    cout<< fixed;
    cout<< setprecision(1);

    cin>> N1;
    cin>> N2;
    cin>> N3;
    cin>> N4;

    Media= ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / (2 + 3 + 4 + 1);

    if  (Media >= 7.0)
    {
        cout<< "Media: " << Media << endl;
        cout<< "Aluno aprovado." << endl;
    }

    if  (Media < 5.0)
    {
        cout<< "Media: " << Media << endl;
        cout<< "Aluno reprovado." << endl;
    }

    if  (Media >= 5 && Media < 7)
    {
        cout<< "Media: " << Media << endl;
        cout<< "Aluno em exame." << endl;

        cin>> NEx;

        cout<< "Nota do exame: " << NEx << endl;

        Media= (Media + NEx) / 2;

        if  (Media >= 5)
        {
            cout<< "Aluno aprovado." << endl;
        }
        else
        {
            cout<< "Aluno reprovado." << endl;
        }

        cout<< "Media final: " << Media << endl;
    }

    return 0;
}