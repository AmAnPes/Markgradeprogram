CC = gcc
CFLAGS = -Wall -Wextra

# Source files
SRCS = main.c functions.c

# Object files
OBJS = $(SRCS:.c=.o)

# Executable name
TARGET = program.exe

# Build rule
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile source files
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Clean rule
clean:
	del $(OBJS) $(TARGET)
