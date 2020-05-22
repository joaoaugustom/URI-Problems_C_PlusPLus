 #include <iostream>
 #include <iomanip>

 using namespace std;

 int main()
 {
     float salario= 0;

     cout<< fixed << setprecision(2);

    cin>> salario;

    if  (salario > 0 and salario <= 400.00)
        cout<< "Novo salario: " << salario * 1.15 << "\nReajuste ganho: " << salario * 0.15 << "\nEm percentual: 15 %\n";

    else if(salario <= 800.00)
        cout<< "Novo salario: " << salario * 1.12 << "\nReajuste ganho: " << salario * 0.12 << "\nEm percentual: 12 %\n";

    else if(salario <= 1200.00)
        cout<< "Novo salario: " << salario * 1.10 << "\nReajuste ganho: " << salario * 0.10 << "\nEm percentual: 10 %\n";

    else if(salario <= 2000.00)
        cout<< "Novo salario: " << salario * 1.07 << "\nReajuste ganho: " << salario * 0.07 << "\nEm percentual: 7 %\n";

    else
        cout<< "Novo salario: " << salario * 1.04 << "\nReajuste ganho: " << salario * 0.04 << "\nEm percentual: 4 %\n";


    return 0;
 }
 