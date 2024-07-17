//5.1.3 Se ingresan 50 números enteros. Determinar el promedio de los números pares.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I,SUMA,CONT,NUM;
    SUMA=0;
    CONT=0;
    for (I=1;I<=50;I=I+1)
    {
        printf("\nIngresar un numero entero: ");
        scanf("%d", &NUM);
        if (NUM%2==0)
        {
            SUMA=SUMA+NUM;
            CONT=CONT+1;
        }
    }
    if (CONT==0)
        printf("\n\nNo se ingresaron numeros pares.\n\n");
    else
        printf("\n\nPromedio de los numeros pares: %.1f\n\n", (float)SUMA/CONT);

    printf("\n\n");
    system ("pause");
    return 0;

}
