#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t *x = (uint8_t *)0xF0;
    int8_t *y = (int8_t *)0xF6;
    printf("Dir de x: %p Valor: %d\n", (void *)x, *x);
    printf("Dir de y: %p Valor: %d\n", (void *)y, *y);

    // Devolverá:
    //  Dir de x: 0xF0 Valor: 255
    //  Dir de y: 0xF6 Valor: -128
}

// Si se ejecuta, tira segmentation fault

// x tiene el tipo unsigned porque no se puede representar el mismo
// valor con signo en 8 bits

// y tiene signo porque su valor es negativo (y es suficientemente chico para
// entrar en 8 bits)