#Makefile de programa practica
#Compilador 
G = gcc
CFLAGS = -Wall -Wextra -std=c99

# Archivos fuente y binarios
SRC1 = encruta1.c
OBJ1 = encruta1.o

SRC2 = laberinto1.c
OBJ2 = laberinto1.o
BIN2 = laberinto1

# Dependencias
DEPS1 = encruta1.h
DEPS2 = laberinto.h

total: $(OBJ2) laberinto2.o encruta1.o
	$(G) $(CFLAGS) -o $(BIN2) $(OBJ2) encruta1.o
	$(G) $(CFLAGS) -o laberinto2 laberinto2.o encruta1.o
#para laberinto1

$(BIN2): laberinto1.o encruta1.o encruta1.h
	$(G) $(CFLAGS) -o $(BIN2) $(OBJ2) $(OBJ1)

#laberinto1.o
$(OBJ2): $(SRC2) $(DEPS1) $(DEPS2)
	$(G) $(CFLAGS) -g -c  -o $(OBJ2) $(SRC2) 

#encruta1.o
$(OBJ1): $(SRC1) $(DEPS1) $(DEPS2)
	$(G) $(CFLAGS) -g -c  -o $(OBJ1) $(SRC1)

#para laberinto2
laberinto2: laberinto2.o encruta1.o encruta1.h
	$(G) $(CFLAGS) -o laberinto2 laberinto2.o encruta1.o

#laberinto2.o
laberinto2.o: laberinto2.c encruta1.h laberinto.h
	$(G) $(GFFLAGS) -g -c -o laberinto2.o laberinto2.c




borra: 
	rm *.o laberinto1 laberinto2
