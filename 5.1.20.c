/*
5.1.20 Ingresar un n�mero entero mayor a 0. Debe dibujar una pir�mide con * con tantas filas como el n�mero
indicado. En cada fila se va incrementando la cantidad de asteriscos de 2 en 2.
Por ejemplo, si se ingresa el n�mero 5 debe mostrar en pantalla:
     *
    ***
   *****
  *******
 *********
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int I,J,K,NUM;
    printf("\n\nIngresar un numero entero mayor a 0: ");
    scanf ("%d", &NUM);

    for ( I=1 ; I<=NUM*2 ; I=I+2)
    {
        printf ("\n");
        for (K=NUM; K>=I/2 ; K=K-1)
            printf (" ");
        for (J=1 ; J<=I ; J=J+1)
            printf ("*");
    }


    printf("\n\n");
    system ("pause");
    return 0;
}
