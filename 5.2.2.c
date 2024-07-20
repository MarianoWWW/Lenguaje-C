/*
5.2.2 Escribir las sentencias que permitan el ingreso correcto del valor numérico de un día y un mes
determinado. Por algún error volver a solicitar.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, flag =0;

    while (flag == 0) {

            do {
                printf("\n\nIngrese un dia en valor numerico :");
                scanf ("%d", &dia);
                if (dia <1 || dia >31) {
                    printf("\n\nError, los dias van del 1 al 31. Intente nuevamente.");
                }
            } while (dia <1 || dia >31);

            do {
                printf("\n\nIngrese un mes en valor numerico :");
                scanf ("%d", &mes);
                if (mes <1 || mes >12) {
                    printf("\n\nError, los meses van del 1 al 12. Intente nuevamente.");
                }
            } while (mes <1 || mes >12);

            switch (mes) {
                case 2:
                    if (dia <= 29) {
                        flag = -1;
                    }
                    break;
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    if (dia <= 31) {
                        flag = -1;
                    }
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    if (dia <= 30) {
                        flag = -1;
                    }
                    break;

                default:

                    break;
            }
            if (flag == 0) {
                printf("\n\nOcurrio algun error en el ingreso de las fechas. Vuelva a intentarlo.");
            }

        }
        printf ("Fecha correcta. Mes : %d dia : %d", mes,dia);

    printf ("\n\n");
    system ("pause");
    return 0;
}
