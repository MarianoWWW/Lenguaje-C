/*
4.10. Confeccionar un programa que permita convertir grados sexagesimales a radianes y viceversa, según el
valor de un código que se ingresa junto al valor. Si código = 1 se ingresan grados, si es 2 se ingresan radianes.
*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int codigo;
    float grados, radianes, grado = 0.0174532, radian = 57.295827;

    do {
        printf ("\n\nIngrese el codigo (1 para convertir de grados a radianes, 2 para convertir de radianes a grados) : ");
        scanf ("%d", &codigo);
        if (codigo < 1 || codigo > 2)
            printf ("\nCodigo erroneo, intente nuevamente.");
    }while (codigo < 1 || codigo > 2);

    if (codigo == 1) {
        printf ("Ingrese los grados a convertir : ");
        scanf ("%f", & grados);
        printf (" %f grados convertidos a radianes son : %f", grados, (grados*grado));
    }
    else {
         printf ("Ingrese los radianess a convertir : ");
        scanf ("%f", & radianes);
        printf (" %f radianes convertidos a grados son : %f", radianes, (radianes*radian));
    }

    printf("\n\n");
    system("pause");
    return 0;
}
