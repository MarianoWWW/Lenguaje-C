/*
 5.1.11 Ingresar 18 valores de temperatura distintos de cero. Se pide determinar e informar cuantas ternas (tres
valores seguidos) de valores positivos y cuantas de negativos hay.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I,POS,NEG,TPOS,TNEG;
    float REAL;
    POS=0;
    NEG=0;
    TPOS=0;
    TNEG=0;
    for (I=1 ; I<=18 ; I=I+1)
    {
        do
        {
            printf("\nIngresar el valor numero %d de 18, de temperatura: ",I);
            scanf("%f", &REAL);
            if (REAL==0)
                printf("\nYa idiota, sin ceros.\n");
        }while (REAL==0);
        if (REAL>0)
        {
            TPOS=TPOS+1;
            if (TPOS==3)
            {
                POS=POS+1;
                TPOS=0;
            }
        }
        else
        {
            TNEG=TNEG+1;
            if (TNEG==3)
            {
                NEG=NEG+1;
                TNEG=0;
            }
        }
    }
    printf("\nTernas positivas: %d", POS);
    printf("\nTernas negativas: %d\n\n", NEG);
    printf("\n\n");
    system("pause");
    return 0;
}
