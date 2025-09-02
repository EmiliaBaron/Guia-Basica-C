#include <stdio.h>

typedef struct
{
    char *nombre;
    int vida;
    double ataque;
    double defensa;

} monstruo_t;

monstruo_t array_monstruos[5] = {
    [0] = {"Chorizard", 100, 32.0, 302.0},
    [1] = {"muppet", 55, 32.0, 3234.42},
    [2] = {"larry", 56, 423.43, 343.45},
    // ... el resto se inicializa en 0
};

void print_monstruo(monstruo_t monstri)
{
    printf("nombre: %s\n", monstri.nombre);
    printf("vida: %d\n", monstri.vida);
    printf("defensa y ataque: %f, %f\n", monstri.ataque, monstri.defensa);
}

int main()
{
    int cant_mons = sizeof(array_monstruos);
    int tam_mons = sizeof(array_monstruos[0]);

    for (int i = 0; i < (cant_mons / tam_mons); i++)
    {
        monstruo_t monstri = array_monstruos[i];

        print_monstruo(monstri);
    }

    return 0;
}