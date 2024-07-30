/*
7.1.1 Ingresar un vector de 10 unidades reales mediante una función llamada CARGA. Luego mediante una
segunda función llamada INVERTIR, generar un segundo vector del mismo tamaño con los elementos ubicados
en el orden inverso al del vector original. Mostrar el vector invertido con una función llamada MOSTRAR
*/

#include <stdio.h>
#include <stdlib.h>

void CARGA(float[]);
void INVERTIR(float[], float[]);
void MOSTRAR(float[], float[]);

float main ()
{
    float Vec[10],Vinv[10];
    CARGA (Vec);
    INVERTIR (Vec,Vinv);
    MOSTRAR (Vec,Vinv);
    return 0;
}
void CARGA(float V[])
{
    float NUM;
    int i;
    for (i=0;i<=9;i=i+1)
    {
        printf("\n\nIngresar un numero real :");
        scanf ("%f", &NUM);
        V[i]=NUM;
    }
}
    void INVERTIR(float V[], float Ve[])
{
    int I,A;
    A=9;
    for (I=0;I<=9;I=I+1)
    {
        Ve[A]=V[I];
        A=A-1;
    }
}
void MOSTRAR(float V[], float Ve[])
{
    int I;
    for (I=0;I<=9;I=I+1)
    {
        printf("\n%f\t%f", V[I], Ve[I]);
    }
}
