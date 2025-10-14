/*Dado un listado de valores numéricos i y x, donde i es un entero mayor que 0 y menor o igual 999, y x un número real, almacenar x en la posición i de un vector. El listado no se ingresa ordenado por posición. Informar la cantidad de números y el contenido del vector indicando la posición ocupada por cada número a partir de la primera posición. Omitir las posiciones que no contengan valor.
Considerar una estructura de datos de tamaño físico máximo de 1000 posiciones.*/

#include <stdio.h>
#include <stdbool.h>
#define MAX_NUMEROS 1000
typedef double T_numeros[MAX_NUMEROS];
typedef bool T_usados[MAX_NUMEROS];

int main()
{
    T_numeros numeros;
    T_usados usados = {false};
    int ML = 0;
    int i;
    double x;
    int salir = 0;
    int j = 0;
    int count = 0;

    while (ML <= 1000 && salir == 0)
    {
        do
        {
            printf("ingrese un numero del 1 al 999 para la posicion (-1 para salir):");
            scanf("%d", &i);
            if (i >= MAX_NUMEROS)
            {
                printf("la posicion está fuera de rango");
            }
        } while (i != -1 && (i < 1 || i >= MAX_NUMEROS));

        if (i != -1)
        {
            printf("ingrese un numero real para guardar en la posicion %d:", i);
            scanf("%lf", &numeros[i - 1]);
            if (i > ML)
            {
                ML = i;
            };
            count++;
            usados[i - 1] = true;
        }
        else
        {
            salir = 1;
        }
    }
    printf("Se cargaron %d numeros\n", count);
    printf("pos num\n");
    for (j = 0; j < ML; j++)
    {
        if (usados[j])
        {
            printf("%d  %0.3f\n", j + 1, numeros[j]);
        }
    }
}