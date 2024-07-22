/*
5.2.10 En un proceso de control se evalúan valores de temperatura, finalizando cuando de ingresa un valor
ficticio de temperatura -50. Determinar el valor máximo y mínimo medido y sus posiciones respecto al ingreso.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int CONT=1,POSMAX=1,POSMIN=1;
    float TEMP,MAX,MIN;
    printf("\n\nIngrese un valor de temperatura: ");
    scanf("%f",&TEMP);
    MAX=TEMP;
    MIN=TEMP;
    while (TEMP !=-50)
    {
        if (TEMP>MAX)
        {
            MAX=TEMP;
            POSMAX=CONT;
        }
        else
        {
            if (TEMP<MIN)
            {
                MIN=TEMP;
                POSMIN=CONT;
            }
        }
        CONT=CONT+1;
        printf("\nIngrese un valor de temperatura: ");
        scanf("%f", &TEMP);
    }
    if (CONT != 1) {
        printf("\n\nValor maximo: %.2f Posicion respecto al ingreso: %d", MAX,POSMAX);
        printf("\nValor minimo: %.2f Posicion respecto al ingreso: %d\n\n", MIN,POSMIN);
    }
    else
        printf("\n\nNo se ingresaron valores.");
    printf("\n\n");
    system("pause");
    return 0;
}
