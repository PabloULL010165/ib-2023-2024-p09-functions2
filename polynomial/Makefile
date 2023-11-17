COMP = g++
FLAGS = -std=c++11 -Wall

all: polynomial

polynomial: polynomial.o
	$(COMP) $(FLAGS) -o polynomial polynomial.o

polynomial.o: polynomial.cc
	$(COMP) $(FLAGS) -c polynomial.cc

run: all
	./polynomial

clean:
	rm -f polynomial polynomial.o

