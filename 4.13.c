/*
4.13. Un fabricante de repuestos para tractores ha descubierto que ciertos art�culos identificados por los
n�meros de cat�logo 12121 al 18081; 30012 al 45565 y 67000 al 68000 son defectuosos. Se desea
confeccionar un programa al que inform�ndole el n�mero de cat�logo indique si el art�culo es o no
defectuoso. Los art�culos del cat�logo van desde el 1200 al 90000. Si se ingresa otro n�mero informar
�FUERA DE CATALOGO�.
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
