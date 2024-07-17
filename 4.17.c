/*
4.17. Confeccionar un programa que pueda determinar el importe a pagar por una prestación médica según su
código. Los importes se cobran según la siguiente tabla:
Código Importe
A 20
D 40
F 60
M 150
T 150
Se debe ingresar el número de historia del paciente y el código de la prestación. Se debe emitir un ticket
con el número de la historia, el código y el importe a pagar.
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int HIST;
    int IMP=0;
    char COD;
    printf("\nIngrese el numero de la Historia del paciente: ");
    scanf("%d", &HIST);
    printf("\nIngrese el Codigo: ");
    getchar();
    scanf("%c", &COD);
    COD=toupper(COD);
    switch (COD)
    {
        case 'A': IMP=20;
            break;
        case 'D': IMP=40;
            break;
        case 'F': IMP=60;
            break;
        case 'M':
        case 'T': IMP=150;
            break;
        default: printf("\nCodigo mal escrito.");
    }
    if (IMP==0)
    {
    }
    else
    {
        printf("\nTicket: Historia del paciente %d Codigo %c Importe a pagar $ %d\n\n", HIST, COD, IMP);
    }

    printf("\n\n");
    system("pause");
    return 0;
}
