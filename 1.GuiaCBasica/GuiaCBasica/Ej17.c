#include <stdio.h>

#define FELIZ 0
#define TRISTE 1

int estado = TRISTE; // static duration. File scope

void ser_feliz();
void print_estado();

int main()
{
    print_estado();
    ser_feliz();
    print_estado(); // qué imprime?
}

// imprime "estoy triste" y luego " estoy feliz"

void ser_feliz()
{
    estado = FELIZ; // cambia variable global
}
void print_estado()
{
    printf("Estoy %s\n", estado == FELIZ ? "feliz" : "triste");
}
