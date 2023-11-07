# -*- Makefile -*-

COMP = gcc
CFLAGS = -c -g -Wall
OPT = O0
BINARY = 3d_vector

$(BINARY): main.o 3d_vector_lib.o
	gcc main.o 3d_vector.o -o $(BINARY)

main.o: main.c
	$(COMP) $(CFLAGS) OPT main.c

3d_vector_lib: 3d_vector_lib.c 3d_vector_lib.h
	$(COMP) $(CFLAGS) OPT 3d_vector_lib.c
	