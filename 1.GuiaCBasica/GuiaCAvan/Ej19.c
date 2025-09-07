#include <stdio.h>
int main()
{

    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    // p apunta al int en la fila 0, columna 0
    int *p = &matrix[0][0];
    // p es puntero a el inicio de la matriz

    // ¿qué es reshape?
    int (*reshape)[2] = (int (*)[2])p;
    // reshape es un puntero a un array de 2 ints

    // (int (*)[2]) : matriz ->  puntero a array de enteros [2]
    // (int (*)[2]) :  pointer to array 2 of int (https://cdecl.org)

    printf("%d\n", p[3]); // Qué imprime esta lı́nea? 4
    // debería imprimir 3? o 5?

    printf("%d\n", reshape[1][1]); // Qué imprime esta lı́nea? 4
    // NI IDEAAAA

    return 0;
}