#include <stdio.h>

int main()
{
    int a = 5;
    int b = 3;
    int c = 2;
    int d = 1;

    // aritmeticos
    printf("a = 5, b = 3, c = 2, d = 1\n");
    printf("a + b * c / d = %d \n", (a + b * c / d)); // -> / entre enteros es entero
    // printf("a modulo b = %d \n", (a % b));            // modulo es entero

    // comparacion
    printf("a == b : %d \n", (a == b));
    printf("a != b : %d \n", (a != b));

    // binarios
    printf("a & b : %x \n", (a & b));
    printf("a | b : %x \n", (a | b));
    printf("~a = %x \n", (~a));
    printf("a << 1 = %x \n", (a << 1));
    printf("a >> 1 = %x \n", (a >> 1));

    // logicos
    printf("a && b : %d \n", (a && b));
    printf("a || b : %d \n", (a || b));

    // asignacion
    printf("a += b -> a = %d \n", (a += b));
    a = 5;
    printf("a -= b -> a = %d \n", (a -= b));
    a = 5;
    printf("a *= b -> a = %d \n", (a *= b));
    a = 5;
    printf("a /= b -> a = %d \n", (a /= b));
    a = 5;
    printf("a \37 = b -> a = %d \n", (a %= b));

    return 0;
}

// a = 5, b = 3, c = 2, d = 1
// a + b * c / d                            = 5 + ((3*2)/1)
// a % b					= 2

// a == b,					= 0 (True)
// a != b					= 1 (False)

// a & b,			101 & 11	= 1 (001)
// a | b			101 | 11	= 7 (111)
// ∼a			101		= fffffffa (111111010)

// a && b,					= 1	???  parece tomar como verdadero cualquier
// a || b					= 1	???  numero que no sea cero

// a << 1			101 <<1 	= a (en hexa, 1010)
// a >> 1			101		= 2 (en hexa, 0010)
// a += b, 			a	= 8
// a -= b,				 a	= 2
// a *= b, 			a	= 15
// a /= b,				a	= 1 (division entera 5/3 = 1.66666)
// a %= b				a	= 2
