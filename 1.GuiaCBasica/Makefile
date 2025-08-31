
CC = gcc 
CFLAGS = -Wall -Wextra -pedantic
TARGET = hola #nombre del binario

all: $(TARGET)

$(TARGET): hola.o
	$(CC) $(CFLAGS) $^ -o $@

hola.o: hola.c
	$(CC) $(CFLAGS) -c $^ -o hola.o

clean:
	rm *.o hola

.PHONY: all clean

## gcc -Wall -Wextra -pedantic -c hola.c -o hola.o
## gcc -Wall -Wextra -pedantic hola.o -o hola

#makefile no tiene extension. se puede poner en minuscula el archivo
#  comando: el codigo debe estar en la linea de abajo identado

# ^ en compu labo es altGr+ tecla({)