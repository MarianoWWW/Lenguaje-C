//7.2.1 Ingresar una matriz de 3x3 por teclado y un número entero. Realizar el producto de la matriz por la constante.

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int MAT [3][3];
    int NUM,I,J;
    for (I=0 ; I<3 ; I=I+1)
    {
        for (J=0 ; J<3 ; J=J+1)
        {
            printf("\nIngrese valor para la fila : %d , columna : %d : ", I+1, J+1);
            scanf("%d", &NUM);
            MAT [I][J]=NUM;
        }
    }
    printf ("\n\nIngrese un numero para multiplicar la matriz : ");
    scanf ("%d", &NUM);
    printf ("\n\nMatrices : \n\n");
    for (I=0 ; I<3 ; I=I+1)
    {
        for (J=0 ; J<3 ; J=J+1)
        {
            printf ("  %d  ", MAT [I][J]);
        }
         printf ("\n");
    }
    for (I=0 ; I<3 ; I=I+1)
    {
        for (J=0 ; J<3 ; J=J+1)
        {
            MAT [I][J]=MAT [I][J]*NUM;
        }
    }
    printf ("\n");
    for (I=0 ; I<3 ; I=I+1)
    {
        for (J=0 ; J<3 ; J=J+1)
        {
            printf ("  %d  ", MAT [I][J]);
        }
        printf ("\n");
    }
    printf ("\n\n");
    system ("pause");
    return 0;
}
