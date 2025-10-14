/* Cargar una serie de números reales positivos en un vector. No se conoce la cantidad exacta de datos, pero se sabe que no superan los 100. La serie finaliza cuando se ingresa cero. Informar el valor máximo, la cantidad de veces que aparece y la/s posición/es que ocupa.  */

#include <stdio.h>
#define MAX_NUMEROS 100
typedef double T_numeros[MAX_NUMEROS];

double dar_maximo(T_numeros numeros, int ML);
void informar_ocurrencias_maximo(T_numeros numeros, int ML, double max);

int main()
{
    int salir = 0;
    T_numeros numeros;
    int ML = 0;
    while (ML <= MAX_NUMEROS && salir != 1)
    {
        printf("ingrese un numero para la posicion %d: ", ML);
        scanf("%lf", &numeros[ML]);
        if (numeros[ML] == 0)
        {
            salir = 1;
        } else {
            ML++;
        }
    }
    int i;
    for (i = 0; i < ML; i++)
    {
        printf("%0.2lf, ", numeros[i]);
    }
    double max = dar_maximo(numeros, ML);
    informar_ocurrencias_maximo(numeros, ML, max);
}
double dar_maximo(T_numeros numeros, int ML) {
    double max = 0;
    int i;
    for (i = 0; i < ML; i++) {
        if(numeros[i] > max) {
            max = numeros[i];
        }
    }
    return max;
}
void informar_ocurrencias_maximo(T_numeros numeros, int ML, double max) {
    int count = 0;
    int posiciones[MAX_NUMEROS];
    int i;
    printf("El máximo es %0.2lf\n", max);
    printf("aparece en los siguientes índices: ");
    for (i = 0; i < ML; i++) {
        if (numeros[i] == max) {
            count ++;
            printf("%d ", i);
        }
    }
    printf("\ntotal de veces que aparece el máximo: %d", count);
}

