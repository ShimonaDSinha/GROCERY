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


//updated file part-2
/*CC = gcc
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
	rm -f *.o grocery_billing1*/

//Updated file part-3
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c11

# Object files
OBJECTS = main.o grocery_billing1.o login.o

# Executable target
TARGET = program

# Default target: build the executable
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

# Compile main.c to main.o
main.o: main.c grocery_billing1.h login.h
	$(CC) $(CFLAGS) -c main.c

# Compile grocery_billing1.c to grocery_billing1.o
grocery_billing1.o: grocery_billing1.c grocery_billing1.h
	$(CC) $(CFLAGS) -c grocery_billing1.c

# Compile login.c to login.o
login.o: login.c login.h
	$(CC) $(CFLAGS) -c login.c

# Clean up object files and executable
clean:
	rm -f $(OBJECTS) $(TARGET)

