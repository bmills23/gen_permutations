CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = index

all: $(TARGET)

$(TARGET): index.o
	$(CC) $(CFLAGS) -o $(TARGET) index.o

index.o: index.c
	$(CC) $(CFLAGS) -c index.c

clean:
	rm -f $(TARGET) index.o

.PHONY: all clean