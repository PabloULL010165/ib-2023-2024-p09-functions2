/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file approximate_root.cc
  * @author Castellucci Pinchi Pablo alu0101654539@ull.edu.es
  * @date Nov 17 2023
  * @brief El programa incluye una función que toma como parámetro un número real mayor que cero "number" y devuelve su raíz cuadrada con un error de ±EPSILON.
  * @bug There are no known bugs
  */

#include <iostream>
#include <cmath>

// Constante para el error epsilon
const double EPSILON = 1e-4;


double calcularRaizCuadrada(double number) {
  
    double root = 1.0;
    double delta = 1.0;

    
    while (std::abs(root * root - number) > EPSILON) {
        
        if (delta > 0) {
            
            while (root * root < number) {
                root += delta;
            }
        } else {
            
            while (root * root > number) {
                root += delta;
            }
        }

        // Multiplique delta por -0.5
        delta *= -0.5;
    }

    
    return root;
}


double obtenerNumero() {
    double number;
    std::cout << "Ingrese un número mayor que cero: ";
    std::cin >> number;
    return number;
}

int main() {
    double number = obtenerNumero();

   
    if (number <= 0) {
        std::cerr << "Error: El número debe ser mayor que cero." << std::endl;
        return 1;
    }

    double resultado = calcularRaizCuadrada(number);

    std::cout << "La raíz cuadrada de " << number << " es aproximadamente: " << resultado << std::endl;

    return 0;
}

