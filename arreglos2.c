/* Dado un listado de números reales del cual no se conoce la cantidad, almacenar los números en un vector en el orden de entrada. Informar la cantidad de números y el contenido del vector indicando la posición ocupada por cada número a partir de la primera posición. Considerar una estructura de datos de tamaño físico máximo de 1000 posiciones. */

#include <stdio.h>
#define MAX_NUMEROS 1000

int main()
{
    int ML = 0;
    double numeros[MAX_NUMEROS];
    int i = 0;
    int salir = 0;

    while (ML <= 1000 && salir == 0)
    {
        printf("ingrese un numero real para la posicion %d:", ML);
        scanf("%lf", &numeros[ML]);
        if (numeros[ML] == -1)
        {
            salir = 1;
        }
        ML++;
    }
    printf("Se cargaron %d numeros\n", ML - 1);
    printf("pos num\n");
    for (i = 0; i < ML; i++)
    {
        printf("%d  %0.3f\n", i, numeros[i]);
    }
}