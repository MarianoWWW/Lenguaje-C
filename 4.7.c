/*
4.7. Confeccionar un programa que solicite e ingrese 3 valores reales positivos, mayores que cero y determine
e informe si forman o no triángulo. Para ello utilizar el teorema de la desigualdad del triángulo que establece
que la suma de las longitudes de cualesquiera de dos lados de un triángulo es mayor que la longitud del
tercer lado.
*/

#include<stdio.h>
#include<stdlib.h>

int main () {

    float num,num1,num2;

    do {
        printf ("\n\nIngrese tres valores reales positivos mayores a cero : ");
        scanf ("%f%f%f", &num, &num1, &num2);
        if (num <= 0 || num1 <= 0 || num2 <= 0)
             printf ("\n\nError. No pueden ser valores menores o iguales a cero, intente nuevamente.");
    }while (num <= 0 || num1 <= 0 || num2 <= 0);

    if ((num+num1 > num2) && (num+num2 > num1) && (num1+num2 > num))
        printf ("\n\nSi forman un triangulo.");
    else
        printf ("\n\nNo forman un triangulo.");

    printf("\n");
    system("pause");
    return 0;
}
