COMP = g++
FLAGS = -std=c++11 -Wall

all: approximate_root

approximate_root: approximate_root.o
	$(COMP) $(FLAGS) -o approximate_root approximate_root.o

approximate_root.o: approximate_root.cc
	$(COMP) $(FLAGS) -c approximate_root.cc

run: all
	./approximate_root

clean:
	rm -f approximate_root approximate_root.o

