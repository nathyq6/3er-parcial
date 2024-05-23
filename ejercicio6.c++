#include <iostream>
using namespace std;

int main() {
  int carta;

  cout<<"Dime el número de la carta: ";
  cin>>carta;

  switch (carta) {
    case 1:
      cout<<"Es un as"<<endl;
      break;
    case 10:
      cout<<"Es un sota"<<endl;
      break;
    case 11:
      cout<<"Es un caballo"<<endl;
      break;
    case 12:
      cout<<"Es un rey"<<endl;
      break;
    default:
      if (carta >= 2 && carta <= 9) {
        
      cout<<"No es ninguna figura ni tampoco as"<<endl;
      } else {
        cout<<"Este número no está en la baraja española"<<endl;
      }

  }
  return 0;
}