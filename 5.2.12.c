/*
5.2.12 Confeccionar un programa que permita el ingreso de 6 ternas de valores enteros.
a. de cada terna informar el mayor valor y su orden en la terna.
b. de cada terna informar cuantos valores son múltiplos de 7.
c. de las 6 ternas determinar e informar el promedio de los primeros valores de cada una.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, maximo, contador = 0, total = 0, posicion, terna[3];

    for (i = 1 ; i <= 6 ; i++)
        {
            printf ("\n\nIngresar la terna : %d", i);
            for (j=0 ; j<3 ; j++)
            {
                printf ("\nValor %d/3 : ", j+1);
                scanf ("%d", &terna[j]);
            }
            maximo = terna[0];
            posicion = 1;
            if (terna[1] > maximo){
                maximo = terna[1];
                posicion = 2;
            }
            if (terna[2] > maximo) {
                maximo = terna[2];
                posicion = 3;
            }
            for (j=0 ; j<3 ; j++)
            {
                if (terna[j] % 7 == 0)
                    contador++;
            }
            total = total + terna[0];

            printf("\n\nMayor valor de la terna %d es : %d y esta en la posicion : %d",i,maximo, (posicion));
            printf("\nValores multiplos de 7 en esta terna : %d", (contador));
            contador = 0;
        }
    printf("\nPromedio de los primeros valores : %.2f", (float)total/6);
    printf("\n\n");
    system("pause");
    return 0;
}









