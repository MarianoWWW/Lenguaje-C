/*
5.2.1 Confeccionar un programa que calcule e informe los valores de las potencias de 2 cuyo resultado sean
menores que 600. (1 2 4 8 16 …)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int POT=1;
    while (POT<600)
    {
        printf("%d ", POT);
        POT=POT*2;
    }
    printf("\n\n");
    system("pause");
    return 0;
}
