#include <iostream>

using namespace std;

int main() {
  strings arreglo1[2] = {"Fernando", "Oscar"};
  int arreglo2[3] = {74, 56, 10};

  cout << "Arreglo 1" << endl;
  for (int i = 0; i < 2; i++) {
    cout << "El dato en la posición " << i + 1 << " es " << arreglo1[i] << endl;
  }

  cout << "Arreglo 2" << endl;
  for (int i = 0; i < 3; i++) {
    cout << "El dato en la posición " << i + 1 << " es" << arreglo2[i] << endl;
  }

  return 0;
}