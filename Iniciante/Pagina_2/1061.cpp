#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char aux[4];
    int inic_h, fin_h, inic_min, fin_min, inic_s, fin_s, inic_dia, fin_dia;

    scanf("%s %d", &aux, &inic_dia);
    scanf("%d %c %d %c %d", &inic_h, &aux, &inic_min, &aux, &inic_s);
    scanf("%s %d", &aux, &fin_dia);
    scanf("%d %c %d %c %d", &fin_h, &aux, &fin_min, &aux, &fin_s);

    if  (inic_s <= fin_s)
    {
        if  (inic_min <= fin_min)
        {
            if  (inic_h <= fin_h)
            {
                if  (inic_dia <= fin_dia)
                {
                    cout<< fin_dia - inic_dia << " dia(s)\n" << fin_h - inic_h << " hora(s)\n" << fin_min - inic_min 
                    << " minuto(s)\n" << fin_s - inic_s << " segundo(s)\n";
                }
                else
                {
                    cout<< (30 - inic_dia) + fin_dia << " dia(s)\n" << fin_h - inic_h << " hora(s)\n" << fin_min - inic_min 
                    << " minuto(s)\n" << fin_s - inic_s << " segundo(s)\n";                    
                }
                
            }
            else
            {
                if  (inic_dia < fin_dia)
                {
                    cout<< (fin_dia - inic_dia) - 1 << " dia(s)\n" << (24 - inic_h) + fin_h << " hora(s)\n" 
                    << fin_min - inic_min << " minuto(s)\n" << fin_s - inic_s << " segundo(s)\n";
                }
                else
                {
                    cout<< ((30 - inic_dia) - fin_dia) - 1 << " dia(s)\n" << (24 - inic_h) + fin_h << " hora(s)\n" 
                    << fin_min - inic_min << " minuto(s)\n" << fin_s - inic_s << " segundo(s)\n";                    
                }
                
            }
            
        }
        else
        {
            if  (inic_h < fin_h)
            {
                if  (inic_dia <= fin_dia)
                {
                    cout<< fin_dia - inic_dia << " dia(s)\n" << (inic_h - fin_h) - 1 << " hora(s)\n" 
                    << (60 - inic_min) + fin_min << " minuto(s)\n" << fin_s - inic_s << " segundo(s)\n";
                }
                else
                {
                    cout<< (30 - inic_dia) + fin_dia << " dia(s)\n" << (inic_h - fin_h) - 1 << " hora(s)\n" 
                    << (60 - inic_min) + fin_min << " minuto(s)\n" << fin_s - inic_s << " segundo(s)\n";
                }
                
            }
            else
            {
                if  (inic_dia < fin_dia)
                {
                    cout<< (fin_dia - inic_dia) - 1 << " dia(s)\n" << ((24 - inic_h) + fin_h) - 1 << " hora(s)\n" 
                    << (60 - inic_min) + fin_min << " minuto(s)\n" << fin_s - inic_s << " segundo(s)\n";
                }
                else
                {
                    cout<< ((30 - inic_dia) + fin_dia) - 1 << " dia(s)\n" << ((24 - inic_h) + fin_h) - 1 << " hora(s)\n" 
                    << (60 - inic_min) + fin_min << " minuto(s)\n" << fin_s - inic_s << " segundo(s)\n";                    
                }
                
            }
            
        }
        
        
    }
    else
    {
        if  (inic_min < fin_min)
        {
            if  (inic_h <= fin_h)
            {
                if  (inic_dia <= fin_dia)
                {
                    cout<< fin_dia - inic_dia << " dia(s)\n" << fin_h - inic_h << " hora(s)\n" << (fin_min - inic_min) - 1 
                    << " minuto(s)\n" << (60 - inic_s) + fin_s << " segundo(s)\n";
                }
                else
                {
                    cout<< (30 - inic_dia) + fin_dia << " dia(s)\n" << fin_h - inic_h 
                    << " hora(s)\n" << (fin_min - inic_min) - 1 << " minuto(s)\n" << (60 - inic_s) + fin_s << " segundo(s)\n";                    
                }
                
            }
            else
            {
                if  (inic_dia < fin_dia)
                {
                    cout<< (fin_dia - inic_dia) - 1 << " dia(s)\n" << (24 - inic_h) + fin_h << " hora(s)\n" 
                    << (fin_min - inic_min) - 1 << " minuto(s)\n" << (60 - inic_s) + fin_s << " segundo(s)\n";
                }
                else
                {
                    cout<< ((30 - inic_dia) + fin_dia) - 1 << " dia(s)\n" << (24 - inic_h) + fin_h << " hora(s)\n" 
                    << (fin_min - inic_min) - 1 << " minuto(s)\n" << (60 - inic_s) + fin_s << " segundo(s)\n";                    
                }
                
            }
            
        }
        else
        {
            if  (inic_h < fin_h)
            {
                if  (inic_dia <= fin_dia)
                {
                    cout<< fin_dia - inic_dia << " dia(s)\n" << (fin_h - inic_h) - 1 << " hora(s)\n" 
                    << ((60 - inic_min) + fin_min) - 1 << " minuto(s)\n" << (60 - inic_s) + fin_s << " segundo(s)\n";
                }
                else
                {
                    cout<< (30 - inic_dia) + fin_dia << " dia(s)\n" << (fin_h - inic_h) - 1 << " hora(s)\n" 
                    << ((60 - inic_min) + fin_min) - 1 << " minuto(s)\n" << (60 - inic_s) + fin_s << " segundo(s)\n";                    
                }
                
            }
            else
            {
                if  (inic_dia < fin_dia)
                {
                    cout<< (fin_dia - inic_dia) - 1 << " dia(s)\n" << ((24 - inic_h) + fin_h) - 1 << " hora(s)\n" 
                    << ((60 - inic_min) + fin_min) - 1 << " minuto(s)\n" << (60 - inic_s) + fin_s << " segundo(s)\n";
                }
                else
                {
                    cout<< ((30 - inic_dia) + fin_dia) - 1 << " dia(s)\n" << ((24 - inic_h) + fin_h) - 1 << " hora(s)\n" 
                    << ((60 - inic_min) + fin_min) - 1 << " minuto(s)\n" << (60 - inic_s) + fin_s << " segundo(s)\n";
                }
                
            }
            
        }
        
    }

    return 0;
}
