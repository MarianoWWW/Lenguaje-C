/*
2.9. Confeccionar un programa que ingrese un valor expresado en Kibibyte (KiB)1 y lo informe expresado en:
TiB, GiB, MiB, con leyendas aclaratorias. (1MiB = 1024 KiB; 1GiB = 1024 MiB; 1TiB = 1024 GiB)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM, MIB, GIB, TIB;

    do{
       printf("\nIngrese un valor en Kibibytes: ");
       scanf ("%d", &NUM);
    } while (NUM<0);

    MIB=NUM/1024;
    printf ("\nMiB= \t%d", MIB);
    GIB=MIB/1024;
    printf("\nGiB= \t%d", GIB);
    TIB=GIB/1024;
    printf("\nTiB= \t%d", TIB);

    printf("\n\n");
    system ("pause");
    return 0;
}
