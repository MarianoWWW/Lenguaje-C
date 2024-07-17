/*
4.13. Un fabricante de repuestos para tractores ha descubierto que ciertos artículos identificados por los
números de catálogo 12121 al 18081; 30012 al 45565 y 67000 al 68000 son defectuosos. Se desea
confeccionar un programa al que informándole el número de catálogo indique si el artículo es o no
defectuoso. Los artículos del catálogo van desde el 1200 al 90000. Si se ingresa otro número informar
“FUERA DE CATALOGO”.
 */


#include <stdio.h>
#include<stdlib.h>

int main() {

    int num;

    do {
        printf("\n\nIngrese el numero del articulo : ");
        scanf ("%d", &num);
        if (num < 1200 || num > 90000)
             printf("\n\nFUERA DE CATALOGO");
    }while (num < 1200 || num > 90000);

    if ((num <12121 || num > 18081) && (num < 30012 || num > 45565) && (num < 67000 || num > 68000))
         printf("\n\nEl articulo NO es defectuoso.");
    else
         printf("\n\nEl articulo SI es defectuoso.");

    printf ("\n\n");
    system("pause");
    return 0;
}
