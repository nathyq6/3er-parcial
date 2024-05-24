#include <iostream>
using namespace std;


int main() {
  char letra;

  cout<<"Ingrese un carácter: ";
  cin>>letra;

  letra = tolower(letra);

  if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
    cout<<"es la vocal:"<<letra<<endl;
  } else {
  
    if (letra >= 'a' && letra <= 'z') {
      cout<<"es la consonante:"<<letra<<endl;
    } else {
      
      cout<<"el caracter " <<letra << "no es ni una vocal ni una consonante";
    }
  }

  return 0;
}