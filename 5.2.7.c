/*
5.2.7 Ingresar diversos quintetos de números positivos de 1 cifra c/u, finalizando cuando las cinco cifras leídas
sean iguales a cero. Determinar e informar cuantos de los quintetos ingresados han formado números
capicúas 'triples' y cuantos 'quíntuples'.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, triples = 0, quintuples = 0, numeros[5];

    printf("Ingresar un quinteto de numeros positivos de una cifra cada uno ( cinco ceros para salir).\n");
        for (i = 0 ; i < 5 ; i++) {
            do {
            printf("\nIngresar la cifra %d/5 : ", (i+1));
            scanf ("%d", &numeros[i]);
            if (numeros[i] < 0 || numeros[i] > 9)
                printf("Error en la cifra ingresada, intente nuevamente.");
        }while (numeros[i] < 0 || numeros[i] > 9);
        }
        while ( !(numeros[0] == 0 && numeros[1] == 0 && numeros[2] == 0 && numeros[3] == 0 && numeros[4] == 0)) {

            if ((numeros[0] == numeros[4]) && (numeros[1] == numeros[3])) {
                quintuples++;
            }
            else {
                // No tengo idea de como buscar capicuas triples en cinco cifras
                if (numeros[1] == numeros[3])
                    triples++;
            }
            printf("Ingresar un quinteto de numeros positivos de una cifra cada uno ( cinco ceros para salir).\n");
            for (i = 0 ; i < 5 ; i++) {
                do {
                    printf("\nIngresar la cifra %d/5 : ", (i+1));
                    scanf ("%d", &numeros[i]);
                    if (numeros[i] < 0 || numeros[i] > 9)
                        printf("Error en la cifra ingresada, intente nuevamente.");
                    }while (numeros[i] < 0 || numeros[i] > 9);
                }
        }
    printf("\n\nNumeros capicuas 'triples' : %d", (triples));
    printf("\n\nNumeros capicuas 'quintuples' : %d", (quintuples));
    printf("\n\n");
    system ("pause");
    return 0;

}
