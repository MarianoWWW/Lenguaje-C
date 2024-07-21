/*
5.2.6 Un negocio de perfumería efectúa descuentos en sus ventas según el importe de las mismas, con la
siguiente escala:
 menor a 50 pesos el 3.5 %
 entre 50 y 150 pesos el 10 %
 entre 151 y 300 pesos el 20 %.
 mayor a 300 pesos el 25 %
Confeccionar un programa que:
a. Solicite un importe y calcule el descuento a efectuar y el importe neto a cobrar, con mensajes
aclaratorios.
b. Informe el importe promedio de todas las ventas realizadas.

Se debe contemplar que se puedan ingresar varios importes y para finalizar se ingresa un valor negativo o
cero
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int CONT=0;
    float IMP,DESC,SUMA1,SUMA=0;
    printf("\nIngrese importe: ");
    scanf("%f", & IMP);
    while (IMP>0)
    {
        if (IMP<50)
        {
            DESC=IMP*3.5/100;
            SUMA=SUMA+IMP-DESC;
            SUMA1=IMP-DESC;
        }
        else
        {
            if (IMP>=50 && IMP<=150)
            {
            DESC=IMP*10/100;
            SUMA=SUMA+IMP-DESC;
            SUMA1=IMP-DESC;
            }
            else
            {
                if (IMP>150 && IMP<=300)
                {
            DESC=IMP*20/100;
            SUMA=SUMA+IMP-DESC;
            SUMA1=IMP-DESC;
                }
                else
                {
            DESC=IMP*25/100;
            SUMA=SUMA+IMP-DESC;
            SUMA1=IMP-DESC;
                }
            }
        }
        CONT=CONT+1;
        printf("\nDescuento a efectuar $ %.2f Importe a cobrar $ %.2f", DESC,SUMA1);
        printf("\nIngrese importe: ");
        scanf ("%f", &IMP);
    }
    if (CONT==0)
        printf("\nNo hubo ventas.");
    else
        printf("\nPromedio de ventas $ %.2f\n\n", SUMA/CONT);
    printf("\n\n");
    system ("pause");
    return 0;
}
