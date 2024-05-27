#include <iostream>

using namespace std;

int main() {
  int acum1 = 0;
  int acum2 = 0;

  cout << "Digite el tamaño del vector 1 ";
  int t1;
  cin >> t1;

  int vector1[t1];

  for (int i = 0; i < t1; i++) {
    cout << "Digite un número para el vector 1 ";
    int num;
    cin >> num;
    vector1[i] = num;
    acum1 += vector1[i];
  }

  cout << "Digite el tamaño del vector 2 ";
  int t2;
  cin >> t2;

  int vector2[t2];

  for (int i = 0; i < t2; i++) {
    cout << "Digite un número para el vector 2 ";
    int num;
    cin >> num;
    vector2[i] = num;
    acum2 += vector2[i];
  }

  int vector3[1];

  vector3[0] = acum1 + acum2;

  cout << "La suma total de los elementos de los dos vectores es " << vector3[0] << endl;

  return 0;
}
