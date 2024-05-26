#include <iostream>
#include <string.h>
using namespace std;
float calcularImporteArticulo(float precioUnidad, float cantidad) {
  if (precioUnidad <= 0 || cantidad <= 0) {
    cout<<" el precio y la cantidad deben ser números positivos";
    return 0;
  } else {
    return precioUnidad * cantidad;
  }
}
int main() {
  char nombre[50];
  char gradoGrupo[10];
  int intentos = 0;
  const char *nombreCorrecto = "nathaly";
  const char *gradoGrupoCorrecto = "2b6";
  while (intentos < 3) {
    intentos++;
    cout<<"Introduzca su nombre ";
    cin>>nombre;
    cout<<"Introduzca su grado y grupo y numero de lista ";
    cin>>gradoGrupo;
    if (strcmp(nombre, nombreCorrecto) == 0 && strcmp(gradoGrupo, gradoGrupoCorrecto) == 0) {
      cout<<"Bienvenido al sistema";
      break;
    } else {
     cout<<"Datos incorrectos Intentos restantes"<< 3 - intentos<<endl;
    }
  }
  if (intentos == 3) {
    cout<<"Se ha superado el número máximo de intentos permitidos";
  }

  float precioUnidad, cantidad, importeTotal = 0.0;

  while (precioUnidad !=0) {
    cout<<"Introduzca el precio unitario del artículo (0 para terminar) ";
    cin>>precioUnidad;

    if (precioUnidad <= 0) {
      cout<<"el precio unitario debe ser un número positivo";
      continue;
    }
    cout<<"Introduzca la cantidad vendida ";
    cin>>cantidad;

    if (cantidad <= 0) {
      cout<<" la cantidad vendida debe ser un número positivo";
      continue;
    }

    importeTotal += calcularImporteArticulo(precioUnidad, cantidad);

    cout<<"Importe parcial"<<importeTotal<<endl;

  }

  cout<<"Importe total de la factura"<<importeTotal<<endl;
  return 0;
}