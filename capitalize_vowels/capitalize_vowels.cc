/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file capitalize_vowels.cc
  * @author Castellucci Pinchi Pablo alu0101654539@ull.edu.es
  * @date Nov 17 2023
  * @brief El programa incluye una función que toma como parámetro una cadena de caracteres sin espacios y lo modifuque de forma que quedan las consonantes en minúscula y las vocales en mayúscula.
  * @bug There are no known bugs
  */

#include <iostream>
#include <cctype>


std::string capitalizeVowels(const std::string& input) {
    std::string result = input;

    for (char& c : result) {
        if (std::isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                c = std::toupper(c);
            } else {
                c = std::tolower(c);
            }
        }
    }

    return result;
}

int main() {
    std::string input;

    
    std::cout << "Ingrese una cadena de caracteres sin espacios: ";
    std::cin >> input;

    
    if (input.find(' ') != std::string::npos) {
        std::cerr << "Error: La cadena no debe contener espacios." << std::endl;
        return 1;
   }

    
    std::string result = capitalizeVowels(input);
    std::cout << "Resultado: " << result << std::endl;

    return 0;
}

