#include <stdio.h>

int b, c; // global, static (hasta que termine el programa)

int main()
{
    return 0;
}

void f(void)
{
    int b, d; // local (dentro de f), automatic (hasta que termine ejec de f)
}

void g(int a) // -> variable??  local (dentro de g), automatic (hasta que termine ej de g)
{
    int c; // local (dentro de g), automatic (hasta que termine ej de g)
           // posibilidad  de shadowing
    {
        int a, d; // local (dentro de las llaves), automatic (hasta que termine
                  // la ejec del bloque)
    }
}
