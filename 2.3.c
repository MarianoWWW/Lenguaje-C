/*
2.3. Confeccionar un programa que pueda ingresar 2 números enteros y calcule e informe con mensajes
aclaratorios la suma, el producto, el cociente y el resto.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM1, NUM2;

    printf("Ingresar dos numeros (enteros) : ");
    scanf("%d%d", &NUM1, &NUM2);
    printf("Resultados:\n\nSuma: %d\nProducto: %d", NUM1+NUM2, NUM1*NUM2);
    if (NUM2 == 0)
        printf("\nCociente: No se puede dividir por cero.\nResto: No se puede dividir por cero.");
    else
    {
        printf("\nCociente: %d", NUM1/NUM2);
        printf("\nResto: %d", NUM1%NUM2);
    }
    printf("\n\n");
    system ("pause");
    return 0;
}
