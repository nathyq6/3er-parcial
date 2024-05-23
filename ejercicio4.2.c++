#include <iostream>
using namespace std;


int main() {
  char letra;

  cout<<"Ingrese un carácter: ";
  cin>>letra;

  letra = tolower(letra);

  if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
    cout<<"es una vocal"<<letra<<endl;
  } else {
  
    if (letra >= 'a' && letra <= 'z') {
      cout<<"es una consonante"<<letra<<endl;
    } else {
      
      cout<<" no es ni una vocal ni una consonante"<<letra<<endl;
    }
  }

  return 0;
}