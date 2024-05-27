#include <iostream>
using namespace std;

int main() {
  int filas, columnas;

  cout << "Digite el número de filas";
  cin >> filas;

  cout << "Digite el número de columnas";
  cin >> columnas;

  int matriz[filas][columnas];

 
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      cout << "Digite dato para la fila " << i + 1 << " columna " << j + 1 << ": ";
      cin >> matriz[i][j];
    }
  }

  
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      cout << "Matriz[" << i + 1 << j + 1 << matriz[i][j] << endl;
    }
  }

  return 0;
}
