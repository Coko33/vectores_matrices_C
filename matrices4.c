#include <stdio.h>
#define CANT_FIL 3
#define CANT_COL 3
typedef int matriz_t[CANT_FIL][CANT_COL];

void mostrar_matriz(matriz_t matriz);

int main()
{
    matriz_t matriz = {
        {2, 4, 7},
        {1, 22, 0},
        {0, 4, 7}};
    mostrar_matriz(matriz);
    return 0;
}

void mostrar_matriz(matriz_t matriz)
{
    int i, j;
    int min = matriz[0][0];
    int cont = 0;
    for (i = 0; i < CANT_FIL; i++)
    {
        for (j = 0; j < CANT_COL; j++)
        {
            if (matriz[i][j] == min)
            {
                cont++;
            }
            else if (matriz[i][j] < min)
            {
                min = matriz[i][j];
                cont = 1;
            }
        }
    }
    printf("el minimo numero que aparece en la matriz es el %d y aparece %d veces", min, cont);
}
