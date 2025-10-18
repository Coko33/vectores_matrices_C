#include <stdio.h>
#define MAX_DIM 10
#define MIN_DIM 1
typedef int t_mat[MAX_DIM][MAX_DIM];

void cargar_matriz(t_mat matriz, int *dim);
void sumar_matrices(t_mat matriz_A, t_mat matriz_B, t_mat matriz_suma, int dim);
int main () {
    int dim = 0;
    t_mat matriz_A;
    t_mat matriz_B;
    t_mat matriz_suma;
    cargar_matriz(matriz_A, &dim);
    cargar_matriz(matriz_B, &dim);
    sumar_matrices(matriz_A, matriz_B, matriz_suma, dim);
    return 0;
}

void cargar_matriz(t_mat matriz, int *dim) {
    if (*dim == 0) {
        do {
            printf("Ingrese la dimension de la matriz: ");
            scanf("%d", dim);
            if(*dim < MIN_DIM || *dim > MAX_DIM) {
                printf("El rango debe estar (entre 1 y 10)");
            }
        } while (*dim < MIN_DIM || *dim > MAX_DIM);
    } 
    int i, j;
    for(i = 0; i < *dim; i++) {
        for(j = 0; j < *dim; j++) {
            printf("Ingrese un numero para la posicion [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void sumar_matrices(t_mat matriz_A, t_mat matriz_B, t_mat matriz_suma, int dim) {
    int i, j;
    for(i = 0; i < dim; i++){
        for(j = 0; j < dim; j++){
            matriz_suma[i][j] = matriz_A[i][j] + matriz_B[i][j];
            printf("%3d", matriz_suma[i][j]);
        }
        printf("\n");
    }
}