/*
2.8. Se ingresa un número entero que representa una fecha con formato (ddmmaa). Se pide transformarlo a un
número con formato (aammdd).
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int NUM, DIA, MES, ANIO, NUEVO;

    printf ("\nIngrese fecha con formato (ddmmaa): ");
    scanf ("%d", &NUM);
    ANIO=NUM/10000;
    NUM=NUM-(ANIO*10000);
    MES=NUM/100;
    NUM=NUM-(MES*100);
    DIA=NUM*10000;
    NUEVO=ANIO+(MES*100)+DIA;
    printf("\n\nEgreso (aammdd):  %d", NUEVO);
    printf("\n\n");
    system ("pause");
    return 0;
}
