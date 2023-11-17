# Makefile para compilar scalar_product.cc

COMP = g++
FLAGS = -std=c++11 -Wall

all: scalar_product

scalar_product: scalar_product.o
	$(COMP) $(FLAGS) -o scalar_product scalar_product.o

scalar_product.o: scalar_product.cc
	$(COMP) $(FLAGS) -c scalar_product.cc

run: all
	./scalar_product

clean:
	rm -f scalar_product scalar_product.o

