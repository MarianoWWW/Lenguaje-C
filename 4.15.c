/*
4.15. Un negocio de artículos de computación vende DVDs según la siguiente escala de precios:
  sueltos, entre 1 y 9 a $15 c/u.
  la caja de 10 cuesta $120.
  la caja de 50 cuesta $500.
Si la compra excede las 100 unidades se efectúa un descuento del 10%.
NOTA: se aceptan compras entre 1 y 500 DVDs.
Se pide que se ingrese una cantidad de DVDs que se quiere comprar y calcule e informe el importe a pagar.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int CANT, DVDS;
    int CANT1=0, CANT2=0;
    float SUMA=0, RESTA;
    do {
        printf("\nIngrese la cantidad de dvds: ");
        scanf ("%d", &CANT);
    } while (CANT<1 || CANT>500);
    CANT1=(CANT/50)*500;
    CANT2=CANT-((CANT1*50)/500);
    SUMA=((CANT2/10)*120)+((CANT2%10)*15)+CANT1;
    if (CANT>100)
        {
        RESTA=SUMA/10;
        printf("\nImporte a pagar por %d dvds : $ %.2f\n\n", CANT, SUMA-RESTA);
        }
        else
        {
        printf("\nImporte a pagar por %d dvds : $ %.2f\n\n", CANT, SUMA);
        }

    printf("\n\n");
    system("pause");
    return 0;
}
