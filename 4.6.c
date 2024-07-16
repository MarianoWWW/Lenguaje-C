/*
4.6. Confeccionar un programa que permita ingresar 4 números enteros, de a uno por vez y determine el menor
valor y su número de orden. Informe los valores ingresados e identifique al menor con mensaje aclaratorio.
*/

#include<stdio.h>
#include<stdlib.h>

int main () {

    int i, menor, Vector[4];

    for (i=0 ; i<4 ; i++)
    {
        printf ("\n\nIngresar el numero %d de 4 : ", i+1);
        scanf ("%d", &Vector[i]);
    }
    menor=Vector[0];

    for (i=1 ; i<4 ; i++)
    {
        if (Vector[i] < menor)
            menor = Vector[i];
    }
    printf ("\n\nLos valores ingresados son : ");
    for (i=0 ; i<4 ; i++)
    {
        printf ("\n%d. %d", i+1, Vector[i]);
    }
    printf ("\n\nEl numero mas chico es : %d y se encuentra en la posicion/es : ", menor);
    for (i=0 ; i<4 ; i++)
    {
        if (Vector[i] == menor)
        printf ("%d ", i+1);
    }
    printf("\n");
    system("pause");
    return 0;
}
