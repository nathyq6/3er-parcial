#include <iostream>
#include <string.h>
using namespace std;
int main() {
  char nombre[20];
  char grupoLista[20];
  int intentos = 0;
  do {
    cout<<"dime tu nombre ";
    cin>>nombre;
    cout<<"dime tu grupo grado y numero de lista ";
    cin>>grupoLista;
    if (strcmp(nombre, "nathaly") == 0 && strcmp(grupoLista, "2b6") == 0) {
      cout<<"Bienvenido al sistema\n";
      break;
    } else {
      intentos++;


      cout<<"Datos incorrectos intentos restantes"<< 3 - intentos<<endl;
    }
  } while (intentos < 3);
  if (intentos == 3) {


    cout<<"Lo sentimos ha superado el número máximo de intentos permitidos";
  }

  // Bucle de entrada de ventas
  float precioUnidad, cantidad;
  int indiceVendedor = 0;
  do {
    cout << "\nIngrese datos para el vendedor " << indiceVendedor + 1 << ": \n";

    cout << "Introduzca el precio unitario del artículo (0 para terminar): "; 
    cin >> precioUnidad;

    if (precioUnidad <= 0) {
      if (indiceVendedor == 0) {
        cout << "No ha ingresado ventas para ningún vendedor.\n"; 
        return 0;
      }
      break; 
    }

    cout << "Introduzca la cantidad vendida: "; //  ( azul )
    cin >> cantidad;

    if (cantidad <= 0) {
      cout << "Error: la cantidad vendida debe ser un número positivo.\n"; //  ( rojo )
      continue;
    }

    ventasVendedor[indiceVendedor] += precioUnidad * cantidad;

    cout << "Importe parcial del vendedor " << indiceVendedor + 1 << ": " << ventasVendedor[indiceVendedor] << endl; //  ( azul )

    indiceVendedor++; // Pasar al siguiente vendedor
  } while (indiceVendedor < MAX_VENDEDORES && precioUnidad != 0);

  // Calcular y mostrar las ventas totales de cada vendedor
  cout << "\nResumen de ventas:\n"; //  ( azul )
  for (int i = 0; i < indiceVendedor; i++) {
    cout << "Vendedor " << i + 1 << ": " << ventasVendedor[i] << endl; //  ( azul )
  }

  // Calcular y mostrar las ventas totales del día
  float ventasTotales = 0;
  for (int i = 0; i < indiceVendedor; i++) {
    ventasTotales += ventasVendedor[i];
  }
  cout << "\nTotal de ventas del día: " << ventasTotales << endl; //  ( azul )

  return 0;
}

  return 0;



}