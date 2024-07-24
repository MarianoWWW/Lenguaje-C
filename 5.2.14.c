/*
5.2.14 Se ingresan datos de los empleados de una empresa. Por cada empleado se ingresa:
 Legajo (entero entre 1000 y 5000)
 Sueldo básico (float mayor a 1000)
 Antigüedad en años (mayor o igual a 0)
 Sexo (‘M' o 'F')
 categoria (entero entre 1 a 5)
Por cada empleado ingresado se debe calcular el sueldo final a abonar sabiendo que:
 Las categorias 2 y 3 tienen $500 de bonificación.
 La categoria 4 tiene 10% de bonificación.
 La categoria 5 tiene 30% de bonificación.
 Si la antigüedad es mayor a 10 años recibe una bonificación del 10% adicional.
Todos los datos ingresados deben ser validados. El ingreso finaliza con un legajo igual a cero.
Informar:
 El sueldo a abonar a cada empleado.
 Cantidad de empleados de más de 10 años de antigüedad.
 El mayor sueldo y el legajo del empleado que cobra dicho sueldo.
 Cantidad de hombres y de mujeres.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    int legajo, antiguedad, categoria, cantidadAntiguedad = 0, mayorLegajo = 0, cantidadMasculino = 0, cantidadFemenino = 0;
    float sueldoBasico, sueldoFinal, mayorSueldo = 0;
    char sexo;
    do {
        do {
        printf("\n\nIngresar numero de legajo (entre 1.000 y 5.000) y cero para salir : ");
        scanf ("%d", &legajo);
        if ((legajo <1000 || legajo > 5000) && legajo != 0 ) {
            printf("Error en el numero de legajo, intente nuevamente.");
        }
        }while ((legajo <1000 || legajo > 5000) && legajo != 0 );

        if (legajo != 0){
            do {
                printf("Ingresar Sueldo basico (mayor a $ 1.000) : ");
                scanf ("%f", &sueldoBasico);;
                if (sueldoBasico <= 1000){
                    printf("Error en el monto del sueldo basico, intente nuevamente.");
                }
            }while (sueldoBasico <= 1000);
            do {
                printf("Ingrese la antiguedad : ");
                scanf ("%d", &antiguedad);;
                if (antiguedad < 0){
                    printf("Error, no puede ser una antiguedad negativa. Intente nuevamente.");
                }
            }while (antiguedad < 0);
            do {
                printf("Ingrese el sexo del empleado : ");
                fflush(stdin);
                scanf ("%c", &sexo);
                sexo = toupper(sexo);
                if (sexo != 'M' && sexo != 'F'){
                    printf("Error en el dato ingresado. Intente nuevamente.");
                }
            }while (sexo != 'M' && sexo != 'F');
            do {
                printf("Ingrese categoria del empleado (de 1 a 5) : ");
                scanf ("%d", &categoria);
                if (categoria < 1 || categoria > 5){
                    printf("Error en el numero de categoria, intente nuevamente.");
                }
            }while (categoria < 1 || categoria > 5);

            sueldoFinal = sueldoBasico;
            switch (categoria) {
                case 2:
                case 3:
                    sueldoFinal = sueldoFinal + 500;
                    break;
                case 4:
                    sueldoFinal = sueldoFinal + (sueldoBasico*10/100);
                    break;
                case 5:
                    sueldoFinal = sueldoFinal + (sueldoBasico*30/100);
                    break;
                default:
                    break;
            }
            if (antiguedad > 10){
                sueldoFinal = sueldoFinal + (sueldoBasico*10/100);
                cantidadAntiguedad++;
            }
            if (sueldoFinal > mayorSueldo) {
                mayorSueldo = sueldoFinal;
                mayorLegajo = legajo;
            }
            if (sexo == 'M'){
                cantidadMasculino++;
            }
            else {
                cantidadFemenino++;
            }
            printf("\nSueldo a abonar al empleado %d : $ %.2f", legajo, sueldoFinal);
        }
    }while (legajo != 0);

    if (mayorSueldo != 0){
        printf("\n\nCantidad de empleados de mas de 10 de antiguedad : %d", cantidadAntiguedad);
        printf("\nMayor sueldo : $ %.2f cobrado por el empleado de legajo : %d", mayorSueldo, mayorLegajo);
        printf("\nCantidad de hombres : %d", cantidadMasculino);
        printf("\nCantidad de mujeres : %d", cantidadFemenino);
    }
    else {
        printf("\nNo se ingresaron datos.");
    }
    printf("\n\n");
    system("pause");
    return 0;
}
