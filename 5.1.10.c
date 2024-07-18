/*
 5.1.10 Confeccionar un programa que solicite el ingreso de un valor entero N < 12 y luego una lista de N números
reales sobre la cual debe calcular:
a. el promedio de los positivos.
b. el promedio de los negativos.
c. la cantidad de ceros.
Si el valor ingresado N es mayor que 12 informar 'VALOR EXCEDIDO” y si es menor o igual a 0 informar
“CANTIDAD INVALIDA”.
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int I,NUM,POSR,NEGR,CEROS;
    float REAL,POS,NEG;
    POSR=0;
    NEGR=0;
    CEROS=0;
    POS=0;
    NEG=0;
    do
    {
        printf("\n\nIngresar un numeroentre 1 y 11 (Entero):");
        scanf("%d", &NUM);
        if (NUM>=12)
            printf("\nVALOR EXCEDIDO\n");
        else
        {
            if (NUM<=0)
                printf("\nCANTIDAD INVALIDA\n");
        }
    } while (NUM<=0 || NUM>=12);
    for (I=1; I<=NUM ; I=I+1)
    {
        printf("\nIngresar numero real:");
        scanf("%f", &REAL);
        if (REAL==0)
            CEROS=CEROS+1;
        else
        {
            if (REAL>0)
            {
                POS=POS+REAL;
                POSR=POSR+1;
            }
            else
            {
                NEG=NEG+REAL;
                NEGR=NEGR+1;
            }
        }
    }
    if (POSR==0)
        printf("Promedio de los positivos: 0\n");
    else
    printf("Promedio de los positivos: %f\n", POS/POSR);
    if (NEGR==0)
        printf("Promedio de los negativos: 0\n");
    else
    printf("Promedio de los negativos: %f\n", NEG/NEGR);
    printf("Cantidad de ceros: %d\n\n", CEROS);

    printf("\n\n");
    system("pause");
    return 0;
}
