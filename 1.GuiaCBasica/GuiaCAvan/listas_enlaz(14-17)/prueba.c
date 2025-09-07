#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int x = 42;
    // int *p = &x;

    // printf("Direccion de x: %p Valor: %d\n", (void *)&x, x);
    // printf("Direccion de p: %p Valor: %p\n", (void *)&p, (void *)p);
    // printf("Valor de lo que apunta p: %d\n", *p);
    // printf("tamaño de direccion: %lu\n", sizeof(p));

    int *x = malloc(sizeof(int));

    *x = 42;

    int *x_cop = malloc(sizeof(int));

    *x_cop = *x;

    printf("x cop: %d\n", *x_cop);

    *x = 3;

    free(x);
    free(x_cop);
}

// output:
//  Direccion de x: 0x7ffe28f36f2c Valor: 42
//  Direccion de p: 0x7ffe28f36f30 Valor: 0x7ffe28f36f2c
//  Valor de lo que apunta p: 42

// p es un puntero que tiene una direccion y guarda otra.
// &p la direccion del puntero p
//*p es el valor al que apunta p