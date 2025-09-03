#include <stdio.h>

void min_a_mayus(char *str)
{
    while (*str != '\0')
    {
        if (('a' <= *str) && (*str <= 'z'))
        {
            *str -= 32;
        }

        str++;
    }
}

int main()
{
    // printf("a :%d\n", 'a');
    // printf("A :%d\n", 'A');
    // printf("a-A: %d\n", ('A' - 'a'));

    // printf("e: %d\n", 'e');
    // printf("E: %d\n", 'E');
    // printf("e+32: %d\n", ('e' + 32));

    // printf("z: %d\n", 'z');
    // printf("Z: %d\n", 'Z');

    char string[] = "JSDKJFefeeDFEF";
    // no puede ser *string porque no se puede modificar

    min_a_mayus(string);
    printf("%s\n", string);
    return 0;
}