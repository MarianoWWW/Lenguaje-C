// 5.2.11 Se ingresan números enteros, hasta que se ingrese el número cero. Determinar los 2 valores mayores.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM,MAYOR1,MAYOR2, flag = 0, contador = 0;

    printf("\nIngrese un numero entero : ");
    scanf("%d", &NUM);
    MAYOR2=NUM;

    if (NUM !=0)
    {
        printf("\nIngrese un numero entero : ");
        scanf("%d", &NUM);
        if (NUM > MAYOR2)
            MAYOR1 = NUM;
        else
        {
            MAYOR1=MAYOR2;
            MAYOR2=NUM;
        }
    }

    while (NUM !=0)
    {
        printf("\nIngrese un numero entero : ");
        scanf("%d", &NUM);

        if (NUM > MAYOR2 && NUM !=0)
        {
            if (NUM > MAYOR1)
                MAYOR1 = NUM;
            else
                MAYOR2 = NUM;
        }

        contador++;
    }

    if (contador >= 1)
          printf("\n\nLos valores mayores son: %d %d", MAYOR1, MAYOR2);
    else
            printf("\n\nNo hay suficientes datos para evaluar los numeros.");

    printf("\n\n");
    system("pause");
    return 0;
}
