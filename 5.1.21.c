/*
5.1.21 Tomando como base el ejercicio anterior ingresar un número entero mayor a 0 y dibujar un rombo con
*. Por ejemplo, si se ingresa el número 5 dibuja la pirámide de 5 filas y luego completa el rombo al ir
decrementando la cantidad de asteriscos.
*
***
*****
*******
*********
*******
*****
***
*
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
        for (J=1 ; J<=I ; J=J+1)
            printf ("*");
    }
    for ( I=NUM*2-2 ; I>=0 ; I=I-2)
    {
        printf ("\n");
        for (J=1 ; J<=I-1 ; J=J+1)
            printf ("*");
    }


    printf("\n\n");
    system ("pause");
    return 0;
}
