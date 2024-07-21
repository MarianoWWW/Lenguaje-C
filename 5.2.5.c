/*
5.2.5 De cada uno de los alumnos de un curso se ingresa su número de DNI y las notas de los dos exámenes
parciales confeccionar, un programa que muestre por cada alumno su condición final con el siguiente
mensaje:
“El alumno con DNI: xxxxxxx, obtuvo las notas: xx y xx [condición final]”
La condición final se establece según las siguientes reglas:
 PROMOCIONA: ambas notas > = 7
 RINDE EXAMEN FINAL: ambas notas > = 4
 REPROBO LA MATERIA: alguna nota no cumple lo anterior
El programa finaliza cuando se ingresa un valor negativo como número de DNI. Al finalizar mostrar la nota
promedio de alumnos promocionados.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NOTA1, NOTA2;
    int CONT=0, SUMA=0, DNI=1;
    while (DNI>=0)
    {
        printf("\nIngresar DNI:");
        scanf("%d", &DNI);
        if (DNI >=0)
        {
        printf("\nIngresar nota del primer parcial: ");
        scanf("%d", &NOTA1);
        printf("\nIngresar nota del segundo parcial: ");
        scanf("%d", &NOTA2);
        if (NOTA1>=7 && NOTA2 >=7)
        {
            SUMA=SUMA+NOTA1+NOTA2;
            CONT=CONT+1;
            printf("\nEl alumno con DNI %7d, obtuvo las notas %2d y %2d [PROMOCIONA]", DNI,NOTA1,NOTA2);
        }
        else
        {
            if (NOTA1>=4 && NOTA2 >=4)
                printf("\nEl alumno con DNI %7d, obtuvo las notas %2d y %2d [RINDE EXAMEN FINAL]", DNI,NOTA1,NOTA2);
            else
               printf("\nEl alumno con DNI %7d, obtuvo las notas %2d y %2d [REPROBO LA MATERIA]", DNI,NOTA1,NOTA2);
        }
        }
    }
    if (CONT !=0)
        printf("\nNota promedio de alumnos promocionados : %.1f", (float)SUMA/(CONT*2));
    else
        printf("\nSin alumnos sabios.\n\n");
    printf("\n\n");
    system ("pause");
    return 0;
}
