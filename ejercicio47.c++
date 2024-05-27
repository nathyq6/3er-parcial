include <iostream>

using namespace std;

int main() {
  
  int num[7];


  string nombreArreglo = "Numeros";

  
  num[0] = -20;
  num[1] = -14;
  num[2] = -8;
  num[3] = 0;
  num[4] = -5;
  num[5] = -19;
  num[6] = -29;

  
  for (int i = 0; i < 7; i++) {
    cout << "El dato en la posicion " << i << " es: " << num[i] << endl;
  }

  return 0;
}