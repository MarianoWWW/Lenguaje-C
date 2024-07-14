/*
2.10. Confeccionar un programa que solicite el ingreso del valor del radio (r) de un círculo y con dicho valor calcule
la superficie del círculo, la longitud de la circunferencia (perímetro) y el volumen de la esfera.
*/

#include <stdio.h>
#include<stdlib.h>

int main()
{
    const float PI=3.14159;
    float RADIO;

    do {
        printf("\nIngrese valor del radio: ");
        scanf ("%f", &RADIO);
    }while (RADIO<0);

    printf("\nSuperficie del circulo: %f", RADIO*RADIO*PI);
    printf("\nPerimetro: %f", 2*PI*RADIO);
    printf ("\nVolumen: %f", (4.0/3.0)*PI*RADIO*RADIO*RADIO);

    printf("\n\n");
    system ("pause");
    return 0;

}
