#include <iostream>

using namespace std;

int main()
{
    string nome[3];

    for (int i= 0; i < 3; i++)
    {
        getline(cin, nome[i]);
    }

    if  (nome[0] == "vertebrado")
    {
        if  (nome[1] == "ave")
        {
            if  (nome[2] == "carnivoro")
                cout<< "aguia\n";
            
            else 
                cout<< "pomba\n";
        }
        else 
        {
            if  (nome[2] == "onivoro")
                cout<< "homem\n";
            
            else
                cout<< "vaca\n";
        }
    }
    else
    {
        if  (nome[1] == "inseto")
        {
            if  (nome[2] == "hematofago")
                cout<< "pulga\n";

            else 
                cout<< "lagarta\n";
        }
        else
        {
            if  (nome[2] == "hematofago")
                cout<< "sanguessuga\n";

            else 
                cout<< "minhoca\n";
        }
    }
    

    return 0;
}