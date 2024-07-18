/*
 5.1.12 Calcular el factorial de un número ingresado por teclado. El factorial se calcula como el producto de todos
los enteros positivos desde 1 hasta el número. En matemática el factorial se expresa con el símbolo. Por
ejemplo, el factorial de 5 es 120 ya que 5! = 1 x 2 x 3 x 4 x 5 =120
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I,NUM,SUMA;
    SUMA=1;
    do
    {
        printf("\nIngresar un numero: ");
        scanf("%d", &NUM);
        if (NUM<0)
            printf("\nTiene que ser positivo.");
    }while (NUM<0);
    if (NUM==0)
        printf("\nEl factorial de 0 es 1 por definicion\n\n");
    else
    {
        for (I=1 ; I<=NUM ; I=I+1)
        {
            SUMA=SUMA*I;
        }
        printf("\nEl resultado es: %d\n\n", SUMA);
    }
    printf("\n\n");
    system("pause");
    return 0;
}
