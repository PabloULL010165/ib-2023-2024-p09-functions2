/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file scalar_product.cc
  * @author Castellucci Pinchi Pablo alu0101654539@ull.edu.es
  * @date Nov 17 2023
  * @brief El programa utiliza una función que toma como parámetros dos vectores de números reales y devuelve su producto escalar, calculado como el sumatorio del producto de sus elementos en igual posición.
  * @bug There are no known bugs
  */

#include <iostream>
#include <vector>

// Función para calcular el producto escalar de dos vectores
double calcularProductoEscalar(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    // Verificar que los vectores tengan la misma longitud
    if (vector1.size() != vector2.size()) {
        std::cerr << "Error: Los vectores deben tener la misma longitud." << std::endl;
        return 0.0;
    }

    
    double productoEscalar = 0.0;
    for (size_t i = 0; i < vector1.size(); ++i) {
        productoEscalar += vector1[i] * vector2[i];
    }

    return productoEscalar;
}

size_t Get_longitud() {
    std::cout << "Ingrese la longitud de los vectores: ";
    size_t longitud;
    std::cin >> longitud;
    return longitud;
}

std::vector<double> Get_V1(size_t longitud) {
    std::vector<double> vector1(longitud);
    std::cout << "Ingrese los elementos del primer vector:" << std::endl;
    for (size_t i = 0; i < longitud; ++i) {
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> vector1[i];
    }
    return vector1;
}

std::vector<double> Get_V2(size_t longitud) {
    std::vector<double> vector2(longitud);
    std::cout << "Ingrese los elementos del segundo vector:" << std::endl;
    for (size_t i = 0; i < longitud; ++i) {
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> vector2[i];
    }
    return vector2;
}

int main() {
    
    size_t longitud = Get_longitud();

    
    std::vector<double> Vec1 = Get_V1(longitud);

    
    std::vector<double> Vec2 = Get_V2(longitud);

    
    double resultado = calcularProductoEscalar(Vec1, Vec2);
    std::cout << "El producto escalar de los dos vectores es: " << resultado << std::endl;

    return 0;
}

