/*
5.2.13 Realizar un programa que le solicite al usuario el ingreso de una vocal (este dato de ingreso se debe
validar). Luego el programa debe dibujar en pantalla la vocal ingresada en cinco líneas y cuatro columnas. La
vocal debe estar formada en cada carácter por la misma letra en mayúscula.
El programa finaliza al ingresar la letra f.
Restricciones: Por cada printf se debe exhibir un solo carácter o salto de línea o espacio.
Ejemplos:
Ingreso del carácter a:
AAAA
A  A
AAAA
A  A
A  A
Ingreso del carácter e:
EEEE
E
EEEE
E
EEEE
Extender el programa para que la vocal se exhiba más grande ingresando un factor de multiplicación.
Por ejemplo si se ingresa un 2 debe dibujarse el doble de grande la letra en pantalla.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()

{
    int i, k, multiplo;
    char vocal;
    do {
            do {
                printf("\n\nIngrese una vocal (F para terminar) : ");
                fflush(stdin);
                scanf("%c", &vocal);
                vocal = toupper(vocal);
                if (!(vocal == 'A' || vocal == 'E' || vocal == 'I' || vocal == 'O' || vocal == 'U' || vocal == 'F'))
                    printf("Error con la letra elegida, intente nuevamente.");
            }while (!(vocal == 'A' || vocal == 'E' || vocal == 'I' || vocal == 'O' || vocal == 'U' || vocal == 'F'));

            if (vocal != 'F') {
                printf("Ingrese un multiplo : ");
                scanf ("%d", &multiplo);
            }
            printf("\n\n\n\n");
            switch (vocal) {
                case 'F':
                    break;
                case 'A':
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 4 * multiplo ; i++) {
                        printf("A");
                    }
                    printf("\n");
                }
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf("A");
                    }
                    for (i = 0 ; i < 2 * multiplo ; i++) {
                        printf(" ");
                    }
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf("A");
                    }
                    printf("\n");
                }
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 4 * multiplo ; i++) {
                        printf("A");
                    }
                    printf("\n");
                }
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf("A");
                    }
                    for (i = 0 ; i < 2 * multiplo ; i++) {
                        printf(" ");
                    }
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf("A");
                    }
                    printf("\n");
                }
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf("A");
                    }
                    for (i = 0 ; i < 2 * multiplo ; i++) {
                        printf(" ");
                    }
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf("A");
                    }
                    printf("\n");
                }
                break;
                case 'E':
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 4 * multiplo ; i++) {
                        printf("E");
                    }
                    printf("\n");
                }
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf("E");
                    }
                    printf("\n");
                }
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 4 * multiplo ; i++) {
                        printf("E");
                    }
                    printf("\n");
                }
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf("E");
                    }
                    printf("\n");
                }
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 4 * multiplo ; i++) {
                        printf("E");
                    }
                    printf("\n");
                }
                break;
                case 'I':
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 4 * multiplo ; i++) {
                        printf("I");
                    }
                    printf("\n");
                }
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf(" ");
                    }
                    for (i = 0 ; i < 2 * multiplo ; i++) {
                        printf("I");
                    }
                    printf("\n");
                }
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf(" ");
                    }
                    for (i = 0 ; i < 2 * multiplo ; i++) {
                        printf("I");
                    }
                    printf("\n");
                }
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf(" ");
                    }
                    for (i = 0 ; i < 2 * multiplo ; i++) {
                        printf("I");
                    }
                    printf("\n");
                }
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 4 * multiplo ; i++) {
                        printf("I");
                    }
                    printf("\n");
                }
                break;
                case 'O':
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 4 * multiplo ; i++) {
                        printf("O");
                    }
                    printf("\n");
                }
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf("O");
                    }
                    for (i = 0 ; i < 2 * multiplo ; i++) {
                        printf(" ");
                    }
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf("O");
                    }
                    printf("\n");
                }
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf("O");
                    }
                    for (i = 0 ; i < 2 * multiplo ; i++) {
                        printf(" ");
                    }
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf("O");
                    }
                    printf("\n");
                }
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf("O");
                    }
                    for (i = 0 ; i < 2 * multiplo ; i++) {
                        printf(" ");
                    }
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf("O");
                    }
                    printf("\n");
                }
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 4 * multiplo ; i++) {
                        printf("O");
                    }
                    printf("\n");
                }
                break;
                case 'U':
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf("U");
                    }
                    for (i = 0 ; i < 2 * multiplo ; i++) {
                        printf(" ");
                    }
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf("U");
                    }
                    printf("\n");
                }
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf("U");
                    }
                    for (i = 0 ; i < 2 * multiplo ; i++) {
                        printf(" ");
                    }
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf("U");
                    }
                    printf("\n");
                }
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf("U");
                    }
                    for (i = 0 ; i < 2 * multiplo ; i++) {
                        printf(" ");
                    }
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf("U");
                    }
                    printf("\n");
                }
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf("U");
                    }
                    for (i = 0 ; i < 2 * multiplo ; i++) {
                        printf(" ");
                    }
                    for (i = 0 ; i < 1 * multiplo ; i++) {
                        printf("U");
                    }
                    printf("\n");
                }
                for (k = 0 ; k < 1 * multiplo ; k++){
                    for (i = 0 ; i < 4 * multiplo ; i++) {
                        printf("U");
                    }
                    printf("\n");
                }
            }
        }while (vocal != 'F');
    printf("\n\n");
    system("pause");
    return 0;

}
