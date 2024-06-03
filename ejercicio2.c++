#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  // Declaración de variables
  vector<int> numeros(5); // Vector para almacenar los 5 números
  int menor, mayor;
  bool hayRepetidos = false;

  // Ingreso de números
  cout << "Ingrese 5 números: " << endl;
  for (int i = 0; i < 5; i++) {
    cin >> numeros[i];
  }

  // Encontrar el menor y el mayor
  menor = mayor = numeros[0];
  for (int i = 1; i < 5; i++) {
    if (numeros[i] < menor) {
      menor = numeros[i];
    } else if (numeros[i] > mayor) {
      mayor = numeros[i];
    }
  }

  // Detectar números repetidos
  sort(numeros.begin(), numeros.end()); // Ordenar el vector para facilitar la detección de repetidos
  for (int i = 1; i < 5; i++) {
    if (numeros[i] == numeros[i - 1]) {
      hayRepetidos = true;
      cout << "Número repetido: " << numeros[i] << endl;
    }
  }

  // Mostrar resultados
  cout << "El número menor es: " << menor << endl;
  cout << "El número mayor es: " << mayor << endl;

  if (hayRepetidos) {
    cout << "Hay números repetidos." << endl;
  } else {
    cout << "No hay números repetidos." << endl;
  }

  return 0;
}
