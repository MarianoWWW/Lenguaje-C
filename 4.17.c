/*
4.17. Confeccionar un programa que pueda determinar el importe a pagar por una prestaci�n m�dica seg�n su
c�digo. Los importes se cobran seg�n la siguiente tabla:
C�digo Importe
A 20
D 40
F 60
M 150
T 150
Se debe ingresar el n�mero de historia del paciente y el c�digo de la prestaci�n. Se debe emitir un ticket
con el n�mero de la historia, el c�digo y el importe a pagar.
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
