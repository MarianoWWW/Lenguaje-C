/*
7.1.7 Se ingresan DNI y nota de un parcial de los alumnos de un curso. El ingreso de datos finaliza con un DNI
negativo. Se sabe que como máximo pueden presentarse a rendir 60 alumnos. Mostrar:
a. Listado de alumnos con su correspondiente DNI y la nota obtenida (en forma de listado)
b. La máxima nota obtenida y el DNI de los alumnos que la obtuvieron.
 */

#include <stdio.h>
#include <stdlib.h>

int IngresaNota (int[], int);
int IngresaDNI ();
void MostrarDNIS (int[], int[], int, int);
int main ()
{
    int NOTAMAX, DNI, I, NOTA, VNOTA[60], VDNIS[60], FLAG=0, CONT=0;
    DNI=IngresaDNI();
    while (DNI>0 && CONT<60)
    {
       VDNIS[CONT]=DNI;
       NOTA=IngresaNota (VNOTA, CONT);
       if (FLAG==0 || NOTA>NOTAMAX)
       {
           FLAG=1;
           NOTAMAX=NOTA;
       }
       CONT=CONT+1;
       DNI=IngresaDNI();
    }
    if (CONT==0)
        printf ("\n\nNo se ingresaron datos.");
    else
    {
        printf ("\n\n");
        for (I=0 ; I<CONT ; I=I+1)
        {
            printf("\nAlumno %d\tDNI : %d\tNota : %d", I+1, VDNIS[I], VNOTA[I]);
        }
        printf ("\n\n");
        printf ("Maxima nota obtenida : %d", NOTAMAX);
        MostrarDNIS (VDNIS, VNOTA, CONT, NOTAMAX);
    }
    printf ("\n\n");
    system ("pause");
    return 0;
}
int IngresaNota (int V1[], int N)
{
    int NOT;
    do
    {
        printf ("\nIngresar nota : ");
        scanf ("%d", &NOT);
        if (NOT<0 || NOT>10)
            printf ("\n Nota loca, intente nuevamente.");
    } while (NOT<0 || NOT>10);
    V1[N]=NOT;
    return NOT;
}
int IngresaDNI()
{
    int D;
    do
    {
        printf("\n\nIngresar DNI : ");
        scanf ("%d", &D);
        if (D==0)
            printf("\nNo me escribas un DNI = 0 , no existe.");
    } while (D==0);
    return D;
}
void MostrarDNIS (int V3[], int V4[], int CO, int MAX)
{
    int J;
    printf("\nDNI de alumnos que obtuvieron esa nota : ");
    for (J=0 ; J<CO ; J=J+1)
    {
        if (V4[J]==MAX)
            printf("%d\t", V3[J]);
    }
}
