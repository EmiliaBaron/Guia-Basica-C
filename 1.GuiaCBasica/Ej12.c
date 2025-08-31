#include <stdio.h>
#include <stdint.h>

#define N 4

int main()
{
    int8_t arr[N] = {1, 2, 3, 4};
    int r = 3;

    for (int i = 0; i < 4; i++)
    {
        arr[(i + 3) % 4] = arr[i];
    }
}