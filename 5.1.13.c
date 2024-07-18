/*
5.1.13 Realizar un programa que:
a. Muestre todos los números primos entre 1 y 100. (Un nro. es primo cuando es divisible solamente
por 1 y por sí mismo)
b. Contar y mostrar la cantidad de primos encontrados.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, NUM=0, cont = 0;
    for (i=2; i<=100; i=i+1)
    {
        for (j=2 ; j<=100 ; j++)
        {

                if ((i % j == 0) && (i % 1 == 0))
                {
                    cont++;
                }

        }
    if (cont == 1)
    {
        printf ("%d  ", i);
        NUM=NUM+1;
    }
    cont = 0;
    }
    printf ("\n\nCantidad de numeros primos encontrados : %d", NUM);
    printf("\n\n");
    system("pause");
    return 0;
}
