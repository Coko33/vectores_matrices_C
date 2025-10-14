/* Dado un número n entero positivo y un listado de n números reales, almacenar los números en un vector según el orden de entrada.
Informar el contenido del vector indicando la posición ocupada por cada número a partir de la primera posición. (1 <= n <= 100) */

#include <stdio.h>
#define MAX_NUMEROS 100

int main()
{
    int ML;
    double numeros[MAX_NUMEROS];
    int i;

    printf("ingrese la cantidad de números: ");
    scanf("%i", &ML);
    for (i = 0; i < ML; i++)
    {
        printf("ingrese un numero real para la posicion %d:", i);
        scanf("%lf", &numeros[i]);
    }
    printf("pos num\n");
    for (i = 0; i < ML; i++)
    {
        printf("%d  %0.3f", i, numeros[i]);
    }
}
