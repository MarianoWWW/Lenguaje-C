/*
4.12. Ingresar el valor de la hora y la cantidad de horas trabajadas por un empleado. Calcular su sueldo tomando
en cuenta que recibe un premio de $500 si trabajo más de 50 horas y, además, si trabajó más de 150 horas
se le otorgan $1000 adicionales.
*/

#include <stdio.h>
#include<stdlib.h>

int main() {

    int hora;
    float valor, sueldo;

    do {
    printf ("Ingrese cantidad de horas trabajadas : ");
    scanf ("%d", &hora);
    if (hora <= 0)
        printf ("\n\nError en las horas ingresadas, intente nuevamente.");
    }while (hora <= 0);

    do {
    printf ("Ingrese el valor de la hora : ");
    scanf ("%f", &valor);
    if (valor <= 0)
        printf ("\n\nError en el valor, intente nuevamente.");
    }while (valor <= 0);

    sueldo = valor * hora;

    if (hora > 50)
    {
        sueldo = sueldo + 500;
        if (hora > 150)
            sueldo = sueldo + 1000;
    }

    printf ("\n\n\nEs sueldo es : %.2f $", sueldo);

    printf ("\n\n");
    system("pause");
    return 0;


}
