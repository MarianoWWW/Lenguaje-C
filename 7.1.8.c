/*
7.1.8 Realizar los siguientes vectores con 10 valores reales. Confeccionar un programa para:
a. Generar el vector VA con la informaci�n ingresada por teclado.
b. Generar el vector VB, donde cada elemento es la ra�z cuadrada del respectivo elemento de VA.
(para el c�lculo de la ra�z cuadrada utilizar la funci�n sqrt disponible en la biblioteca math.h). Si el
n�mero es negativo poner un 0 ya que no se puede calcular la ra�z
c. Calcular el vector VC como VA+VB.
d. Copiar el vector VC en orden inverso en otro vector llamado VD.
e. Hallar el valor m�ximo del vector VA y en qu� posici�n se hall� (el mayor es �nico).
f. Hallar el valor m�nimo del vector VB y en qu� posiciones se hallaron (el m�nimo se pude repetir).
g. Dado un valor ingresado por teclado, indicar en qu� posici�n se encontr� del vector VC.
h. Mostrar el contenido de todos los vectores.
FUNCIONES:
I.   Para el ingreso del vector AA, del punto a).
II.  Para generar el vector CC, del punto c).
III. Para realizar la b�squeda del punto g).
IV.  Para generar el vector VE del punto i).
V.   Para mostrar los valores de todos los vectores del punto j).
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void IngresaVec(float[]);
void SumaVec(float[], float[], float[]);
int PosVec(float[]);
void Vec(float[], int);
void MostrarVec(float[], float[], float[], float[]);
int main()
{
    float MIN, MAX;
    float VA[10], VB[10], VC[10], VD[10];
    int POS, I;
    int FLAG=0, FLAG1=0, INV=9;
    IngresaVec(VA);
    for (I=0 ; I<10 ; I=I+1)
    {
        if (VA[I]<0)
            VB[I]=0;
        else
            VB[I]=sqrt(VA[I]);
    }
    SumaVec(VA, VB, VC);
    for (I=0 ; I<10 ; I=I+1)
    {
        VD[INV]=VC[I];
        INV=INV-1;
    }
    for (I=0 ; I<10 ; I=I+1)
    {
        if (FLAG==0 || VA[I]>MAX)
        {
            FLAG=1;
            MAX=VA[I];
            POS=I+1;
        }
    }
    printf ("\n\nValor maximo %f\tPosicion : %d", MAX, POS);
    for (I=0 ; I<10 ; I=I+1)
    {
        if (FLAG1==0 || VB[I]<MIN)
        {
            FLAG1=1;
            MIN=VB[I];
        }
    }
    for (I=0 ; I<10 ; I=I+1)
    {
        if (VB[I]==MIN)
            printf ("\nValor minimo %f\tPosicion : %d", MIN, I+1);
    }
    POS=PosVec(VC);
    if (POS !=0)
        printf ("\n\nPosicion dentro del vector : %d", POS);
    else
        printf ("\n\nNo existe dicho valor en el vector.");
    MostrarVec(VA, VB, VC, VD);
    printf("\n\n");
    system("pause");
    return 0;
}
void IngresaVec(float V1[])
{
    float A;
    int J;
    for (J=0 ; J<10 ; J=J+1)
    {
        printf("\nINgresa un valor real para la posicion %d dentro del vector : ", J+1);
        scanf("%f", &A);
        V1[J]=A;
    }
}
void SumaVec(float V2[], float V3[], float V4[])
{
    int K;
    for (K=0 ; K<10 ; K=K+1)
    {
        V4[K]=V2[K]+V3[K];
    }
}
int PosVec(float V5[])
{
    float AA;
    int L, POST=0;
    printf("\n\nIngresa valor para buscarlo : ");
    scanf ("%f", &AA);
    for (L=0 ; L<10 ; L=L+1)
    {
        if (AA==V5[L])
            POST=L+1;
    }
    return POST;
}
void Vec(float V10[], int V)
{
    int N;
    switch (V)
    {
        case 0: printf("\nVA :");
        break;
        case 1: printf("\nVB :");
        break;
        case 2: printf("\nVC :");
        break;
        default: printf("\nVD :");
    }
    for (N=0 ; N<10 ; N=N+1)
    {
        printf("  %f  ", V10[N]);
    }
}
void MostrarVec(float V6[], float V7[], float V8[], float V9[])
{
    Vec(V6,0);
    Vec(V7,1);
    Vec(V8,2);
    Vec(V9,3);
}
