/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file hypotenuse.cc
  * @author Castellucci Pinchi Pablo alu0101654539@ull.edu.es
  * @date Nov 17 2023
  * @brief El programa incluye una función que toma como parámetros los catetos de un triángulo rectángulo, como valores reales, y devuelve su hipotenusa.
  * @bug There are no known bugs
  */
#include <iostream>
#include <cmath>
#include <limits>

const double EPSILON = 1e-4;


double aproximarRaizCuadrada(double number) {
    double root = 1.0;
    double delta = 1.0;

    while (std::fabs(root * root - number) > EPSILON) {
        if (root * root < number) {
            while (root * root < number) {
                root += delta;
            }
        } else {
            while (root * root > number) {
                root += delta;
            }
        }

        delta *= -0.5;
    }

    return root;
}

double calcularHipotenusa(double cateto1, double cateto2) {
    if (cateto1 <= 0 || cateto2 <= 0) {
        std::cerr << "Error: Los catetos deben ser mayores que cero." << std::endl;
        return 0.0;
    }

    double hipotenusa = std::sqrt(cateto1 * cateto1 + cateto2 * cateto2);
    return hipotenusa;
}


double obtenerValorRealDesdeEntrada(const std::string& mensaje) {
    double valor;
    std::cout << mensaje;
    while (!(std::cin >> valor)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cerr << "Error: Introduce un valor numérico válido." << std::endl;
        std::cout << mensaje;
    }
    return valor;
}

int main() {
    
    double cateto1 = obtenerValorRealDesdeEntrada("Introduce el valor del primer cateto: ");
    double cateto2 = obtenerValorRealDesdeEntrada("Introduce el valor del segundo cateto: ");

    
    double hipotenusa = calcularHipotenusa(cateto1, cateto2);

   
    if (hipotenusa > 0) {
        std::cout << "La hipotenusa del triángulo rectángulo es: " << hipotenusa << std::endl;
    }

    return 0;
}

