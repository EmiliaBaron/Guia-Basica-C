#include <stdio.h>
int main()
{
    int i = 10;
    while (i--)
    {
        printf("i = %d\n", i); // imprime o no el 0?
    }
}

// no lo imprime -> SI LO IMPRIME
// PORQUE PRIMERO CHEQUEA Y LUEGO DECREMENTA
// i-- DEVUELVE 1 Y EN EL CUERPO VALE 0