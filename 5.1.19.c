/*
 5.1.19 Ingresar un n�mero entero mayor a 0. Debe dibujar un tri�ngulo rect�ngulo con * con tantas filas como
el n�mero indicado. En cada fila se va incrementando la cantidad de asteriscos. Por ejemplo, si se ingresa el
n�mero 6 debe mostrar en pantalla:
*
**
***
****
*****
******
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int I,J,NUM;
    printf("\n\nIngresar un numero entero mayor a 0: ");
    scanf ("%d", &NUM);
    for ( I=1 ; I<=NUM ; I=I+1)
    {
        printf ("\n");
        for (J=1 ; J<=I ; J=J+1)
            printf ("*");
    }
    printf("\n\n");
    system ("pause");
    return 0;
}
