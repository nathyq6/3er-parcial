#include <iostream>
#include <math.h>
using namespace std;

int main() {

  int menu;

  cout<<"CALCULAR AREA DE FIGURAS";
  cout<<"1) Triángulo";
  cout<<"2) Trapecio";
  cout<<"3) Rectángulo";
  cout<<"4) Ninguna";

  cout<<"Dime una opción: ";
  cin>>menu;

  switch (menu) {
    case 1: {
      float area, base, altura;

      cout<<"Dime la base del triángulo: ";
      cin>>base;
      cout<<"Dime la altura del triángulo: ";
      cin>>altura;

      area = base * altura / 2;
      cout<<"El área del triángulo es:"<<area<<endl;
      break;
    }

    case 2: {
      float baseMayor, baseMenor, altura, area;

      cout<<"Dime la base mayor del trapecio: ";
      cin>>baseMayor;
      cout<<"Dime la base menor del trapecio: ";
      cin>>baseMenor;
      cout<<"Dime la altura del trapecio: ";
      cin>>altura;

      area = (baseMayor + baseMenor) * altura / 2;
      cout<<"El área del trapecio es:"<< area<<endl;
      break;
    }

    case 3: {
      float base, altura, area;

      cout<<"Dime la base del rectángulo: ";
      cin>>base;
      cout<<"Dime la altura del rectángulo: ";
      cin>>altura;

      area = base * altura;
      cout<<"El área del rectángulo es:"<< area<<endl;
      break;
    }

    case 4:
     cout<<"Ninguna de las opciones";
      break;

    default:
      cout<<"Opción no válida";
  }

  return 0;
}
