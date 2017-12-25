TARGET=main.bin
CC=g++
CFLAGS=-Wall -O2
LDFLAGS=

OBJ=main.o functions.o debugger.o

all: $(OBJ)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(TARGET) $(OBJ)



%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm ./*.o
	rm ./*.bin
