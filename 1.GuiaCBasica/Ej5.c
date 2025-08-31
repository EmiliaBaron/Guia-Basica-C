#include <stdio.h>

int main() {
    float f = 0.1;
    double d = 0.1;

    printf("numero float: %lf\n",f);
    printf("numero double: %lf\n",d);

    int fAInt = (int) f;
    int dAInt = (int) d;
    
    printf("float a int: %d\n",fAInt);
    printf("double a int: %d\n",dAInt);
}

//se truncan los decimales y pasa de 0.1 a 0