/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file MitadCaracteres.cc
  * @author Castellucci Pinchi Pablo alu0101654539@ull.edu.es
  * @date Nov 17 2023
  * @brief El programa contiene una función que recibe dos caracteres y devuelve el carácter que se encuentra a mitad de la distancia entre ellos.
  * @bug There are no known bugs
  */

#include <iostream>
#include <cctype>

char caracterIntermedio(char c1, char c2) {
    
    if ((isdigit(c1) && isdigit(c2)) || (isupper(c1) && isupper(c2)) || (islower(c1) && islower(c2))) {
        
        int distancia = std::abs(c1 - c2);

        char resultado = c1 < c2 ? c1 + distancia / 2 : c2 + distancia / 2;
        return resultado;
    } else {
      
        return '~';
    }
}

char GetValue() {

	std::cout << "Ingrese el primer caracter: ";
	char Char_1{};
	std::cin >> Char_1;

	return Char_1;
}

char GetValue2() {

	std::cout << "Ingrese el segundo caracter: ";
	char Char_2{};
	std::cin >> Char_2;
	
	return Char_2;
}
int main() {
    char char1 { GetValue() };
    char char2 { GetValue2() };

    char resultado = caracterIntermedio(char1, char2);
    std::cout << "El carácter intermedio es: " << resultado << std::endl;

    return 0;
}

