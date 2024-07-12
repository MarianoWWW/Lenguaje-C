// 2.2. Se ingresan las notas de dos evaluaciones de un alumno. Determinar la nota promedio.

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int PRI, SEG;
    float PROM;

    do {
    printf("\n\nIngresar la primera nota (numero entero): ");
    scanf("%d", &PRI);
    if (PRI < 0 || PRI > 10)
        printf ("\n\nError. Esa nota no existe, intente nuevamente.");
    }while (PRI < 0 || PRI > 10);

    do{
    printf("\n\nIngresar la segunda nota (numero entero): ");
    scanf("%d", &SEG);
    if (SEG< 0 || SEG > 10)
        printf ("\n\nError. Esa nota no existe, intente nuevamente.");
    }while (SEG < 0 || SEG > 10);

    PROM=(float)(PRI+SEG)/2;
    printf("\n\nEl promedio es: %.1f", PROM);
    printf("\n\n");
    system ("pause");
    return 0;

}
