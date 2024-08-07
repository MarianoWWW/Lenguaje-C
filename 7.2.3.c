//7.2.3 Ingresar una matriz de 5x4 por teclado. Realizar una función que genere un vector con la suma por fila de dicha matriz.


#include <stdio.h>
#include <stdlib.h>

void FuncSuma (int [][4], int []);
int main()
{
    int MAT[5][4], VEC[5]={0};
    int NUM, I, J;
    for (I=0 ; I<5 ; I=I+1)
    {
        for (J=0 ; J<4 ; J=J+1)
        {
            printf("\nIngresar el numero para la posicion [%d][%d] : ", I+1, J+1);
            scanf ("%d", &NUM);
            MAT [I][J]=NUM;
        }
    }
    FuncSuma (MAT,VEC);
    printf("\n\nMatriz : \n");
    for (I=0 ; I<5 ; I=I+1)
    {
        for (J=0 ; J<4 ; J=J+1)
        {
            printf("%d\t", MAT [I][J]);
        }
     printf("\n");
    }
    printf("\n\nVector generado :\n");
    for (J=0 ; J<5 ; J=J+1)
        {
            printf("%d\t", VEC [J]);
        }
    printf("\n\n");
    system ("pause");
    return 0;
}
void FuncSuma (int M[][4], int V[])
{
    int A,B;
    for (A=0 ; A<5 ; A=A+1)
    {
        for (B=0 ; B<4 ; B=B+1)
        {
            V[A]=V[A]+M [A][B];
        }
    }
}
