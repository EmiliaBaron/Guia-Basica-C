#include <stdio.h>
#include <stdint.h>

uint16_t *secuencia(uint16_t n)
{
    uint16_t arr[n];
    for (uint16_t i = 0; i < n; i++)
        arr[i] = i;
    return arr;
}

int main()
{
    uint16_t *arr = secuencia(10);
    printf("%d\n", arr[0]);
    return 0;
}

// se imprime por pantalla el primer elemento (?) -> SEGMENTATION FAULT
// la razon es
// Ej11.c:9:12: warning: function returns address of local variable [-Wreturn-local-addr]
