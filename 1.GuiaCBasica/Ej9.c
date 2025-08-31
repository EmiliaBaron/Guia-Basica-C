#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t a = 0xfd;
    uint8_t b = 0xed;
    uint8_t mask = 0xe0;

    if ((a & mask) == (b & mask))
    {
        printf("los primeros 3 bits de los valores hardcodeados son iguales");
    }

    return 0;
}