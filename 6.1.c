/*
6.1. Realizar un programa que al ingresar solicite el ingreso de dos números enteros y luego muestre por
pantalla el siguiente menú (las xx de los números deben ser reemplazadas con los valores
correspondientes):
Menú de Opciones
---- -- --------
Numero 1: xx Numero 2: xx
1) Sumar
2) Restar
3) Multiplicar
4) Dividir
5) Ingresar Nuevos Números
6) Salir
Ingrese su opción:
Al ingresar el número de la opción del 1 al 4, se realiza la operación y muestra el resultado hasta que se
presione una tecla. Luego vuelve a mostrar el menú para poder realizar otra operación con los mismos
números. La opción 5 pide el ingreso de dos nuevos números de trabajo mientras que la opción 6 sale y
cierra el programa.
El ingreso de la opción debe estar validado y en caso de ingresarse un número no válido debe solicitarlo
nuevamente.
Usar una función para mostrar el menú y retornar el valor elegido.
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
