#include <stdio.h>

int var;

int main()
{
    int var;

    printf("valor global = %d \nvalorlocal = %d", var, var);

    return 0;
}

// primer intento
// valor global = 0 valorlocal = 32764

// segundo intento
// valor global = 32765 valorlocal = 32765 (valor local pisa al global, shadowing )