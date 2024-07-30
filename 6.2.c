/*
6.2. Se ingresan n�meros enteros comprendidos entre 100 y 2000 (usar funci�n LeerYValidar). Determinar
usando la funci�n EstaDentroDelRango:
a. Cantidad de n�meros ingresados entre 100 y 500
b. Cantidad de n�meros pares ingresados entre 500 y 1200
c. Promedio de n�meros ingresados entre 1200 y 2000
El ingreso de datos finaliza cuando se ingresa un n�mero igual a 99.
Para realizar este programa se deben realizar las siguientes funciones:
 EstaDentroDelRango: que reciba 3 enteros correspondientes a un n�mero a validar y los l�mites
superior e inferior del rango. La funci�n debe retornar un 1 si el n�mero a validar se encuentra
dentro del rango indicado o un 0 si no lo est�.
 LeerYValidar: que reciba los l�mites superior e inferior de un rango y retorne un n�mero que se
encuentre dentro del mismo. (El ingreso de datos se realiza dentro de la funci�n). Para validar el
rango utilizar la funci�n EstaDentroDelRango realizada en el punto anterior.
*/

#include <stdio.h>
#include <stdlib.h>

int EstaDentroDelRango (int,int,int);
int LeerYValidar (int, int);
int main ()
{
    int NUM;
    int CONT=0, CONT2=0, CONTPAR=0, PROM=0;
    NUM=LeerYValidar(99,2000);
    while (NUM !=99)
    {
        if (NUM<=500)
            CONT=CONT+1;
        if (NUM>=500 && NUM<=1200 && NUM%2==0)
            CONTPAR=CONTPAR+1;
        if (NUM>=1200)
        {
            CONT2=CONT2+1;
            PROM=PROM+NUM;
        }
    NUM=LeerYValidar(99,2000);
    }
    if (CONT==0 && CONTPAR==0 && CONT2==0)
        printf("\n\nNo hay datos.");
    else
    {
        if (CONT !=0)
            printf("\n\n A. Cantidad de numeros ingresados entre 100 y 500 = %d", CONT);
        if (CONTPAR !=0)
            printf("\n B. Cantidad de numeros pares ingresados entre 500 y 1200 = %d", CONTPAR);
        if (PROM !=0)
            printf("\n C. Promedio de n�meros ingresados entre 1200 y 2000 = %.2f", (float)PROM/CONT2);
    }
    return 0;
}
int EstaDentroDelRango (int X, int Y, int Z)
{
    if (X>=Y && X<=Z)
        return 1;
    else
        return 0;
}
int LeerYValidar (int li, int ls)
{
    int NUMF, NUMG;
    do
    {
        printf("\n\nIngresar un numero entre %d y %d :", li, ls);
        scanf("%d", &NUMF);
    } while (!EstaDentroDelRango(NUMF,li,ls));
    return NUMF;
}
