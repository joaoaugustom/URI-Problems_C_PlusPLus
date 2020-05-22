#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float salario= 0.00;

    cout<< fixed << setprecision(2);

    cin>> salario;

    if  (salario > 0 and salario <= 2000.00)
        cout<< "Isento\n";
    else if(salario <= 3000.00)
        cout<< "R$ " << (salario - 2000) * 0.08 << endl;
    else if(salario <= 4500.00)
        cout<< "R$ " << (salario - 3000) * 0.18 + 80 << endl;
    else
        cout<< "R$ " << (salario - 4500) * 0.28 + 350 << endl;

    return 0;
}
