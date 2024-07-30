/*
6.4. Se ingresa valores positivos entre 1 y 50, finalizando el ingreso con el valor -10, para ello generar una función
que valide dicho ingreso. Calcular:
a. Cuántos números son primos.
b. Cantidad de números pares.
c. Promedio de los números impares.
Utilizar las siguientes funciones:
 Resto: recibe por parámetro el Dividendo y el Divisor; Retorna el resto.
 EsPar: recibe por parámetro un número; Retorna 1 si es Par, 0 si es Impar; Invoca a la función Resto.
 EsPrimo: recibe por parámetro un número; Retorna 1 si es primo, 0 si no es primo; Invoca a la
función Resto. (un número es primero si solo es divisible por 1 y por sí mismo).
 Promedio: recibe por parámetro la suma y el contador; Retorna el promedio si contador > 0 sino
Retorna 0.

*/

#include <stdio.h>
#include <stdlib.h>

int ValidarIngreso();
int Resto(int,int);
int EsPar(int);
int EsPrimo(int);
float Promedio(int,int);
int main ()
{
    float I;
    int CONT=0, CONT1=0, CONT2=0, SUMA=0;
    int DATO;
    DATO=ValidarIngreso();
    while (DATO !=-10)
    {
        if (EsPrimo(DATO))
            CONT=CONT+1;
        if (EsPar(DATO))
            CONT1=CONT1+1;
        else
        {
            SUMA=SUMA+DATO;
            CONT2=CONT2+1;
        }
        DATO=ValidarIngreso();
    }
    if (CONT==0 && CONT1==0 && CONT2==0)
        printf("\n\nNo se ingresaron datos.");
    else
    {
        printf("\n\nLa cantidad de numeros primos es : %d", CONT);
        printf("\nLa cantidad de numeros pares es: %d", CONT1);
        I=Promedio (SUMA,CONT2);
        if (I==0)
            printf("\nNo hubieron numeros impares");
        else
            printf("\nPromedio impares : %.2f", I);
    }
    printf("\n\n");
    system("pause");
    return 0;
}

int ValidarIngreso()
{
    int DATOV;
    do
    {
       printf("\n\nIngresar valores entre 1 y 50. Con -10 para finalizar : ");
       scanf ("%d", &DATOV);
       if ((DATOV<1 || DATOV>50) && DATOV !=-10)
        printf ("\nDato erroneo, pruebe nuevamente.");
    } while ((DATOV<1 || DATOV>50) && DATOV !=-10);
    return DATOV;
}
int Resto(int X, int Y)
{
    int RESTO;
    RESTO=X%Y;
    return RESTO;
}
int EsPar(int NUM)
{
    int par;
    par=Resto(NUM,2);

    if (par == 0)
        return 1;
    else
        return 0;
}
int EsPrimo(int DATO)
{
    int I, resto, contar;
    if (DATO == 1)
        return 0;
    for (I=2; I<=DATO; I=I+1)
    {
        resto=Resto(DATO, I);
        if (resto == 0)
            contar++;
    }
    if (contar < 2)
        return 1;
    else
        return 0;
}
float Promedio (int A, int B)
{
    float C;
    if (B==0)
        C = 0;
    else
        {
            C=(float)A/B;
        }
    return C;
}
