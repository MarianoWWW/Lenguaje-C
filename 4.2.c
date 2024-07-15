/*
4.2. Dados tres números determinar e informar con un mensaje si el primer número ingresado es menor que
los otros dos.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int NUM, NUM1, NUM2;
    printf("\nIngrese tres numeros : ");
    scanf("%d%d%d", &NUM, &NUM1, &NUM2);
    if (NUM<NUM1)
    {
        if (NUM<NUM2)
            printf("\nEl numero %d es menor a %d y %d", NUM, NUM1, NUM2);
    }
    printf("\n\n");
    system ("pause");
    return 0;
}
