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

	inic_s = fin_s - inic_s;
	inic_min = fin_min - inic_min;
	inic_h = fin_h - inic_h;
	inic_dia = fin_dia - inic_dia;

    if (inic_s < 0){
    	inic_s += 60;
    	inic_min--;    	
    }

    if (inic_min < 0){
    	inic_min += 60;
    	inic_h--;    	
    }    

    if (inic_h < 0){
    	inic_h += 24;
    	inic_dia--;
    }

    cout<< inic_dia << " dia(s)\n" << inic_h << " hora(s)\n" << inic_min << " minuto(s)\n" << inic_s << " segundo(s)\n";    

    return 0;
}
