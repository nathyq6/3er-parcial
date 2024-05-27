#include <iostream>

using namespace std;

int main() {

int matriz[2][2];


matriz[1][1]=10;
matriz[1][2]=20;
matriz[2][1]=30;
matriz[2][2]=40;

 

  cout << "Datos específicos:" << endl;
  cout << "Fila 1, columna 1: " << matriz[1,1]<< endl;
  cout << "Fila 1, columna 2: " << matriz[1,2]<< endl;
  cout << "Fila 2, columna 1: " << matriz[2,1]<< endl;
  cout << "Fila 2, columna 2: " << matriz[2,2]<< endl;

  return 0;
}