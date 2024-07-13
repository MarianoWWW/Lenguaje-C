/*
2.5. Conociendo la cantidad de tarros de pintura que existe en un depósito de una pinturería y sabiendo que el
50% son tarros de 1Lt, el 30% tarros de 4Lts. y el resto tarros de 20Lts. Determinar la cantidad de tarros de
1Lt., 4Lts. Y 20 Lts.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int total, litro1, litros4, litros20;

    do {
        printf("\n\nIngrese la cantidad de tarros de pintura : ");
        scanf("%d", &total);
        if (total < 0)
            printf("\n\nNo podes tener una cantidad negativa de existencias, intente nuevamente.");
    }while (total < 0);

    litro1 = total * 0.5;
    litros4 = total * 0.3;
    litros20 = total - litro1 - litros4;

    printf("\n\nCantidad de tarros de 1litro : %d\nCantidad de tarros de 4L: %d\nCantidad de tarros de 20L: %d", litro1, litros4, litros20);
    printf("\n\n");
    system ("pause");
    return 0;
}
