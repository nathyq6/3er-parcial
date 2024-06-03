#include <iostream>

using namespace std;

int main() {

  int numeroIngresado;

  cout << "Ingrese un número: ";
  cin >> numeroIngresado;

  if (numeroIngresado == 123) {
    cout << "Acceso permitido." << endl;
  } else {
    cout << "Acceso denegado." << endl;
  }

  return 0;
}
