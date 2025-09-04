#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NAME_LEN 50

typedef struct persona_s
{
    char nombre[NAME_LEN + 1];
    int edad;
    struct persona_s *hijo;
} persona_t;

persona_t *crear_persona(char *nombre, int edad)
{

    persona_t *persona = malloc(sizeof(nombre) + sizeof(edad) + 8);
    // 8 es el tamaño de una direccion de memoria (está bien hacerlo así? )
    if (persona == NULL)
    {
        return NULL;
    }
    else
    {
        char nombre_per[sizeof(*nombre)];
        strcpy(nombre_per, nombre);
        // de no copiarlo creo que se puede modificar el nombre de la persona desde afuera

        persona_t *persona = {nombre_per, edad};
        // porque le tengo que indicar el tipo persona_t dos veces?

        return persona;
    }
}

int main()
{
    persona_t *berni = crear_persona("Bernardo", 14);
    printf("nombre: %s\n", berni->nombre);
    printf("edad: %d\n", berni->edad);
    printf("direcc hijos: %p\n", (void *)berni->hijo);

    free(berni);
    return 0;
}
