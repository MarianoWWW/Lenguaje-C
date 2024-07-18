/*
 5.1.6 Ingresar N y N Números naturales. Determinar e informar:
a. La sumatoria de los valores múltiplos de 3.
b. La cantidad de valores múltiplos de 5.
c. La sumatoria de los valores que se ingresan en orden par.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int numero, natural, i, sumatoria = 0, cantidad = 0, esPar = 0;

do {
    printf("\n\nIngresar un numero natural para el ciclo: ");
    scanf ("%d", &numero);
    if (numero <= 0 ) {
        printf("\n\nError, no puede ser cero o un numero negativo. Intente nuevamente.");
    }
    } while (numero <= 0 );

    for (i = 1 ; i <= numero ; i++){

        do {
            printf("\nIngresar un numero natural : ");
            scanf ("%d", &natural);
            if (natural <= 0 ) {
                printf("\n\nError, no puede ser cero o un numero negativo. Intente nuevamente.");
            }
            } while (natural <= 0 );
            if (natural % 3 == 0)
                sumatoria = sumatoria + natural;
            if (natural % 5 == 0)
                cantidad = cantidad + 1;
            if (i % 2 == 0)
                esPar = esPar + natural;
        }
    printf("\n\nSumatoria de los valores multiplos de tres : %d", sumatoria);
    printf("\nCantidad de valores multiplos de cinco : %d", cantidad);
    printf("\nSumatoria de los valores pares : %d", esPar);

    printf("\n\n");
    system("pause");
    return 0;
}
