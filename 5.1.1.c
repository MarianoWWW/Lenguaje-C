// 5.1.1 Mostrar por pantalla los números pares comprendidos entre 100 y 500.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I;
    for (I=100; I<=500; I=I+2)
    {
        printf("Numero par: %d\n", I);
    }
    printf("\n\n");
    system ("pause");
    return 0;
}
