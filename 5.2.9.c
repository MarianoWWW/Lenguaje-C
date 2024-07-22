/*
5.2.9 Se desea realizar un programa para calcular el sueldo final a pagar a cada empleado de una empresa. De
cada uno se tiene, sueldo básico, antigüedad, cantidad de hijos y estudios superiores (‘S’ o ‘N’). Además, se
conocen los porcentajes de aumento del sueldo que dependen de los siguientes factores:
 Si el empleado tiene más de 10 años de antigüedad: aumento del 10%
 Si el empleado tiene más de 2 hijos: aumento del 10%, si solo tiene uno 5%
 Si el empleado posee estudios superiores: aumento del 5%
Luego de ingresar los datos de un empleado se debe preguntar si se desea ingresar otro empleado o no. Se
termina la carga cuando no se deseen ingresar más empleados.
Determinar:
a. Por cada empleado: número de empleado, el sueldo básico y el nuevo sueldo.
b. Sueldo nuevo promedio de la empresa.

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int ANIO,HIJO,CONT=0;
    float NUM,SUELDOB,SUELDON,NUM1=0;
    char ESTUDIO,EMPL;

    do {
        do {
            printf("\nIngresar sueldo basico: $ ");
            scanf("%f", &SUELDOB);
            if (SUELDOB < 0)
                printf("\n\nError al ingresar sueldo basico. Intente nuevamente.");
        }while (SUELDOB < 0);
        SUELDON=SUELDOB;
        do {
            printf("\nIngresar antiguedad: ");
            scanf("%d", &ANIO);
            if (ANIO < 0)
                printf("\n\nError al ingresar la antiguedad. Intente nuevamente.");
        } while (ANIO < 0);
        do {
            printf("\nIngresar cantidad de hijos: ");
            scanf("%d", &HIJO);
            if (HIJO < 0)
                printf("\n\nError al ingresar la cantidad de hijos. Intente nuevamente.");
        }while (HIJO < 0);
        do {
            printf("\nIngresar estudios superiores (S o N): ");
            fflush(stdin);
            scanf("%c", &ESTUDIO);
            ESTUDIO=toupper(ESTUDIO);
            if (!(ESTUDIO == 'S' || ESTUDIO == 'N'))
                printf("\n\nError al ingresar estudios. Intente nuevamente.");
        } while (!(ESTUDIO == 'S' || ESTUDIO == 'N'));
        do {
        printf("\nDesea ingresar otro empleado? (S o N): ");
        fflush(stdin);
        scanf("%c", &EMPL);
        EMPL=toupper(EMPL);
        if (!(EMPL == 'S' || EMPL == 'N'))
            printf("\n\nError, intente nuevamente.");
        } while (!(EMPL == 'S' || EMPL == 'N'));
        if (ANIO>10)
        {
            NUM=SUELDOB*10/100;
            SUELDON=SUELDON+NUM;
        }
        CONT=CONT+1;
        if (HIJO==1 || HIJO==2)
        {
            NUM=SUELDOB*5/100;
            SUELDON=SUELDON+NUM;
        }
        else
        {
            if (HIJO>2)
                NUM=SUELDOB*10/100;
                SUELDON=SUELDON+NUM;
        }
        if (ESTUDIO=='S')
        {
            NUM=SUELDOB*5/100;
            SUELDON=SUELDON+NUM;
        }
        printf("\n\nNumero de empleado %d. Sueldo basico: $ %f. Sueldo nuevo: %f.",CONT,SUELDOB,SUELDON);
        NUM1=NUM1+SUELDON;
    }while (EMPL !='N');

    printf ("\n\nSueldo nuevo promedio de la empresa: $ %8.2f\n\n", NUM1/CONT);
    printf ("\n\n");
    system("pause");
    return 0;
}
