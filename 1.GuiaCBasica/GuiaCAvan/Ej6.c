#include <stdio.h>
#include <stdint.h>

int main()
{
    int8_t memoria[9] = {255, 31, 42, 0, 55, 67, -128, 127, -99};
    // larga warnings de que 255 no entra en signed int8. Devuelve
    // segmentation fault
    uint8_t *x = (uint8_t *)memoria[0]; // warning no mismo tipo
    int8_t *y = &memoria[6];

    printf("Dir de x: %p Valor: %d\n", (void *)x, *x);
    printf("Dir de y: %p Valor: %d\n", (void *)y, *y);
}

// Devolverá:
//  Dir de x: 0xF0 Valor: 255
//  Dir de y: 0xF6 Valor: -128
