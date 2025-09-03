#include <stdio.h>

int main()
{
    int *p = NULL;
    if (p) // si es Null es falso y si no, es verdadero
    {
        printf("El puntero apunta a: %d\n", *p);
    }
    else
    {
        printf("El puntero no apunta a nada.\n");
    }
}
