CC = gcc 
CFLAGS = -Wall -Wextra -pedantic -g
TARGET = Sni60 #nombre del binario

all: $(TARGET)

SRCS = Sni60.c
OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean
