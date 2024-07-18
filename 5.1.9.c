/*
 5.1.9 Confeccionar un programa que exhiba por pantalla una lista, a dos columnas, con los primeros 15 números
impares en la primera y los 15 primeros pares en la segunda, incluyendo los títulos.
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i;

    printf("\n\n\t\tImpares\t\tPares");

        for (int i = 0 ; i < 30 ; i = i + 2)
                printf("\n\t\t   %d\t\t  %d",(i+1), (i));

    printf("\n\n");
    system("pause");
    return 0;
}

