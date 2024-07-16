/*
4.9. Confeccionar un programa que permita ingresar un carácter alfanumérico y determine e informe si lo
ingresado corresponde a una vocal, con el mensaje “VOCAL”. y su correspondiente valor numérico en ASCII.
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    char CAR, CAR1;
    printf("\nIngrese un caracter: ");
    scanf("%c", &CAR);
    CAR1=CAR;
    CAR=tolower(CAR);
    if (CAR=='a'||CAR=='e'||CAR=='i'||CAR=='o'||CAR=='u')
        printf("\nEl caracter %c es una VOCAL y su codigo ASCII es %d", CAR1, CAR1);

    printf("\n\n");
    system("pause");
    return 0;
}
