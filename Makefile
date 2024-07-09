CC=gcc

CFLAGS=-Wall -g

TARGET=first

all: $(TARGET)

$(TARGET): first.c
	$(CC) $(CFLAGS) first.c -o ${TARGET}

clean:
	rm -f $(TARGET)