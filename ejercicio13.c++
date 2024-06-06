#include <iostream>
using namespace std;

int main() {

  int num;
  cout << "Dime el numero ";
  cin >> num;

  if (num % 2 == 0) {
    cout << "El numero es par" << endl;
  } else if (num % 2 != 0) {
    cout << "El numero es impar" << endl;
  }

  if (num % 3 == 0) {
    cout << "El numero es divisible por 3" << endl;
  }

  return 0;
}
