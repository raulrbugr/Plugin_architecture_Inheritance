
SRC = src
INC = include
OBJ = obj
BIN = bin
LIB = lib

CXX = g++
CPPFLAGS = -ansi -pedantic -Wall -Wextra -Wwrite-strings -Werror -g -c -std=c++0x -I$(INC)

#all: prueba

main : main.o plugin.o filter1.o filter2.o
	g++ -o main main.o plugin.o filter1.o filter2.o

# ************ Creacion de Objetos ************

main.o: main.cpp
	g++ -c main.cpp -o main.o

plugin.o: plugin.cpp plugin.h
	g++ -c plugin.cpp -o plugin.o

filter1.o: filter1.cpp filter1.h
	g++ -c filter1.cpp -o filter1.o

filter2.o: filter2.cpp filter2.h
	g++ -c filter2.cpp -o filter2.o


clean:
	echo "Limpiando..." 
	rm *.o 
	

	



