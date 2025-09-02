#include <stdio.h>

#define FELIZ 0
#define TRISTE 1

int estado = TRISTE; // static duration. File scope

void alcoholizar();
void print_estado();

int main()
{
    print_estado(); // estoy triste
    alcoholizar();  // cantidad = 1 estado = Feliz
    print_estado(); // estoy feliz
    alcoholizar();
    alcoholizar();
    alcoholizar();  // cantidad = 1 estado = Feliz
    print_estado(); // que imprime? estoy feliz
}

void alcoholizar()
{
    int cantidad = 0; // static duration. block scope
    cantidad++;

    if (cantidad < 3)
    {
        estado = FELIZ;
    }
    else
    {
        estado = TRISTE;
    }
}

void print_estado()
{
    printf("Estoy %s\n", estado == FELIZ ? "feliz" : "triste");
}

// con static
//  print_estado(); // estoy triste
//  alcoholizar();  // cantidad = 1 estado = Feliz
//  print_estado(); // estoy feliz
//  alcoholizar();
//  alcoholizar();
//  alcoholizar();  // cantidad = 4 estado = Triste
//  print_estado(); // que imprime? estoy triste

// sin static
// print_estado(); // estoy triste
// alcoholizar();  // cantidad = 1 estado = Feliz
// print_estado(); // estoy feliz
// alcoholizar();
// alcoholizar();
// alcoholizar();  // cantidad = 1 estado = Feliz
// print_estado(); // que imprime? estoy feliz
// la variable cantidad no incrementa entre alcoholizar() y alcoholizar().