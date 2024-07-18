/*
 5.1.15 Se realizó un concurso de tiro al blanco. Existen 5 participantes y cada uno de ellos efectúa 3 disparos,
registrándose las coordenadas X-Y de cada disparo. Determinar:
a. Cuantos disparos se efectuaron en cada cuadrante por cada participante
b. Cuantos disparos se efectuaron en total en el centro.
NOTA: no considere disparos sobre los ejes.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I,J,X,Y,SUMA,C1,C2,C3,C4;
    SUMA=0, C1=0, C2=0, C3=0, C4=0;
    for (I=1 ; I<=5 ; I=I+1)
    {
        for (J=1 ; J<=3 ; J=J+1)
        {
            do {
            printf("\nParticipante %d, tiro %d, ingresar coordenada X:", I,J);
            scanf("%d", &X);
            printf("\nParticipante %d, tiro %d, ingresar coordenada Y:", I,J);
            scanf("%d", &Y);
            if ((X == 0 && Y != 0) || (X != 0 && Y == 0))
                printf("\n\nNo se toma en cuenta el disparo, favor de repetirlo.\n\n");
            }while ((X == 0 && Y != 0) || (X != 0 && Y == 0));
            if (X==0 || Y==0)
                {
                if (X==0 && Y==0)
                    SUMA=SUMA+1;
                }
            else
                {
                     if (X>0 && Y>0)
                    C1=C1+1;
                else
                    {
                    if (X>0 && Y<0)
                        C4=C4+1;
                    else
                    {
                        if (Y>0)
                            C2=C2+1;
                        else
                            C3=C3+1;
                    }
                    }
                }



        }
        printf("\n\nEl participante %d tuvo estos resultados:", I);
        printf("\nCuadrante 1: %d\nCuadrante 2: %d\nCuadrante 3: %d\nCuadrante 4: %d",C1,C2,C3,C4);
        C1=0,C2=0,C3=0,C4=0;
    }
    printf("\n\nTotal de tiros en el centro: %d\n\n", SUMA);
    system("pause");
    return 0;
}
