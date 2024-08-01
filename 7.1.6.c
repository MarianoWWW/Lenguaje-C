/*
7.1.6 Se ingresan DNI, código de sector (1 a 5) y sueldo de los empleados de una empresa. Se sabe que como
máximo la empresa tiene 100 empleados. Se desea:
a. Cargar los datos de los empleados mediante la función CargaEmpleados. La carga finaliza con un
empleado con DNI 99.
b. Generar un vector con la cantidad de empleados en cada sector mediante la función
CuentaPorSector y mostrarlo en forma de listado.
c. Determinar el importe total a pagar de sueldos mediante la función TotalAPagar
 */

#include <stdio.h>
#include <stdlib.h>

void CuentaPorSector (int[], int);
int CargaEmpleados(int[],int[],int[], float[], int);
float TotalAPagar (float[], int);
int main()
{
    int DNI, CONT=0, VecDNI[100],VecSector[100], VecCantEmpl[5]={0};
    float TOTAL, VecSalario[100]={0};
    DNI=CargaEmpleados(VecDNI, VecSector, VecCantEmpl, VecSalario, CONT);
    while (DNI !=99 && CONT<100)
    {
        CONT=CONT+1;
        DNI=CargaEmpleados(VecDNI, VecSector, VecCantEmpl, VecSalario, CONT);
    }
    printf ("\n\n");
    if (CONT==0)
        printf("No se cargaron empleados");
    else
    {
    for (DNI=0 ; DNI<5 ; DNI=DNI+1)
    {
        printf("\n Sector %d, cantidad de empleados : %d", DNI+1, VecCantEmpl[DNI]);
    }
    TOTAL=TotalAPagar(VecSalario, CONT);
    printf("\n\nTotal a pagar $ : %.2f", TOTAL);
    }
    printf ("\n\n");
    system ("pause");
    return 0;
}
void CuentaPorSector(int VV[], int SEC)
{
    VV[SEC-1]=VV[SEC-1]+1;
}
int CargaEmpleados(int V1[], int V2[], int V3[], float V4[], int C)
{
    int D,S;
    float K;
    do
    {
        printf("\nIngresar DNI, 99 para salir : ");
        scanf("%d", &D);
        if (D<1 || D>99999999)
            printf("\nDNI incorrecto.");
    } while (D<1 || D>99999999);
    if (D !=99)
    {
    V1[C]=D;
    do
    {
      printf("\nIngresar sector de 1 a 5 : ");
      scanf("%d", &S);
      if (S<1 || S>5)
        printf("\nError de Sector. Ingrese nuevamente.");
    }while (S<1 || S>5);
    CuentaPorSector(V3, S);
    V2[C]=S;
        printf("\nIngresa el salario, puede ser cero o negativo : ");
        scanf ("%f", &K);
        V4[C]=K;
    }
    return D;
}
float TotalAPagar (float VVV[], int CONTA)
{
    int W;
    float PAGA=0;
    for (W=0 ; W<=CONTA ; W=W+1)
    {
        PAGA=PAGA+VVV[W];
    }
    return PAGA;
}
