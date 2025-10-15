/* Cargar una serie de números reales positivos en un vector. No se conoce la cantidad exacta de datos, pero se sabe que no superan los 100. La serie fi naliza cuando se ingresa cero. Utilizar una función que invierta el contenido del vector.
Informar el contenido del vector indicando la posición ocupada por cada número a partir de la primera posición */

#include <stdio.h>
#define MAX_NUMEROS 100
typedef double T_numeros[MAX_NUMEROS];

void invertir_vector(T_numeros numeros, int ML);
void invertir_vector_(T_numeros numeros, int ML);

int main()
{
    int salir = 0;
    T_numeros numeros;
    int ML = 0;
    while (ML < MAX_NUMEROS && salir != 1)
    {
        printf("ingrese un numero para la posicion %d: ", ML);
        scanf("%lf", &numeros[ML]);
        if (numeros[ML] == 0)
        {
            salir = 1;
        }
    }
    invertir_vector(numeros, ML);
    int i;
    for (i = 0; i <= ML; i++)
    {
        printf("%0.2lf, ", numeros[i]);
    }
}

void invertir_vector(T_numeros numeros, int ML)
{
    double numeros_aux[ML];
    int i;
    for (i = 0; i < ML - 1; i++)
    {
        numeros_aux[i] = numeros[ML - i];
    }
    for (i = 0; i <= ML; i++)
    {
        numeros[i] = numeros_aux[i];
    }
}

void invertir_vector_(T_numeros numeros, int ML)
{
    int l = 0, r = ML - 1;
    while (l < r)
    {
        double tmp = numeros[l];
        numeros[l] = numeros[r];
        numeros[r] = tmp;
        l++;
        r--;
    }
}
