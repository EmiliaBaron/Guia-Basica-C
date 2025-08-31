#include <stdio.h>

int main()
{
    char s[] = "Hola!"; // s es el nombre del array
    char *u = "string"; // u es un puntero a un char
    printf("s = %s\n", s);
    printf("u = %s\n", u);

    s[0] = 'h'; // s = "hola!"
    printf("s = %s\n", s);
    u[0] = 'S'; // ERROR
    printf("u = %s\n", u);
    return 0;
}