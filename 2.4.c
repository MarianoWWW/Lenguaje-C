/*
2.4. Confeccionar un programa que ingrese una medida en ‘pies’ y la exhiba convertida a yardas, pulgadas, cms.
y mts. NOTA: 1 pie = 12 pulgadas; 1 yarda = 3 pies; 1 pulgada = 2,54 cms.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    float medida;

    printf("\n\nIngresar una medida (en pies) : ");
    scanf("%f", &medida);

    printf("\n\nConversiones:\n\nYardas : %.2f\nPulgadas : %.2f\nCentimetros : %.2f\nMetros : %.2f", medida/3, medida*12, medida*12*2.54, (medida*12*2.54)/100);
    printf("\n\n");
    system ("pause");
    return 0;
}
