/*
6.3. Se realizó un concurso de tiro al blanco. Por cada participante se ingresa un número que lo identifica y el
resultado de los disparos efectuados. El ingreso finaliza con un número de participante negativo.
Cada participante efectúa 5 disparos, registrándose las coordenadas X-Y de cada disparo.
Cátedra: Programación Inicial
Guía Práctica – V2.1 11 / 18
 No considere disparos sobre los ejes, pero sí en el centro (si es sobre los ejes las coordenadas
deberán volver a ingresarse).
 Para determinar el cuadrante utilizar la función CUADRANTE que reciba las dos coordenadas y
retorne el cuadrante al cual pertenece (1 a 4) y 0 para indicar un tiro en el centro.
Para calcular el puntaje utilizar la función PUNTAJE que reciba 5 parámetros que representan la cantidad
disparos en cada cuadrante y en el centro. La función debe retornar el puntaje obtenido según la siguiente
escala:
 Cuadrantes 1 y 2: 50 puntos
 Cuadrantes 3 y 4: 40 puntos
 Centro: 100 puntos
Determinar:
a. El puntaje obtenido por cada participante, detallando cuantos disparos realizó en cada cuadrante.
b. Mostrar el número del participante ganador y el puntaje obtenido.
c. Calcular y mostrar la cantidad total de disparos en el centro (de todos los participantes)

*/

#include <stdio.h>

int CUADRANTE (int,int);
int PUNTAJE (int,int,int,int,int);
int main ()
{
    int PARTICIP,I,X,Y,CUADRA,EPUNTOS,TIPO;
    int FLAG=0,PUNTOS=0,TIRO1=0,TIRO2=0,TIRO3=0,TIRO4=0,TIRO5=0,TOTAL=0;
    printf("Participante numero [Ingrese un numero negativo para finalizar] :");
    scanf("%d", &PARTICIP);
    while (PARTICIP>=0)
    {
        for (I=1 ; I<=5 ; I=I+1)
        {
            do
            {
                printf("\n\nParticipante %d.", PARTICIP);
                printf("\nIngresar coordenada X : ");
                scanf("%d", &X);
                printf("\nIngresar coordenada Y : ");
                scanf("%d", &Y);
            } while ((X==0 && Y !=0) || (Y==0 && X !=0));
            CUADRA=CUADRANTE (X,Y);
            switch (CUADRA)
            {
                case 0: TIRO5=TIRO5+1;
                break;
                case 1: TIRO1=TIRO1+1;
                break;
                case 2: TIRO2=TIRO2+1;
                break;
                case 3: TIRO3=TIRO3+1;
                break;
                case 4: TIRO4=TIRO4+1;
                break;
            }
        }
        EPUNTOS=PUNTAJE (TIRO1,TIRO2,TIRO3,TIRO4,TIRO5);
        printf("\n\nEl participante %d obtuvo %d puntos\nCuadrante 1: %d disparos\nCuadrante 2: %d disparos\nCuadrante 3: %d disparos\nCuadrante 4: %d disparos\nEn el centro : %d disparos", PARTICIP,EPUNTOS,TIRO1,TIRO2,TIRO3,TIRO4,TIRO5);
        if (FLAG==0 || EPUNTOS>PUNTOS)
        {
            FLAG=1;
            PUNTOS=EPUNTOS;
            TIPO=PARTICIP;
        }
        TOTAL=TOTAL+TIRO5;
        TIRO1=0;
        TIRO2=0;
        TIRO3=0;
        TIRO4=0;
        TIRO5=0;
        printf("\n\nParticipante numero [Ingrese un numero negativo para finalizar] :");
        scanf("%d", &PARTICIP);
    }
    if (FLAG !=0)
    {
        printf("\n\nGanador : %d con : %d puntos", TIPO,PUNTOS);
        printf("\nTotal de disparos al centro : %d", TOTAL);
    }
    else
        printf ("\n\nNo hubo participantes.");
    return 0;
}
int CUADRANTE (int XX, int YY)
{
    int RUN;
    if (XX>0 && YY>0)
        RUN=1;
    else
    {
        if (XX>0 && YY<0)
            RUN=4;
        else
        {
            if (XX<0 && YY>0)
                RUN=2;
            else
            {
                if (XX<0 && YY<0)
                    RUN=3;
                else
                    RUN=0;
            }
        }
    }
    return RUN;
}
int PUNTAJE (int A1, int A2, int A3, int A4, int A5)
{
    int AA=0;
    AA=AA+A1*50;
    AA=AA+A2*50;
    AA=AA+A3*40;
    AA=AA+A4*40;
    AA=AA+A5*100;
    return AA;
}
