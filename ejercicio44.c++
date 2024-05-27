#include <iostream>
using namespace std;

int main() {
    int filas, columnas;

    cout << "Digite el número de filas ";
    cin >> filas;

    cout << "Digite el número de columnas";
    cin >> columnas;

    int matriz[filas][columnas];

    
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Digite el dato para la fila " << i + 1 << " columna " << j + 1 << ": ";
            cin >> matriz[i][j];
        }
    }

    
    int columna = 0; 
    int suma = 0;
    for (int i = 0; i < filas; i++) {
        suma += matriz[i][columna];
    }

    

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "La suma de los elementos en la columna " << columna + 1 << " es " << suma << endl;

    return 0;
}
