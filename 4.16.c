/*
4.16. Un negocio vende distintos artículos identificados por un código, según se muestra:
  código 1; 10; 100: 10 pesos la unidad.
  código 2; 22; 222: 7 pesos la unidad. La caja de 10 unidades vale 65 pesos.
  código 3; 33: 3 pesos la unidad. Si la compra es por más de 10 unidades se hace un descuento del
10% sobre el total de la compra.
  código 4; 44: 1 peso la unidad.
Confeccionar un programa que ingrese como dato el código de un artículo y la cantidad a comprar y se
informe el importe de la compra, con las siguientes leyendas:
ARTÍCULO xxxxx CANTIDAD xxxx IMPORTE A PAGAR $ xxxx.xx
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int CANT, COD, CAJA, UNI, DESC;
    float TOTAL;
    printf("\nIngrese el codigo: ");
    scanf("%d", &COD);
    printf("\nIngrese Cantidad: ");
    scanf("%d", &CANT);

    switch (COD)
    {
    case 1:
    case 10:
    case 100: TOTAL=CANT*10;
              printf("\nArticulo %5d Cantidad %4d Importe a pagar $ %4.2f\n\n", COD, CANT, TOTAL);
              break;
    case 2:
    case 22:
    case 222: CAJA=(CANT/10)*65;
              UNI=(CANT%10)*7;
              TOTAL=CAJA+UNI;
              printf("\nArticulo %5d Cantidad %4d Importe a pagar $ %4.2f\n\n", COD, CANT, TOTAL);
              break;
    case 3:
    case 33:  if (CANT>10)
                {
                DESC=(CANT*3)/10;
                TOTAL=(CANT*3)-DESC;
                printf("\nArticulo %5d Cantidad %4d Importe a pagar $ %4.2f\n\n", COD, CANT, TOTAL);
                }
              else
                {
                TOTAL=CANT*3;
                printf("\nArticulo %5d Cantidad %4d Importe a pagar $ %4.2f\n\n", COD, CANT, TOTAL);
                }
              break;
    case 4:
    case 44:  TOTAL=CANT;
              printf("\nArticulo %5d Cantidad %4d Importe a pagar $ %4.2f\n\n", COD, CANT, TOTAL);
              break;
    default:  printf("\nCodigo inexistente.");
    }
    printf("\n\n");
    system("pause");
    return 0;
}
