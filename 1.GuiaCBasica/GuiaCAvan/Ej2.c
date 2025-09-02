#include <stdio.h>

typedef struct
{
    char *nombre;
    int vida;
    double ataque;
    double defensa;

} monstruo_t;

monstruo_t evolucionar(monstruo_t monstri)
{
    monstruo_t evolucionado = monstri;
    evolucionado.ataque += 10;
    evolucionado.defensa += 10;

    return evolucionado;
}

void print_monstruo(monstruo_t monstri)
{
    printf("nombre: %s\n", monstri.nombre);
    printf("vida: %d\n", monstri.vida);
    printf("defensa y ataque: %f, %f\n", monstri.ataque, monstri.defensa);
}

int main()
{
    monstruo_t chori = {"Chorizard", 100, 32.0, 302.0};

    print_monstruo(chori);
    monstruo_t superChori = evolucionar(chori);
    print_monstruo(superChori);

    return 0;
}