/*
 5.1.14 Confeccionar un programa que determine e informe los números perfectos comprendidos entre 1 y 9000.
Un número es perfecto cuando es igual a la suma de sus divisores positivos menores que él.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, suma=0;

    for (i=1 ; i<=9000 ; i++)
    {
        for (j=1 ; j<=9000 ; j++)
        {
            if ((i % j == 0) && (i != j))
                suma=suma+j;
        }
    if (suma == i)
        printf ("%d  ", i);
    suma = 0;
    }
    printf("\n\n");
    system("pause");
    return 0;
}
