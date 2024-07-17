//5.1.4 Se ingresan 100 letras. Determinar la cantidad de vocales ingresadas.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{
    int CONT, I;
    char CAR;
    CONT=0;
    for (I=1; I<=10; I=I+1)
    {
        printf("\nIngresar una letra, hasta llegar a 100: ");
        fflush(stdin);
        scanf ("%c", &CAR);
        CAR=toupper(CAR);
        if (CAR=='A'||CAR=='E'||CAR=='I'||CAR=='O'||CAR=='U')
            CONT=CONT+1;
    }
    printf("\n\nCantidad de vocales ingresadas: %d\n\n", CONT);
    printf("\n\n");
    system("pause");
    return 0;
}
