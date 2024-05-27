#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Digite el tamaño del arreglo ";
  cin >> n;

  int numeros[n];

  for (int i = 0; i < n; i++) {
    cout << "Digite un número para la posición " << i+1 <<endl;
    cin >> numeros[i];
  }

  for (int i = 0; i < n; i++) {
    cout << "El dato en la posición " << i+1<< " es " << numeros[i] << endl;
  }

  return 0;
}