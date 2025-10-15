#include <stdio.h>
#define FIL 3
#define COL 4
typedef double T_mat[FIL][COL];
typedef double T_vec[FIL];

void cargar_matriz(T_mat matriz);
void mostrar_matriz(T_mat matriz);
void cargar_minimos(T_mat matriz, T_vec minimos);
void mostrar_minimos(T_vec minimos);

int main()
{
    T_mat matriz;
    T_vec minimos;
    printf("Ingrese números para cada posiccion de la atriz\n");
    cargar_matriz(matriz);
    printf("La matríz quedó cargada asi:\n");
    mostrar_matriz(matriz);
    cargar_minimos(matriz, minimos);
    printf("Los valores minimos de cada fila son:\n");
    mostrar_minimos(minimos);
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
            scanf("%lf", &matriz[i][j]);
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
            printf("%2.4lf ", matriz[i][j]);
        }
        printf("\n");
    }
}
void cargar_minimos(T_mat matriz, T_vec minimos)
{
    int i, j;
    for (i = 0; i < FIL; i++)
    {
        double minimo = matriz[i][0];
        for (j = 1; j < COL; j++)
        {
            if (matriz[i][j] < minimo)
            {
                minimo = matriz[i][j];
            }
            minimos[i] = minimo;
        }
    }
}
void mostrar_minimos(T_vec minimos)
{
    int i;
    for (i = 0; i < FIL; i++)
    {
        printf("%2.4lf ", minimos[i]);
    }
}