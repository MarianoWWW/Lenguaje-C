/*
 4.18. Confeccionar un programa que permita ingresar la fecha actual (día, mes y año) y la fecha de nacimiento
de una persona (día, mes y año). Con ambos datos debe calcular la edad de dicha persona.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ANIO_P, ANIO_A, MES_P, MES_A, DIA_P, DIA_A, SUMA;
    printf("\nIngrese anio actual: ");
    scanf("%d", &ANIO_A);
    printf("\nIngrese mes actual: ");
    scanf("%d", &MES_A);
    printf("\nIngrese dia actual: ");
    scanf("%d", &DIA_A);
    printf("\nIngrese anio de nacimiento: ");
    scanf("%d", &ANIO_P);
    printf("\nIngrese mes de nacimiento: ");
    scanf("%d", &MES_P);
    printf("\nIngrese dia de nacimiento: ");
    scanf("%d", &DIA_P);
    SUMA=ANIO_A-ANIO_P;
    if (MES_A <= MES_P)
    {
        SUMA=SUMA-1;
        if (DIA_A>=DIA_P)
            {
            SUMA=SUMA+1;
            }
    }
    printf("\nEdad : %d\n\n", SUMA);

     printf("\n\n");
    system("pause");
    return 0;
}
