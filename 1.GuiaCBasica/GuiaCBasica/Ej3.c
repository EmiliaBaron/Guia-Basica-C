#include <stdio.h>

int main()
{
        char c = 100;
        short s = 2988;
        int i = 1234567890;
        long l = 1234567890;

        float f = 12345.67890;
        double d = 12345.67890;

        printf("char(%lu): %d \n", sizeof(c), c);
        printf("short(%lu): %d \n", sizeof(s), s);
        printf("int(%lu): %d \n", sizeof(i), i);
        printf("long(%lu): %ld \n", sizeof(l), l);
        printf("float(%lu): %lf \n", sizeof(f), f);
        printf("double(%lu): %lf \n", sizeof(d), d);

        return 0;
}