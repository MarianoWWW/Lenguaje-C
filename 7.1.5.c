/*
7.1.5 Una empresa debe registrar los pedidos recibidos de cada uno de sus 10 productos a lo largo del día. Por
cada pedido se recibe:
 Código de producto (de 1 a 10)
 Cantidad de unidades solicitadas
Se puede recibir más de un pedido por producto.
La carga finaliza cuando se ingresa un producto con código igual a cero.
Al finalizar se debe emitir un listado con código y cantidad de unidades solicitadas de cada producto.
 */

#include <stdio.h>
#include <stdlib.h>

int LeeryValidar();
int ValidarCantidad();
void AcumulaVec (int[], int, int);
void PrintResultado (int[]);
int main()
{
    int COD,UNI,CONT=0,VecAcu[10]={0};
    COD=LeeryValidar();
    while (COD !=0)
    {
        UNI=ValidarCantidad();
        AcumulaVec(VecAcu,COD,UNI);
        CONT=CONT+1;
        COD=LeeryValidar();
    }
    if (CONT==0)
        printf("\n\nNo hubieron pedidos.");
    else
        PrintResultado(VecAcu);
    printf ("\n\n");
    system ("pause");
    return 0;
}
int LeeryValidar()
{
    int LEER;
    do
    {
        printf("\nIngrese codigo del pedido, cero para terminar : ");
        scanf ("%d", &LEER);
        if (LEER<0 || LEER >10)
            printf ("\nCodigo erroneo, intente nuevamente.");
    } while (LEER<0 || LEER >10);
    return LEER;
}
int ValidarCantidad()
{
    int CANT;
    do
    {
        printf("\nCantidad de unidades : ");
        scanf ("%d", &CANT);
        if (CANT<1)
            printf("\nCantidad erronea, pruebe nuevamente.");
    } while (CANT<1);
    return CANT;
}
void AcumulaVec (int V1[], int C, int U)
{
    V1[C-1]=V1[C-1]+U;
}
void PrintResultado (int V2[])
{
    int J;
    printf ("\n\n");
    for (J=0 ; J<10 ; J=J+1)
    {
        printf ("\nCodigo : %d \tUnidades solicitadas: %d", J+1, V2[J]);
    }

}
