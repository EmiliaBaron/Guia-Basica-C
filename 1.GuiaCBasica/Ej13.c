#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define N 6

enum Dado
{
    CARA1,
    CARA2,
    CARA3,
    CARA4,
    CARA5,
    CARA6
};

int main()
{
    uint32_t arr[N] = {0};

    for (int i = 0; i < 60000000; i++)
    {
        uint32_t n = rand();

        enum Dado c = (n % 6);

        switch (c)
        {
        case CARA1:
            arr[0] += 1;
            break;
        case CARA2:
            arr[1] += 1;
            break;
        case CARA3:
            arr[2] += 1;
            break;
        case CARA4:
            arr[3] += 1;
            break;
        case CARA5:
            arr[4] += 1;
            break;
        case CARA6:
            arr[5] += 1;
            break;
        }

        return 0;
    }

    printf("1:%d, 2:%d, 3:%d, 4:%d, 5:%d, 6:%d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
}