#include <iostream>
using namespace std;

int main() {

  // Declaración de variables
  int num, i;
  int numeros[5]; // Matriz para almacenar 5 números
  int suma = 0; // Variable para almacenar la suma de los números

 
  cout << "Ingrese 5 números " << endl;
  for (i = 0; i < 5; i++) {
    cout << "Ingrese el número " << i + 1 <<endl;
    cin >> numeros[i];
  }

  
  for (i = 0; i < 5; i++) {
    if (numeros[i] % 2 == 0) {
      cout << "El número " << numeros[i] << " es par" << endl;
    } else {
      cout << "El número " << numeros[i] << " es impar" << endl;
    }

    // Calcular la suma de los números
    suma += numeros[i];
  }

  // Mostrar la suma de los números
  cout << "La suma de los números es " << suma << endl;

  return 0;
}
