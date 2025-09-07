CC = gcc 
CFLAGS = -Wall -Wextra -pedantic -MMD -MP -g
TARGET = listasEn #nombre del binario

all: $(TARGET)

SRCS = main.c type.c list.c
OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

-include $(OBJS:.o=.d)

clean:
	rm *.o *.d $(TARGET)

.PHONY: all clean

## gcc -Wall -Wextra -pedantic -c hola.c -o hola.o
## gcc -Wall -Wextra -pedantic hola.o -o hola

#makefile no tiene extension. se puede poner en minuscula el archivo
#  comando: el codigo debe estar en la linea de abajo identado

# ^ en compu labo es altGr+ tecla({)