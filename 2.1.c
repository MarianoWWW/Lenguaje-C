// 2.1. Se ingresan la cantidad de horas trabajadas y el valor por hora de un empleado. Determinar el sueldo.

#include <stdio.h>
#include <stdlib.h>

int main (){

    int hora;
    float valor;

    do{
    printf ("\n\nIngrese cantidad de horas trabajadas (Numero entero) : ");
    scanf ("%d", &hora);
    if (hora <=0)
        printf ("\n\n Error en la cantidad de horas, intente nuevamente.");
    }while (hora <= 0);

    do{
    printf ("\n\nIngrese el valor de la hora : ");
    scanf ("%f", &valor);
    if (valor <= 0)
        printf ("\n\nError. Ese valor no deberia tomarse en cuenta. Intente nuevamente.");
    }while (valor <= 0);

    printf ("\n\n\nEs sueldo es : %0.2f $", valor*hora);
    printf ("\n\n");
    system ("pause");
    return 0;
}
