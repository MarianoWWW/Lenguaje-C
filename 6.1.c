/*
6.1. Realizar un programa que al ingresar solicite el ingreso de dos n�meros enteros y luego muestre por
pantalla el siguiente men� (las xx de los n�meros deben ser reemplazadas con los valores
correspondientes):
Men� de Opciones
---- -- --------
Numero 1: xx Numero 2: xx
1) Sumar
2) Restar
3) Multiplicar
4) Dividir
5) Ingresar Nuevos N�meros
6) Salir
Ingrese su opci�n:
Al ingresar el n�mero de la opci�n del 1 al 4, se realiza la operaci�n y muestra el resultado hasta que se
presione una tecla. Luego vuelve a mostrar el men� para poder realizar otra operaci�n con los mismos
n�meros. La opci�n 5 pide el ingreso de dos nuevos n�meros de trabajo mientras que la opci�n 6 sale y
cierra el programa.
El ingreso de la opci�n debe estar validado y en caso de ingresarse un n�mero no v�lido debe solicitarlo
nuevamente.
Usar una funci�n para mostrar el men� y retornar el valor elegido.
*/

#include <stdio.h>
#include <stdlib.h>

int funcionMenu(int, int);

int main()
{
    int NUM1, NUM2, OP;
    printf("Ingrese dos numeros enteros.\n");
    printf("Primer numero: ");
    scanf ("%d", &NUM1);
    printf("\nIngrese el segundo numero: ");
    scanf("%d", &NUM2);
    OP=funcionMenu(NUM1, NUM2);
        while ( OP !=6)
           {
                switch (OP)
                {
                    case 1:printf("\nLa suma de %d + %d = %d", NUM1, NUM2, NUM1+NUM2);
                           printf ("\n\n");
                           system ("pause");
                    break;
                    case 2:printf("\nLa resta de %d - %d = %d", NUM1, NUM2, NUM1-NUM2);
                           printf ("\n\n");
                           system ("pause");
                    break;
                    case 3:printf("\nLa multiplicacion de %d * %d = %d", NUM1, NUM2, NUM1*NUM2);
                           printf ("\n\n");
                           system ("pause");
                    break;
                    case 4:if (NUM2==0)
                             printf("\nNo se puede dividir por cero.");
                             else
                             {

                                printf("\nLa division de %d / %d = %f", NUM1, NUM2, (float)NUM1/NUM2);
                             }
                           printf ("\n\n");
                           system ("pause");
                    break;
                    case 5:printf("\n\nIngresar nuevos numeros enteros.");
                           printf("\nPrimer numero: ");
                           scanf ("%d", &NUM1);
                           printf("\nIngrese el segundo numero: ");
                           scanf("%d", &NUM2);
                    break;
                }

                OP=funcionMenu(NUM1, NUM2);
           }
}
int funcionMenu(int X,int Z)
{
    int FUN;
    do
    {
        printf("\n\nMenu de opciones");
        printf("\n---- -- --------");
        printf("\nNumero 1: %d Numero 2: %d", X, Z);
        printf("\n\n1) Sumar");
        printf("\n2) Restar");
        printf("\n3) Multiplicar");
        printf("\n4) Dividir");
        printf("\n5) Ingresr nuevos numeros");
        printf("\n6) Salir");
        printf("\nIngrese su opcion: ");
        scanf("%d", &FUN);
        if (FUN<1 || FUN>6)
            printf("\nOpcion incorrecta, pruebe nuevamente");
    } while (FUN<1 || FUN>6);
    return FUN;
}
