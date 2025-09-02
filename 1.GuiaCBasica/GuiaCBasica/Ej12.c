#include <stdio.h>
#include <stdint.h>

#define N 4

int abs(int n)
{
    if (n >= 0)
    {
        return n;
    }
    else
    {
        return -n;
    }
}

int mod(int d, int n) // modulo de cosas que no son mayores a N
{
    int8_t congr;
    if (d >= 0)
    {
        congr = d;
    }
    else
    {
        congr = d + n;
    }
    return congr;
}

int main()
{
    int8_t arr[N] = {1, 2, 3, 4};
    int8_t r = 3;

    // for (int i = 0; i < N; i++)
    // {
    //     e = arr[mod(i - r, 4)];
    //     arr[mod(i - r, 4)] = arr[0];
    //     arr[0] = e;
    // }
    int8_t nArr[N];

    for (int i = 0; i < N; i++)
    {
        nArr[mod(i - r, 4)] = arr[i];
    }

    printf("[%d,%d,%d,%d]\n", nArr[0], nArr[1], nArr[2], nArr[3]);

    return 0;
}

// [1,2,3,4]
// r = 3

// [4,1,2,3]