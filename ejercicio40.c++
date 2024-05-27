#include <iostream>

using namespace std;


int main() {
  int p;
 int  cont = 0;

  cout << "Digite el numero de posiciones (tamaño): ";
  cin >> p;

  int num[p];

  for (int i = 0; i < p; i++) {
    cout << "Digite numero " << i + 1 << ": ";
    cin >> num[i];
  }

  int countPositive = 0;
  for (int i = 0; i < p; i++) {
    cout<<"los numeros positivos son"<<num[1]<<endl;
    if (num[i] > 0) {
      cont=cont+1;
    }
  }

  cout << "Hay " << cont<< " numeros positivos" << endl;

  return 0;
}