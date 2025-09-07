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

    persona_t *persona = malloc(sizeof(persona_t));
    // 8 es el tamaño de una direccion de memoria
    if (persona == NULL)
    {
        return NULL;
    }
    else
    {
        // char nombre_cop[NAME_LEN + 1];
        // strcpy(nombre_cop, nombre);
        // de no copiarlo creo que se puede modificar el nombre de la persona desde afuera

        persona->edad = edad;
        strcpy(persona->nombre, nombre);

        return persona;
    }
}

void eliminarPersona(persona_t *persona)
{

    free(persona);
}

int main()
{
    persona_t *berni = crear_persona("Bernardoooooooooooooooooooooooooooooooooooooooooooo", 14);
    // cuando copio una palabra de mas de 50 carac no indica segmentation fault, si no
    // que cambia la edad de la persona a datos basura ¿por que pasa esto? ¿No
    // deberia el char nombre[51] restringir el tamaño del dato copiado?

    printf("nombre: %s\n", berni->nombre);
    printf("edad: %d\n", berni->edad);
    printf("direcc hijos: %p\n", (void *)berni->hijo);

    eliminarPersona(berni);

    printf("nombre: %s\n", berni->nombre);
    printf("edad: %d\n", berni->edad); //
    printf("direcc hijos: %p\n", (void *)berni->hijo);

    return 0;
}
