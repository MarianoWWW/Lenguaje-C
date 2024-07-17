// 5.1.2 Confeccionar un programa para calcular el valor de la siguiente suma: 100 + 95 + 90 + ... + 50

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I, SUMA;
    SUMA=0;
    for ( I=100; I>=50; I=I-5)
    {
        SUMA=SUMA+I;
    }

    printf("\n\nValor de la suma: %d\n\n", SUMA);
    system ("pause");
    return 0;
}
