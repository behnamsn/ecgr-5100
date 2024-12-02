# Compiler and flags
CC = gcc
CFLAGS = -g 

# Define Target
TARGET = x2b

# Default Target
all: $(TARGET)

# Build the target
$(TARGET): x.o
	$(CC) $(CFLAGS) -o $(TARGET) x.o 

# Build x.o
x.o: x.c
	$(CC) $(CFLAGS) -c x.c

# Clean Target
clean:
	rm -f $(TARGET) *.o
