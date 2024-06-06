#include<string.h>
#include <iostream>
using namespace std;

const int MAX_VENDEDORES = 100;

float ventasVendedor[MAX_VENDEDORES];
char nombresVendedor[MAX_VENDEDORES][20];

int numVendedores = 0;

int main() {
  // inciciar con nombre y contraseña
  char nombre[20];
  char grupoLista[20];
  int intentos = 0;
  do {
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su grupo, grado y número de lista: ";
    cin >> grupoLista;
    if (strcmp(nombre, "nathaly") == 0 && strcmp(grupoLista, "2b6") == 0) {
      cout << "Bienvenido al sistema\n";
      break;
    } else {
      intentos++;
      cout << "Datos incorrectos. Intentos restantes: " << 3 - intentos << endl;
    }
  } while (intentos < 3);
  if (intentos == 3) {
    cout << "Lo sentimos, ha superado el número máximo de intentos permitidos.\n";
    return 0;
  }

  // Bucle de entrada de ventas
  float precioUnidad, cantidad;
  int indiceVendedor = 0;
  do {
    cout << "\nIngrese datos para el vendedor " << indiceVendedor + 1 << ":\n";

    cout << "Precio unitario del artículo\n";
    cout<< "0 para terminar \n";
    cin >> precioUnidad;

    if (precioUnidad <= 0) {
      if (indiceVendedor == 0) {
        cout << "No ha ingresado ventas para ningún vendedor.\n";
        return 0;
      }
      break; // Salir del bucle si no hay más ventas para este vendedor
    }

    cout << "Cantidad vendida: ";
    cin >> cantidad;

    if (cantidad <= 0) {
      cout << "Error: la cantidad vendida debe ser un número positivo.\n";
      continue;
    }

    ventasVendedor[indiceVendedor] += precioUnidad * cantidad;

    cout << "Importe parcial del vendedor " << indiceVendedor + 1 << ": " << ventasVendedor[indiceVendedor] << endl;

    indiceVendedor++; // Pasar al siguiente vendedor
  } while (indiceVendedor < MAX_VENDEDORES && precioUnidad != 0);

  // Calcular y mostrar las ventas totales de cada vendedor
  cout << "\nResumen de ventas:\n";
  for (int i = 0; i < indiceVendedor; i++) {
    cout << "Vendedor " << i + 1 << ": " << ventasVendedor[i] << endl;
  }

  // Calcular y mostrar las ventas totales del día
  float ventasTotales = 0;
  for (int i = 0; i < indiceVendedor; i++) {
    ventasTotales += ventasVendedor[i];
  }
  cout << "\nTotal de ventas del día: " << ventasTotales << endl;

  return 0;
}
