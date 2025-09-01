
CC = gcc 
CFLAGS = -Wall -Wextra -pedantic -g
TARGET = Ej19 #nombre del binario

all: $(TARGET)

$(TARGET): Ej19.o
	$(CC) $(CFLAGS) $^ -o $@

Ej19.o: Ej19.c
	$(CC) $(CFLAGS) -c $^ -o Ej19.o

clean:
	rm *.o Ej19

.PHONY: all clean

## gcc -Wall -Wextra -pedantic -c hola.c -o hola.o
## gcc -Wall -Wextra -pedantic hola.o -o hola

#makefile no tiene extension. se puede poner en minuscula el archivo
#  comando: el codigo debe estar en la linea de abajo identado

# ^ en compu labo es altGr+ tecla({)