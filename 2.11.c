/*
2.11. Una pizzería vende empanadas por unidad o por docena, la docena cuesta $300 pero si se compra
individualmente se cobra $30 la unidad. Si se compran más empanadas que no se agrupen en docenas las
adicionales se cobran como por unidad. Indicar el precio total a abonar.
*/

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int TOTAL=0, UNI=30, DOC=300;
    int NUM, NUM1;
    printf("\nIngrese la cantidad de empanadas: ");
    do {
        scanf("%d", &NUM);
    } while (NUM <0);

    if (NUM<12)
    {
        TOTAL=NUM*UNI;
    }
    else
    {
        if (NUM%12==0)
        {
            TOTAL=(NUM/12)*DOC;
        }
        else
        {
            NUM1=(NUM%12)*UNI;
            TOTAL=((NUM/12)*DOC)+NUM1;
        }
    }
    printf ("\nTotal: $ %d", TOTAL);

    printf("\n\n");
    system ("pause");
    return 0;
}
