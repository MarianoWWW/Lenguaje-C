/*
4.4. Ingresar 3 valores reales y:
a. Si los dos primeros son mayores al tercero informar “MAYORES AL TERCERO”.
b. Si los tres son iguales informar “TRES IGUALES .
c. Si alguno de los dos primeros es menor al tercero informar “ALGUNO ES MENOR”.
*/

#include <stdio.h>
#include<stdlib.h>

int main()
{
    float NUM, NUM1, NUM2;
    printf("\n\nIngresar tres numeros: ");
    scanf("%f%f%f", &NUM, &NUM1, &NUM2);
    if (NUM==NUM1 && NUM1==NUM2)
    {
        printf("\n\nTRES IGUALES.");
    }
    else
    {
        if (NUM>NUM2)
        {
            if (NUM1>NUM2)
            {
                printf("\nMAYORES AL TERCERO.");
            }
    }
    if (NUM < NUM2)
            printf("\nALGUNO ES MENOR.");
        else
        {
            if (NUM1 < NUM2)
                printf("\nALGUNO ES MENOR.");
        }
    }
    printf("\n\n");
    system ("pause");
    return 0;
}
