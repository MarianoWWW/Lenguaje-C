// 4.5. Se ingresan 3 números enteros. Informarlos en orden creciente.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int NUM, NUM1, NUM2;
    printf("\nIngrese tres numeros enteros: ");
    scanf("%d%d%d", &NUM, &NUM1, &NUM2);
    if (NUM<NUM1)
    {
        if (NUM<NUM2)
        {
            printf("\n1.\t%d", NUM);
            if (NUM1<NUM2)
            {
                printf("\n2.\t%d\n3.\t%d", NUM1, NUM2);
            }
            else
            {
                printf("\n2.\t%d\n3.\t%d", NUM2, NUM1);
            }
        }
        else
        {
            printf("\n1.\t%d\n2.\t%d\n3.\t%d", NUM2, NUM, NUM1);
        }
    }
    else
    {
        if (NUM1<NUM2)
        {
            printf("\n1.\t%d", NUM1);
            if (NUM<NUM2)
            {
                printf("\n2.\t%d\n3.\t%d", NUM, NUM2);
            }
            else
            {
                printf("\n2.\t%d\n3.\t%d", NUM2, NUM);
            }
        }
        else
        {
            printf("\n1.\t%d\n2.\t%d\n3.\t%d", NUM2, NUM1, NUM);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}
