#include <stdio.h>
void procesar_pares(int num, int *producto, int *pares);
int main()
{
    int producto_pares = 1;
    int cant_pares = 0;
    procesar_pares(432, &producto_pares, &cant_pares);
    printf("La multiplicacion de los digitos pares da: %i\n", producto_pares);
    printf("La cantidad de digitos pares fue: %i\n", cant_pares);
    return 0;
}
void procesar_pares(int num, int *producto, int *pares)
{
    int cociente = num;
    int ultimo_digito;
    while (cociente > 0)
    {
        ultimo_digito = cociente % 10;
        if (ultimo_digito % 2 == 0)
        {
            *producto = *producto * ultimo_digito;
            *pares = *pares + 1;
        }
        cociente = cociente / 10;
    }
}