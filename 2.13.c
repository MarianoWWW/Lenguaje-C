/*
2.13. Confeccionar un programa que solicite el ingreso de un número entero positivo de 4 cifras y pueda calcular
e informar la suma de sus dígitos hasta llegar a una sola cifra. Ej:2561 = 5.
*/

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int NUM;
    int SUMA=0, UNI=0, DEC=0, CEN=0, MIL=0, SUMA1=0, UNI1=0, UNI2=0, UNI3=0, DEC1=0, DEC2=0, DEC3=0;
    printf ("\nIngresar un numero de cuatro cifras positivo y entero : ");
    do {
        scanf("%d", &NUM);
    } while (NUM<=999 || NUM>9999);
    UNI=NUM%10;
    DEC=(NUM%100)/10;
    CEN=(NUM%1000)/100;
    MIL=(NUM%10000)/1000;

    printf("unidad %d decena %d centena %d mil %d", UNI, DEC, CEN, MIL);

    if (UNI+DEC<10)
    {
        SUMA=UNI+DEC+CEN;
    }
    else
    {
        SUMA1=UNI+DEC;
        UNI1=SUMA1%10;
        DEC1=(SUMA1%100)/10;
        SUMA=UNI1+DEC1+CEN;
    }
    if (SUMA<10)
    {
        SUMA=SUMA+MIL;
    }
    else
    {
        UNI2=SUMA%10;
        DEC2=(SUMA%100)/10;
        SUMA=UNI2+DEC2+MIL;
    }
    if (SUMA>9)
    {
        UNI3=SUMA%10;
        DEC3=(SUMA%100)/10;
        SUMA=UNI3+DEC3;
    }
    else
    {

    }
    printf("\nLa suma de sus digitos en una sola cifra es: %d", SUMA);


    printf("\n\n");
    system ("pause");
    return 0;
