#include <stdio.h>
#include <stdint.h>

int main()
{
    int8_t i8 = -4;
    uint8_t ui8 = 4;

    int16_t i16 = 123;
    uint16_t ui16 = 123;

    int32_t i32 = -123456;
    uint32_t ui32 = 123456;

    int64_t i64 = 123456;
    uint64_t ui64 = 123456;

    printf(" int(%lu bytes): %d", sizeof(i8), i8);
    printf(" unsigned int(%lu bytes): %d", sizeof(ui8), ui8);
    printf(" int(%lu bytes): %d", sizeof(i16), i16);
    printf(" unsigned int(%lu bytes): %d", sizeof(ui16), ui16);
    printf(" int(%lu bytes): %d", sizeof(i32), i32);
    printf(" unsigned int(%lu bytes): %d", sizeof(ui32), ui32);
    printf(" int(%lu bytes): %ld", sizeof(i64), i64);
    printf(" unsigned int(%lu bytes): %ld", sizeof(ui64), ui64);

    return 0;
}

// %d -> int
// %ld -> long int (int_64 y otros)