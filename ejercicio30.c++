#include <iostream>
#include <string.h>
using namespace std;

int main() {
  char nombre[50];
  char gradoGrupo[10];
  int intentos = 0;

  const char *nombreCorrecto = "nathaly";
  const char *gradoGrupoCorrecto = "2b6";

  while (intentos < 3) {
    intentos++;

    cout << "Introduzca su nombre ";
    cin >> nombre;

    cout << "Introduzca su grado grupo y numero de lista";
    cin >> gradoGrupo;

    if (strcmp(nombre, nombreCorrecto) == 0 && strcmp(gradoGrupo, gradoGrupoCorrecto) == 0) {
      cout << "Bienvenido al sistema\n";
      break;
    } else {
      cout << "Datos incorrectos Intentos restantes";
  }

  if (intentos == 3) {
    cout << "Se ha superado el número máximo de intentos permitidos";
    return 0; 
  }
}

  float unidad, cantidad, importeTotal = 0;

  while (1 ){
    cout << "Introduzca el precio unitario del artículo\n";
    cout<<"introduzca 0 para terminar\n";
    cin >> unidad;

      if(unidad ==0){
      break; 
    }


    cout << "Introduzca la cantidad que vendiste ";
    cin >> cantidad;

    if (cantidad < 0) {
      cout << "La cantidad vendida debe ser un número positivo";
      continue;
    }

    importeTotal += unidad * cantidad;

    cout << "Importe parcial " << importeTotal << endl;

    if (unidad == 0) {
        break;
    }
  }

  cout << "Venta finalizada Importe total de la factura" << importeTotal << endl;

  return 0;
}
