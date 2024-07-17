/*
 4.14. La farmacia Sindical efectúa descuentos a sus afiliados según el importe de la compra con la siguiente
escala:
a. menor de $55 el descuento es del 4.5%
b. entre $55 y $100 el descuento es del 8%
c. más de $100 el descuento es del 10.5%
Confeccionar un programa que reciba un importe e informe: el descuento y el precio neto a cobrar, con
mensajes aclaratorios.
 */

 #include <stdio.h>
#include<stdlib.h>

int main() {

    float importe, desc1 = 4.5, desc2 = 8, desc3 = 10.5;

    do {
        printf("\n\nIngresa el importe : ");
        scanf ("%f", &importe);
        if (importe < 0)
            printf("\n\nError, no se puede pagar un importe negativo, intente nuevamente.");
    }while (importe < 0);

    if (importe < 55) {
        importe = importe - (importe*desc1/100);
        printf ("Descuento del %.1f %%. Importe neto a cobrar $: %.2f", desc1, importe);
    }
    else {
        if (importe <= 100) {
            importe = importe - (importe*desc2/100);
            printf ("Descuento del %.1f %%. Importe neto a cobrar $: %.2f", desc2, importe);
        }
        else {
            importe = importe - (importe*desc3/100);
            printf ("Descuento del %.1f %%. Importe neto a cobrar $: %.2f", desc3, importe);
        }
    }

    printf ("\n\n");
    system("pause");
    return 0;

}
