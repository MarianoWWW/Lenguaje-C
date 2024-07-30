/*
7.1.2 Realizar una función que reciba por parámetro dos vectores enteros de 5 elementos cada uno y genere
un vector de 10 posiciones con el contenido de ambos vectores uno a continuación del otro.
*/

#include <stdio.h>
#include <stdlib.h>

void SUMAV(int[], int[], int[]);
int main ()
{
    int Vec1[5], Vec2[5], Vec3[10];
    int NUM,I;
    for (I=0; I<5; I=I+1)
    {
        printf("\n\nValor para el vector 1 :");
        scanf ("%d", &NUM);
        Vec1[I]=NUM;
        printf("\nAhora para el vector 2 :");
        scanf ("%d", &NUM);
        Vec2[I]=NUM;
    }

    SUMAV (Vec1, Vec2, Vec3);

    for (I=0 ; I<10 ; I=I+1)
    {
    printf ("%d ", Vec3[I]);
    }

    return 0;

}
void SUMAV (int V1[], int V2[], int V3[])
{
    int I,A;
    for (I=0 ; I<5 ; I=I+1)
    {
        V3[I]=V1[I];
    }
    A=5;
    for (I=0 ; I<5 ; I=I+1)
    {
        V3[A]=V2[I];
        A=A+1;
    }
     for (I=0 ; I<5 ; I=I+1)
    {
    printf ("%d ", V1[I]);
    }
    printf ("\n");
     for (I=0 ; I<5 ; I=I+1)
    {
    printf ("%d ", V2[I]);
    }
    printf ("\n");

}
