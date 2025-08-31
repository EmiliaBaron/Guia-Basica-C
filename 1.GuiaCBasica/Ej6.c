#include <stdio.h>
int main()
{
    int mensaje_secreto[] = {116, 104, 101, 32, 103, 105, 102, 116, 32, 111,
                             102, 32, 119, 111, 114, 100, 115, 32, 105, 115, 32, 116, 104, 101, 32,
                             103, 105, 102, 116, 32, 111, 102, 32, 100, 101, 99, 101, 112, 116, 105,
                             111, 110, 32, 97, 110, 100, 32, 105, 108, 108, 117, 115, 105, 111, 110};

    size_t length = sizeof(mensaje_secreto) / sizeof(int);
    char decoded[length];

    for (int i = 0; i < length; i++)
    {
        decoded[i] = (char)(mensaje_secreto[i]); // casting de int a char
    }
    for (int i = 0; i < length; i++)
    {
        printf("%c", decoded[i]);
    }

    printf("\nlongitud del mensaje es: %d", length);
    return 0;
}

// se imprime el mensaje the gift of words is the gift of deception and illusion.

// length se calcula asi porque la razon entre la longitud del array y la longitud de cada uno de
// sus elementos es la cantidad de elementos que tiene

// si mensaje_secreto tiene un tamano mayor a la cantidad de caracteres, no se rompe misticamente
// si mensaje_secreto tiene menor tamaño a cant caracteres, se codifican menos caracteres

// size_t -> long unsigned int
// se usa size_t por nomenglatura, se puede reemplazar por int por el warning que tira