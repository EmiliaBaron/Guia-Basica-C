#include <stdio.h>

int main()
{
    void *ptr;
    int x = 42;
    ptr = &x; // ptr apunta a la dirección de x
    // Convertir el puntero void* a un puntero int*
    int *p = (int *)ptr;
    printf("Valor: %d\n", *p); // Imprime 42
}

// no se puede desreferenciar a un puntero *void