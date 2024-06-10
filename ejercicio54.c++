#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double numero;

  cout << "Ingrese un número decimal: ";
  cin >> numero;

  if (numero < 0) {
    cout << "Error: La raíz cuadrada de un número negativo no es real." << endl;
    return 1;
  }

  double raiz = sqrt(numero);

  cout << "La raíz cuadrada de " << numero << " es " << raiz << endl;

  return 0;
}
