#include <iostream>
#include <vector> // Se incluye la biblioteca vector para usar vectores

using namespace std;

int main() {

  // cdeclaro la matriz
  vector<int> numeros(5);

  // para mostrar los 5 numeros
  cout << "Ingrese 5 números " << endl;
  for (int i = 0; i < 5; i++) {
    cin >> numeros[i];
  }

  // declaro el mayor el menor y la suma
  int menor = numeros[0];
  int mayor = numeros[0];
  int suma = 0;

  // Se crea un vector para compararlos
  for (int i = 1; i < 5; i++) {
    if (numeros[i] < menor) {
      menor = numeros[i];
    } else if (numeros[i] > mayor) {
      mayor = numeros[i];
    }
    suma += numeros[i];
  }

  // Se muestran los resultados
  cout << "El número menor es " << menor << endl;
  cout << "El número mayor es " << mayor << endl;
  cout << "La suma de los números es" << suma << endl;

  return 0;
}
