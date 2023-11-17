COMP = g++
FLAGS = -std=c++11

hypotenuse: hypotenuse.cc
	$(COMP) $(FLAGS) hypotenuse.cc -o hypotenuse

.PHONY: run clean

run: hypotenuse
	./hypotenuse

clean:
	rm -f hypotenuse

