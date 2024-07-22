/*
5.2.8 Confeccionar un programa que me permita calcular y mostrar una cantidad de números primos que se
solicita por la pantalla. Los números se calculan a partir del 2. Ejemplo: Si ingreso 6, genero los números: 2 –
3 - 5 - 7 - 11 - 13. El algoritmo para el cálculo de si un número es primo o no, debe estar optimizado para que
si encuentra un divisor no seguir buscando ya que se sabe que no es primo.
*/

int main () {

    int numero, i = 2, j = 2, cantidad = 0, contador =0, salida = 0;


    do {
        printf("Ingresar la cantidad de numeros primos que se desean ver (a partir del numero 2): ");
            scanf ("%d", &numero);
            if (numero < 0) {
                printf("Error, no puede ser una cantidad negativa. Intente nuevamente.");
            }
        }while (numero < 0);

        while (cantidad < numero) {

            while (salida < 2) {

                if (( i % j == 0) && (i % 1 == 0)){
                    contador++;
                    salida ++;
                }
                if (i == j){
                    salida++;
                    }
            j++;
            }
            if (contador == 1) {
               printf("  %d",i);
                cantidad++;
            }
            contador = 0;
            salida = 0;
            i++;
            j = 2;
        }

    printf("\n\n");
    system("pause");
    return 0;
}
