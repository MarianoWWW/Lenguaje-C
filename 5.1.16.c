/*
 5.1.16 Se ingresan DNI y la nota promedio de 10 alumnos. Determinar el DNI del alumno de mayor nota
 promedio (considerar único).
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I,DNI,NOTA,NOTAM,DNIM,FLAG=0;
    for (I=1 ; I<=10 ; I=I+1)
    {
        printf("\n\nIngresar del alumno %d, el dni: ",I);
        scanf("%d", &DNI);
        printf("\nIngresar del alumno %d, la nota promedio: ",I);
        scanf("%d", &NOTA);
        if (FLAG==0 || NOTA>NOTAM)
        {
            NOTAM=NOTA;
            FLAG=1;
            DNIM=DNI;
        }
    }
    printf("\n\nDNI de mayor nota promedio: %d\n\n", DNIM);
    printf("\n\n");
    system("pause");
    return 0;
}
