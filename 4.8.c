// 4.8. Realizar un programa que ingrese dos números e indique si el primer número es divisible por el segundo.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int NUM, NUM1;

    do {
    printf("\n\nIngresar dos numeros: ");
    scanf("%d%d", &NUM, &NUM1);
    if (NUM1 == 0)
        printf("\n\nError, no se puede dividir por cero, intente nuevamente.");
    } while (NUM1 == 0);
    if (NUM%NUM1==0)
    {
        printf("\n%d es divisible por %d", NUM, NUM1);
    }
    else
    {
        printf("\n%d no es divisible por %d", NUM, NUM1);
    }
    printf("\n\n");
    system("pause");
    return 0;
}
