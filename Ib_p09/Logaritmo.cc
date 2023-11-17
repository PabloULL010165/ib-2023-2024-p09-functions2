/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file Logaritmo.cc
  * @author Castellucci Pinchi Pablo alu0101654539@ull.edu.es
  * @date Nov 17 2023
  * @brief El programa contiene una función que recibe dos números enteros mayores que 0 y devuelve el valor aproximado de su logaritmo.
  * @bug There are no known bugs
  */
// programa.cpp

#include <iostream>


int logaritmo(int argumento, int base) {
    if (argumento <= 0 || base <= 0) {
        std::cerr << "Error: Los números deben ser mayores que 0." << std::endl;
        return -1; 
    }

    int contador = 0;
    while (argumento >= base) {
        argumento /= base;
        contador++;
    }

    return contador;
}

int GetValueArg() {

	std::cout << "Ingrese el argumento, debe ser mayor que 0: ";
	int Arg{};
	std::cin >> Arg;

	return Arg;
}

int GetValueBase() {
	std::cout << "Ingrese la base, debe ser mayor que 0: ";
	int BASE_{};
	std::cin >> BASE_;

	return BASE_;
}

int main() {

    int argumento { GetValueArg() };
    int base {GetValueBase() };

    int resultado = logaritmo(argumento, base);
    if (resultado >= 0) {
        std::cout << "El logaritmo (redondeado hacia abajo) es: " << resultado << std::endl;
    }

    return 0;
}

