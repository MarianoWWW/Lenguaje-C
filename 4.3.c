/*
4.3. Confeccionar un programa que pueda determinar de 3 números enteros que se ingresan si alguno de ellos
es igual a la suma de los otros dos.
*/

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int NUM, NUM1, NUM2;
    printf("\nIngresar tres numeros: ");
    scanf("%d%d%d", &NUM, &NUM1, &NUM2);
    if (NUM==NUM1+NUM2)
        printf("\nEl numero %d es suma de %d + %d", NUM, NUM1, NUM2);
    else
    {
        if (NUM1==NUM+NUM2)
            printf("\nEl numero %d es suma de %d + %d", NUM1, NUM, NUM2);
        else
        {
            if (NUM2==NUM+NUM1)
                printf("\nEl numero %d es suma de %d + %d", NUM2, NUM, NUM1);
            else
                printf("\nNingun numero es la suma de los otros dos.");
        }
    }
    printf("\n\n");
    system ("pause");
    return 0;
}
