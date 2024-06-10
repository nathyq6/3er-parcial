//Equipo 6
#include <iostream>
#include <cmath>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        unsigned long long fact = 1;
        for (int i = 2; i <= n; ++i) {
            fact *= i;
        }
        return fact;
    }
}


bool esPrimo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    double numero;
    std::cout << "Ingrese un número natural con dos decimales: ";
    std::cin >> numero;

    // Inciso a: Calcular la raíz cuadrada
  //nathaly Cuamatzi Cuamatzi
    double raiz_cuadrada = sqrt(numero);
    std::cout << "a) La raíz cuadrada de " << numero << " es: " << raiz_cuadrada << std::endl;

    // Inciso b:Valentin Calcular el factorial del número entero
    int numero_entero = static_cast<int>(numero); // Convertir el número a entero
    unsigned long long fact = factorial(numero_entero);
    std::cout << "b) El factorial de " << numero_entero << " es: " << fact << std::endl;

    // Inciso c:Katherine Verificar si el número es primo
    bool primo = esPrimo(numero_entero);
    if (primo) {
        std::cout << "c) " << numero_entero << " es un número primo." << std::endl;
    } else {
        std::cout << "c) " << numero_entero << " no es un número primo." << std::endl;
    }

    // Ailyn Inciso d: Elevar el número natural a la potencia de los decimales
    double potencia = pow(numero_entero, numero - numero_entero);
    std::cout << "d) " << numero_entero << " elevado a la potencia de los decimales es: " << potencia << std::endl;

    // Inciso e:Danna paola Verificar si el número está entre 50 y 100
    if (numero_entero > 50 && numero_entero < 100) {
        std::cout << "e) " << numero_entero << " es mayor que 50 y menor que 100." << std::endl;
    } else {
        std::cout << "e) " << numero_entero << " no cumple con la condición de ser mayor que 50 y menor que 100." << std::endl;
    }

    return 0;
}
