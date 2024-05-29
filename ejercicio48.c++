#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros;
    int numero;

    do {
        std::cout << "Introduce un numero (0 para terminar)";
        std::cin >> numero;

        if (numero!= 0) {
            numeros.push_back(numero);
        }
    } while (numero!= 0 && numeros.size() < 20);

    int suma = 0;

    for (int i = numeros.size() - 1; i >= 0; i--) {
        suma += numeros[i];
        std::cout << "Numero" << numeros[i] << " va en Suma " << suma << std::endl;
    }

    std::cout << "La suma de los numeros es " << suma << std::endl;

    return 0;
}



