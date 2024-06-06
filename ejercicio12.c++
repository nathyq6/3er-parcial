#include <iostream>
using namespace std;

int main() {
    int num1, num2, total;

    cout << "Dime el primer numero ";
    cin >> num1;

    cout << "Dime el segundo numero ";
    cin >> num2;

   
    if (num2 == 0) {
        cout << ":No se permite la división por cero" << endl;
        return 1;
    }

    total = num1 % num2;

    cout << "El residuo de la división es " << total << endl;

  
    if (total == 0) {
        cout << num1 << " es divisible entre " << num2 << endl;
    } else {
        cout << num1 << " no es divisible entre " << num2 << endl;
    }

    return 0;
}


