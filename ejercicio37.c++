#include <iostream>

using namespace std;

int main() {
  int acum = 0;
  cout << "Digite el tamaño del vector (arreglo) ";
  int t;
  cin >> t;

  int vector[t];

  for (int i = 0; i < t; i++) {
    cout << "Digite un número ";
    int num;
    cin >> num;
    vector[i] = num;
    acum += vector[i];
  }

  for (int i = 0; i < t; i++) {
    cout << "El dato en la posición " << i + 1 << " es " << vector[i] << endl;
  }

  cout << "La suma de los elementos del vector es " << acum << endl;

  return 0;
}