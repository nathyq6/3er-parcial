#include <iostream>

using namespace std;

int main() {
  int n;

  cout << "Digite el tamaño del arreglo ";
  cin >> n;

  int num[n];

  for (int i = 0; i < n; i++) {
    cout << "Digite un numero para la posicion " << i + 1 <<endl;
    cin >> num[i];
  }

  for (int i = 0; i < n; i++) {
    cout << "el dato de la posicion"<<i+1<<"es"<<num[1]<<endl;
  }

  return 0;
}
