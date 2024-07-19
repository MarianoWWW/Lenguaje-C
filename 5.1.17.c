/*
 5.1.17 Ingresar N artículos (códigos) y sus correspondientes precios. Indicar el código del artículo más caro y el
precio del más barato. NOTA: todos los artículos tienen precios distintos
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
