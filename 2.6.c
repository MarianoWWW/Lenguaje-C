/*
2.6. El precio para un vuelo es de $8800 en clase turista y se aplica un incremento del 30% en primera clase.
Se ingresan la cantidad de pasajes vendidos de clase turista y de primera clase.
Obtener la recaudación total del vuelo.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TUR=8800, PRI=TUR+(TUR*30/100), CPRI, CTUR;

    do {
    printf("\n\nIngresar la cantidad de pasajeros de primera clase : ");
    scanf("%d", &CPRI);
    if (CPRI < 0)
        printf ("\n\nNo pueden haber cantidades negativas, intente nuevamente.");
    }while (CPRI < 0);

    do {
    printf("\n\nIngresar la cantidad de pasajeros de clase turista : ");
    scanf("%d", &CTUR);
    if (CTUR < 0)
        printf ("\n\nNo pueden haber cantidades negativas, intente nuevamente.");
    }while (CTUR < 0);
    printf("\n\nRecaudacion total del vuelo $ : %d", (TUR*CTUR)+(PRI*CPRI));
    printf("\n\n");
    system ("pause");
    return 0;
}
