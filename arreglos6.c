#include <stdio.h>

typedef int T_numeros[100];
void contar_neg_pos(int numeros[], int ML, int *negativos, int *positivos){ 
    int i;
    for(i = 0; i < ML; i++) {
        if (numeros[i] < 0) {
            *negativos = *negativos + 1;
        } else if (numeros[i] > 0) {
            *positivos = *positivos + 1;
        }
    }
}

int main() {
    /*int cargar_vector()*/
    /*int ML = cargar_vector()*/
    T_numeros numeros = {2,8,1,-5,4}; //dato
    int ML = 5; sizeof(numeros)/sizeof(numeros[0]);
    int negativos = 0;
    int positivos = 0;
    contar_neg_pos(numeros, ML, &negativos, &positivos);
    printf("Negativos: %d. Positivos: %d.", negativos, positivos);
    return 0;
}

/* v1 = [2,8,1,-5,4]   v2 = [-2,-15,-3]    v3 = [0,0,10,12,23,55,1]  */