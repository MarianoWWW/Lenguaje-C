/*
 5.1.17 Ingresar N art�culos (c�digos) y sus correspondientes precios. Indicar el c�digo del art�culo m�s caro y el
precio del m�s barato. NOTA: todos los art�culos tienen precios distintos
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ART,PREC,COD,PREMIN,PREMAX;
    printf("\n\nIngrese el codigo del articulo: ");
    scanf("%d", &ART);
    printf("\nIngrese su precio: ");
    scanf("%d", &PREC);
    COD=ART;
    PREMAX=PREC;
    PREMIN=PREC;
    while (ART!=0 || PREC!=0)
    {
        printf("\n\nIngrese el codigo del articulo: ");
        scanf("%d", &ART);
        printf("\nIngrese su precio: ");
        scanf("%d", &PREC);
        if (PREC>PREMAX)
        {
            COD=ART;
            PREMAX=PREC;
        }
        else
        {
            if (PREC<PREMIN)
                PREMIN=PREC;
        }
    }
    printf("\n\nCodigo del articulo mas caro: %d", COD);
    printf("\nPrecio mas barato: %d\n\n", PREMIN);
    printf("\n\n");
    system ("pause");
    return 0;
}
