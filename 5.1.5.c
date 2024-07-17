/*
 5.1.5 Confeccionar un programa para calcular la suma de los primeros N números naturales. El valor de N lo
solicita por teclado el programa.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int SUMA,NUM,I;
    SUMA=0;
    printf("\n\nIngres hasta que numero va a ser la suma: ");
    scanf("%d", &NUM);
    for (I=1;I<=NUM;I=I+1)
        SUMA=SUMA+I;
    printf("\n\nLa suma es: %d\n\n", SUMA);
    printf("\n\n");
    system ("pause");
    return 0;
}
