CC = gcc 
CFLAGS = -Wall -Wextra -pedantic -MMD -MP -g
TARGET = Ej21 #nombre del binario

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
