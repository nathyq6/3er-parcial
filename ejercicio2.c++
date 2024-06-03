#include <iostream>
#include <vector> //utilizo vectores
#include <algorithm>

using namespace std;

int main() {

  // Declaración de variables
  vector<int> numeros(5); // Vector para almacenar los 5 números
  int menor, mayor;
  bool hayRepetidos = false;

  // para ingresar los 5 numeros
  cout << "Ingrese 5 números: " << endl;
  for (int i = 0; i < 5; i++) {
    cin >> numeros[i];
  }

  // saber cual es el mayor y el menor 
  menor = mayor = numeros[0];
  for (int i = 1; i < 5; i++) {
    if (numeros[i] < menor) {
      menor = numeros[i];
    } else if (numeros[i] > mayor) {
      mayor = numeros[i];
    }
  }


  sort(numeros.begin(), numeros.end()); // para saber cuales son los repetidos
  for (int i = 1; i < 5; i++) {
    if (numeros[i] == numeros[i - 1]) {
      hayRepetidos = true;
      cout << "Número repetido: " << numeros[i] << endl; //decir si hay repetidos 
    }
  }

  // decir cual es menor y mayor
  cout << "El número menor es: " << menor << endl;
  cout << "El número mayor es: " << mayor << endl;

  return 0;
}

