/*
7.1.4 Construir una función que reciba dos vectores enteros de igual tamaño y retorne un 1 si son guales o un
0 sino lo son.
*/

#include <stdio.h>
#include <stdlib.h>
#define TOPE 5

int FuncIgual (int[], int[]);
int main ()
{
    int NUM,I,Vec1[TOPE], Vec2[TOPE]={0,1,2,3,4};
    for (I=0 ; I<TOPE ; I=I+1)
    {
        printf ("\nIngrese un numero para el vector 1, posicion %d : ", I+1);
        scanf ("%d", &NUM);
        Vec1[I]=NUM;
    }
    NUM=FuncIgual (Vec1, Vec2);
    if (NUM==1)
        printf ("\n\nLos Vectores son iguales.\n\n");
    else
        printf("\n\nLos Vectores son diferentes. \n\n");
    system ("pause");
    return 0;
}
int FuncIgual (int V1[], int V2[])
{
    int I, J=0 , BAN=1;
   while (BAN==1 && J<TOPE)
    {
        if (V1[J] != V2[J])
            BAN=0;
        J=J+1;
    }
    return BAN;
}
