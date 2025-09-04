// Ejercicio 3
/*
La diferencia entre x y p es que x es un valor y p un puntero.
La diferencia entre x y &x es que &x es la direccion al valor de x.
La diferencia entre p y *p es que p es un puntero y *p es un puntero a p.

Los valores que se van a imprimir por terminal son:
x: valor del int
p y &x: direccion de memoria de x
*p : direccion de memoria de p

*/
#include <stdio.h>

int main()
{
    int x = 42;
    int *p = &x;

    printf("Direccion de x: %p Valor: %d\n", (void *)&x, x);
    printf("Direccion de p: %p Valor: %p\n", (void *)&p, (void *)p);
    printf("Valor de lo que apunta p: %d\n", *p);
    printf("tamaño de direccion: %lu\n", sizeof(p));
}

// output:
//  Direccion de x: 0x7ffe28f36f2c Valor: 42
//  Direccion de p: 0x7ffe28f36f30 Valor: 0x7ffe28f36f2c
//  Valor de lo que apunta p: 42

// p es un puntero que tiene una direccion y guarda otra.
// &p la direccion del puntero p
//*p es el valor al que apunta p