#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> tabla(4, std::vector<int>(3));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "Introduce el valor de la fila " << i + 1 << " y columna " << j + 1 << ": ";
            std::cin >> tabla[i][j];
        }
    }

    int suma2 = 0;

    for (int j = 0; j < 3; j++) {
        int suma = 0;

        for (int i = 0; i < 4; i++) {
            suma += tabla[i][j];
        }

        if (suma > suma2) {
            suma2 = suma;
        }
    }

    std::cout << "La mayor suma de las columnas es " << suma2 << std::endl;

    return 0;
}