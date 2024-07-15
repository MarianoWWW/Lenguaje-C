// 4.1. Se ingresan 3 números distintos. Determinar el mayor.

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int NUM, NUM1, NUM2;
    do {
        printf("\nIngrese tres numeros diferentes : ");
        scanf("%d%d%d", &NUM, &NUM1, &NUM2);
    }while (NUM==NUM1 || NUM==NUM2 || NUM1==NUM2);

    if (NUM1>NUM2)
    {
        if (NUM1>NUM)
        {
            printf ("\nEl mayor es : %d", NUM1);
        }
        else
        {
            printf ("\nEl mayor es : %d", NUM);
        }
    }
    else
        {
            if (NUM2>NUM)
            {
                printf ("\nEl mayor es : %d", NUM2);
            }
            else
            {
                printf ("\nEl mayor es : %d", NUM);
            }
        }
    printf("\n\n");
    system ("pause");
    return 0;
    }
