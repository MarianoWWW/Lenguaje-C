/*
5.2.4 Un negocio de venta de granos desea controlar las ventas realizadas. De cada una ingresa el importe total
y un código que indica la forma de pago. El código puede ser:
 C: cheque, 20% de recargo.
 E: efectivo, 10% de descuento.
 T: con tarjeta, 12% de recargo.
Se debe ingresar una F para finalizar el día de venta y arrojar los siguientes totales.
Efectivo en Caja: $ xxxx.xx
Ventas con Tarjeta de Crédito: $ xxxx.xx
Ventas con cheque: $ xxxx.xx
Total de Venta: $ xxxx.xx
Importe del IVA: $ xxxx.xx
Nota: El IVA corresponde al 21% del total de ventas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char CET='A';
    float VENTA,TOTAL,IVA,CHE=0,EFECT=0,TARJ=0;
    while (CET !='F')
    {
        printf("\nIngrese importe de venta: $  ");
        do
        {
            scanf("%f", &VENTA);
            if (VENTA <=0)
                printf("\nImporte incorrecto, ingrese importe nuevamente");
        } while (VENTA<=0);
        printf("\nIngrese forma de pago (codigo): ");
        fflush(stdin);
        scanf("%c", &CET);
        CET=toupper(CET);
        switch (CET)
        {
            case 'C':CHE=CHE+VENTA;
                    break;
            case 'E':EFECT=EFECT+VENTA;
                    break;
            case 'T':TARJ=TARJ+VENTA;
                    break;
            case 'F': break;
            default: printf ("\nCodigo inexistente, pruebe nuevamente: ");
        }
    }
    printf("\n\nEfectivo en caja:\t\t $ %4.2f", EFECT-(EFECT*10/100));
    printf("\nVentas con tarjetas de credito:\t $ %4.2f", TARJ+(TARJ*12/100));
    printf("\nVentas con cheque:\t\t $ %4.2f", CHE+(CHE*20/100));
    TOTAL=EFECT-(EFECT*10/100)+TARJ+(TARJ*12/100)+CHE+(CHE*20/100);
    printf("\nTotal de venta:\t\t\t $ %4.2f", TOTAL);
    IVA=TOTAL*21/100;
    printf("\nImporte del IVA:\t\t $ %4.2f\n\n", IVA);

    printf("\n\n");
    system("pause");
    return 0;
}
