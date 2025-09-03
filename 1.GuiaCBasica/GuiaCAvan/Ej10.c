#include <stdio.h>
#include <string.h>

int main()
{
    char *hola = "Hola !";

    char str_copia[7]; // se debe guardar cantidad de caracteres + uno (seguramente por el caracter '\0')
    // se debe reservar suficiente espacio en el nuevo string antes de
    // pegar el contenido del otro. Se puede asignar una cantidad de
    // memoria a un string literal(?)

    strcpy(str_copia, hola);

    printf("string original: %s\n", hola);
    printf("string copia: %s\n", str_copia);
    printf("longitud copia: %lu", strlen(str_copia)); // strlen devuelve long unsigned int

    char despido[13] = "Chau.";

    printf("string original: %s\n", despido);

    strcat(despido, hola);

    printf("string concatenado: %s\n", despido);
    printf("longitud concatenado: %lu\n", strlen(despido));

    printf("str == copia?: %d\n", strcmp(hola, str_copia));
    printf("hola == despido + hola?: %d\n", strcmp(hola, despido));

    return 0;
}

// strcpy()
//               These functions copy the string pointed to by src, into a string
//               at  the buffer pointed to by dst.  The programmer is responsible
//               for allocating a  destination  buffer  large  enough,  that  is,
//               strlen(src)  + 1.  For the difference between the two functions,
//               see RETURN VALUE.

//        strcat()
//               This function catenates the string pointed to by src, after  the
//               string  pointed  to  by  dst  (overwriting  its terminating null
//               byte).  The programmer is responsible for allocating a  destina‐
//               tion  buffer  large enough, that is, strlen(dst) + strlen(src) +
//               1.

//  The  strlen()  function  calculates  the  length  of  the string pointed to by s, excluding the terminating null byte
//        ('\0').

//    The  strcmp()  function compares the two strings s1 and s2.  The locale is not taken into account (for a locale-aware
//    comparison, see strcoll(3)).  The comparison is done using unsigned characters.

//    strcmp() returns an integer indicating the result of the comparison, as follows:

//    •  0, if the s1 and s2 are equal;

//    •  a negative value if s1 is less  (sus letras estan antes en el alfabeto)than s2;

//    •  a positive value if s1 is greater (sus letras estan despues en el alfabeto) than s2.

//         char *
//            strcpy(char *restrict dst, const char *restrict src)
//            {
//                stpcpy(dst, src);
//                return dst;
//            }

//            char *
//            strcat(char *restrict dst, const char *restrict src)
//            {
//                stpcpy(dst + strlen(dst), src);
//                return dst;
//            }

// RETURN VALUE
//        stpcpy()
//               This function returns a pointer to the terminating null byte  of
//               the copied string.

//        strcpy()
//        strcat()
//               These functions return dst.