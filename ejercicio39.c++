#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  int num[10];

  for (int i = 0; i < 10; i++) {
    num[i] = rand() % 100 + 1;
  }

  for (int i = 0; i < 10; i++) {
    cout << "El número en la posición " << i + 1 << " es " << num[i] << endl;
  }

  return 0;
}