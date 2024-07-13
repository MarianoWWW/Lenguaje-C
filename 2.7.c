// 2.7. Se ingresa un número entero de 3 cifras. Descomponerlo en unidad, decena y centena.

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int NUM, UNI, DEC, CEN;

    do {
    printf ("\nIngresar un numero (entero) de tres cifras: ");
    scanf ("%d", &NUM);
    if (NUM < 100 || NUM > 999)
        printf ("\n\nError en el numero elegido, intente nuevamente.");
    }while (NUM < 100 || NUM > 999);

    UNI=NUM%10;
    printf ("\n\nUnidad :  %d", UNI);
    DEC=((NUM%100)-UNI)/10;
    printf ("\nDecena :  %1d", DEC);
    CEN=((NUM%1000)-UNI-DEC)/100;
    printf ("\nCentena : %d", CEN);
    printf("\n\n");
    system ("pause");
    return 0;
}
