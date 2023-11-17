/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file polynomial.cc
  * @author Castellucci Pinchi Pablo alu0101654539@ull.edu.es
  * @date Nov 17 2023
  * @brief El programa incluye una función C++ que recibe como parámetros un vector de coeficientes reales coefficients y un valor real value y calcula el valor del polinomio correspondiente en el valor dado.
  * @bug There are no known bugs
  */

#include <iostream>
#include <vector>

// Función para calcular el valor del polinomio en un punto dado
double calcularValorPolinomio(const std::vector<double>& coefficients, double value) {
    double result = 0.0;

    for (const double& coef : coefficients) {
        result = result * value + coef;
    }

    return result;
}

// Función para obtener los coeficientes del usuario
std::vector<double> obtenerCoeficientes() {
    std::vector<double> coefficients;
    size_t degree;

    std::cout << "Ingrese el grado del polinomio: ";
    std::cin >> degree;

    coefficients.resize(degree + 1);

    for (size_t i = 0; i <= degree; ++i) {
        std::cout << "Ingrese el coeficiente para x^" << degree - i << ": ";
        std::cin >> coefficients[i];
    }

    return coefficients;
}

int main() {
    std::vector<double> coefficients = obtenerCoeficientes();
    double value;

    std::cout << "Ingrese el valor para evaluar el polinomio: ";
    std::cin >> value;

    if (std::cin.fail()) {
        std::cerr << "Error: El valor introducido no es válido." << std::endl;
        return 1;
    }

    double resultado = calcularValorPolinomio(coefficients, value);

    std::cout << "El resultado del polinomio en " << value << " es: " << resultado << std::endl;

    return 0;
}

