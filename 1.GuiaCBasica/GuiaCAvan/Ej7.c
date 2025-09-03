#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}

void swap2(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
    return;
}

// swap con esa firma no puede hacer nada, porque recibe las direcciones
//  de x e y como numeros comunes, no como punteros que contienen direcciones
// a cambiar

int main()
{
    int x = 10, y = 20;
    swap(&x, &y);
    swap2(&x, &y);

    printf("x: %d, y: %d\n", x, y);
    return 0;
}