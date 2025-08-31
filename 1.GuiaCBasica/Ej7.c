#include <stdio.h>

int main(){
    int a = 5;
    int b = 3; 
    int c = 2;
    int d = 1;

    //aritmeticos
    printf("a = 5, b = 3, c = 2, d = 1\n");
    printf("a + b * c / d = %f \n", (a + b * c / d));
    printf("a modulo b = %f \n", (a % b));

    //comparacion
    printf("a == b : %d \n", (a == b));
    printf("a != b : %d \n", (a != b));

    //binarios
    printf("a & b : %x \n", (a & b));
    printf("a | b : %x \n", (a | b));
    printf("~a = %x \n", (~a));
    printf("a << 1 = %x \n", (a << 1));
    printf("a >> 1 = %x \n", (a >> 1));

    //logicos
    printf("a && b : %d \n", (a && b));
    printf("a || b : %d \n", (a || b));

    //asignacion
    printf("a += b -> a = %d \n", (a += b));
    int a = 5;
    printf("a -= b -> a = %d \n", (a -= b));
    int a = 5;
    printf("a *= b -> a = %d \n", (a *= b));
    int a = 5;
    printf("a /= b -> a = %d \n", (a /= b));
    int a = 5;
    printf("a %= b -> a = %d \n", (a %= b));



}