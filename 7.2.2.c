//7.2.2 Ingresar una matriz de 2x3 por teclado. Calcular la matriz transpuesta.

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int MAT [2][3] , MATTRAS [3][2];
    int NUM, I, J;
    for (I=0 ; I<2 ; I=I+1)
    {
        for (J=0 ; J<3 ; J=J+1)
        {
            printf("\nIngrese valor para la fila : %d , columna : %d : ", I+1, J+1);
            scanf("%d", &NUM);
            MAT [I][J]=NUM;
        }
    }
    for (I=0 ; I<2 ; I=I+1)
    {
        for (J=0 ; J<3 ; J=J+1)
        {
           MATTRAS [J][I] = MAT [I][J];
        }
    }
    printf ("\n\nMatrices : \n\n");
    for (I=0 ; I<2 ; I=I+1)
    {
        for (J=0 ; J<3 ; J=J+1)
        {
            printf("  %d   ", MAT[I][J]);
        }
         printf ("\n");
    }
    printf ("\n\n");
    for (I=0 ; I<3 ; I=I+1)
    {
        for (J=0 ; J<2 ; J=J+1)
        {
            printf("  %d   ", MATTRAS[I][J]);
        }
         printf ("\n");
    }
    printf ("\n\n");
    system ("pause");
    return 0;
}
