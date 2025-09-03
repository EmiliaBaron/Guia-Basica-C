#include <stdio.h>

int main()
{
    char *str1 = "Hola";
    char str2[] = "Hola";
    printf("%s\n", str1);
    printf("%s\n", str2);
    return 0;
}

// str1 y str2 printean lo mismo en pantalla.

// str1 es un string literal, un array de caracteres constante. No se puede modificar
// De intentar hacerlo ocurre un error de segmentacion.

// str2 es un array de chars (?). Modificable