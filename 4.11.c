/*
4.11. Escribir un programa que solicite el año y el número de mes y nos informe cuantos días tiene dicho mes.
Debemos considerar que el año puede ser bisiesto. Un año es bisiesto cuando es divisible por 4 y no por
100 o el año es divisible por 400.
*/

#include <stdio.h>
#include<stdlib.h>

int main () {

    int ANIO, MES;
    printf("\nIngrese anio y numero de mes : ");
    scanf("%d%d", &ANIO, &MES);

    switch (MES) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("\nEl mes %d del anio %d tiene 31 dias\n", MES, ANIO);
                break;
        case 2: if ((ANIO % 4 == 0 && ANIO % 100 !=0) || (ANIO % 400 == 0))
                {
                printf("\nEl mes %d del anio %d tiene 29 dias\n", MES, ANIO);
                }
                else
                {
                printf("\nEl mes %d del anio %d tiene 28 dias\n", MES, ANIO);
                }
                break;
        case 4:
        case 6:
        case 9:
        case 11: printf("\nEl mes %d del anio %d tiene 30 dias\n", MES, ANIO);
                break;
        default: printf("\nMes mal ingresado\n\n");
        }
        system("pause");
        return 0;
}
