#include <stdio.h>
#define FIL 5
#define COL 5
typedef int T_mat[FIL][COL];

void cargar_matriz(T_mat matriz);
void mostrar_matriz(T_mat matriz);
int suma_elementos(T_mat matriz);
int suma_diagonal_principal(T_mat matriz);
int suma_diagonal_secundaria(T_mat matriz);
int suma_triangulo_superior(T_mat matriz);
int suma_triangulo_inferior(T_mat matriz);

int main()
{
    T_mat matriz;
    printf("Ingrese números para cada posiccion de la atriz\n");
    cargar_matriz(matriz);
    printf("La matríz quedó cargada asi:\n");
    mostrar_matriz(matriz);
    int suma = suma_elementos(matriz);
    printf("La suma de sus elementos es: %i \n", suma);
    int suma_diagonal_p = suma_diagonal_principal(matriz);
    printf("La suma de la diagonal principal es: %i \n", suma_diagonal_p);
    int suma_diagonal_s = suma_diagonal_secundaria(matriz);
    printf("La suma de la diagonal principal es: %i \n", suma_diagonal_s);
    int suma_triangulo_sup = suma_triangulo_superior(matriz);
    printf("La suma del triangulo superior es: %i \n", suma_triangulo_sup);
    int suma_triangulo_inf = suma_triangulo_inferior(matriz);
    printf("La suma del triangulo inferior es: %i \n", suma_triangulo_inf);
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
int suma_elementos(T_mat matriz)
{
    int i, j;
    int suma = 0;
    for (i = 0; i < FIL; i++)
    {
        for (j = 0; j < COL; j++)
        {
            suma += matriz[i][j];
        }
    }
    return suma;
}
int suma_diagonal_principal(T_mat matriz)
{
    int i;
    int suma = 0;
    for (i = 0; i < FIL; i++)
    {
        suma += matriz[i][i];
    }
    return suma;
}
int suma_diagonal_secundaria(T_mat matriz)
{
    int i;
    unsigned int j;
    int suma = 0;
    for (i = 0; i < FIL; i++)
    {
        j = FIL - 1 - i;
        suma += matriz[i][j];
    }
    return suma;
}
int suma_triangulo_superior(T_mat matriz)
{
    int i, j;
    int suma = 0;
    for (i = 0; i < FIL; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (j > i)
            {
                suma += matriz[i][j];
            }
        }
    }
    return suma;
}
int suma_triangulo_inferior(T_mat matriz)
{
    int i, j;
    int suma = 0;
    for (i = 0; i < FIL; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (j < i)
            {
                suma += matriz[i][j];
            }
        }
    }
    return suma;
}