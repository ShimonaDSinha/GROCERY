/*
# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra

# Source files
SRCS = main.c grocery_billing1.c

# Object files
OBJS = $(SRCS:.c=.o)

# Executable name
TARGET = grocery_bill

# Rule to compile the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to compile object files
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)*/


//updated
CC = gcc
CFLAGS = -Wall -Wextra

all: grocery_billing1

grocery_billing: main.o grocery_billing1.o login.o
	$(CC) $(CFLAGS) -o grocery_billing1 main.o grocery_billing1.o login.o

main.o: main.c grocery_billing1.h login.h
	$(CC) $(CFLAGS) -c main.c

grocery_billing.o: grocery_billing1.c grocery_billing1.h
	$(CC) $(CFLAGS) -c grocery_billing1.c

login.o: login.c login.h
	$(CC) $(CFLAGS) -c login.c

clean:
	rm -f *.o grocery_billing1
