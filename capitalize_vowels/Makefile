COMP = g++
FLAGS = -std=c++11 -Wall

all: capitalize_vowels

capitalize_vowels: capitalize_vowels.o
	$(COMP) $(FLAGS) -o capitalize_vowels capitalize_vowels.o

capitalize_vowels.o: capitalize_vowels.cc
	$(COMP) $(FLAGS) -c capitalize_vowels.cc

run: all
	./capitalize_vowels

clean:
	rm -f capitalize_vowels capitalize_vowels.o

