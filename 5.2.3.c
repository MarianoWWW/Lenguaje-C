/*
5.2.3 Confeccionar un programa que pueda ingresar una secuencia de caracteres hasta que se digite un *. Se
desea obtener e informar cuantos caracteres ingresados son num�ricos y cuantos alfab�ticos. Estos �ltimos
tienen que mostrarse separados por may�sculas y min�sculas. Tambi�n informar la cantidad de otros
s�mbolos que no sean ni letras ni n�meros.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char CHAR;
    int NUM, SUMA=0, SUMA1=0, SUMA2=0, SUMA3=0;
    do
    {
        printf("\nIngrese un caracter: ");
        fflush(stdin);
        scanf("%c", &CHAR);
        NUM=CHAR;
        if (NUM>=48 && NUM<=57)
            {
            SUMA=SUMA+1;
            }
        else
        {
            if (NUM>=65 && NUM<=90)
                {
                SUMA1=SUMA1+1;
                }
            else
            {
                if (NUM>=97 && NUM<=122)
                    {
                    SUMA2=SUMA2+1;
                    }
                else
                    {
                    SUMA3=SUMA3+1;
                    }
            }
        }
    }while (CHAR != '*');
    printf("\nCantidad de caracteres numericos: %d", SUMA);
    printf("\nCantidad de caracteres mayusculas: %d", SUMA1);
    printf("\nCantidad de caracteres minusculas: %d", SUMA2);
    printf("\nCantidad de caracteres simbolos: %d\n\n", SUMA3);
    printf("\n\n");
    system("pause");
    return 0;
}
