/*
7.1.3 Realizar una función que reciba por parámetro dos vectores enteros de 5 elementos cada uno y genere
un vector de 10 posiciones con el contenido de ambos vectores intercalados.
*/

#include <stdio.h>
#include <stdlib.h>

void FuncInter (int[], int[], int[]);
int main()
{
    int Vec1[5], Vec2[5], Vec3[10], I, J, NUM;
    for (I=0 ; I<5 ; I=I+1)
    {
        printf("\nIngresar un numero para el Vector 1, posicion %d : ", I+1);
        scanf ("%d", &NUM);
        Vec1[I]=NUM;
        printf ("\nIngresar un numero para el Vector 2, posicion %d : ", I+1);
        scanf ("%d", &NUM);
        Vec2[I]=NUM;
    }
    FuncInter (Vec1, Vec2, Vec3);
    return 0;
}
void FuncInter (int V1[],int V2[],int V3[])
{
    int J, A=0;
    for (J=0 ; J<5 ; J=J+1)
    {
        V3[A]=V1[J];
        A=A+1;
        V3[A]=V2[J];
        A=A+1;
    }
    printf ("\n\n");
    for (J=0 ; J<10 ; J=J+1)
    {
        printf (" %d ", V3[J]);
    }
    printf("\n\n");
    system ("pause");
}
