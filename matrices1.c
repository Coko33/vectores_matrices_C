#include <stdio.h>
#define FIL 3
#define COL 4
typedef int T_mat[FIL][COL];

void cargar_matriz(T_mat matriz);
void mostrar_matriz(T_mat matriz);

int main()
{
    T_mat matriz;
    printf("Ingrese números para cada posiccion de la atriz\n");
    cargar_matriz(matriz);
    printf("La matríz quedó cargada asi:\n");
    mostrar_matriz(matriz);
    return 0;
}

void cargar_matriz(T_mat matriz)
{
    int i, j;
    for (i = 0; i < FIL; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("fila %d, columna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void mostrar_matriz(T_mat matriz)
{
    int i, j;
    for (i = 0; i < FIL; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}