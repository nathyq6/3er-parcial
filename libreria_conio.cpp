#include <iostream>
#include <cmath>
#include <conio.h>
#include <windows.h> // Para funciones de la consola en Windows

using namespace std;

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Definición de colores para la consola en Windows
enum ConsoleColor {
    Blue = 1,
    Green = 2,
    Yellow = 3,
    Purple = 5,
    White = 7
};

void setColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

int main() {
    while (true) {
        int opcion = 1;
        double area;
        bool selected = false;

        while (!selected) {
            system("cls");

            setColor(White); // Establecer color de texto blanco para el texto normal

            cout << "Seleccione una figura para calcular el area:" << endl;
            if (opcion == 1) setColor(Blue);
            cout << (opcion == 1 ? "> " : "  ") << "1. Circulo" << endl;
            setColor(White);
            if (opcion == 2) setColor(Green);
            cout << (opcion == 2 ? "> " : "  ") << "2. Rectangulo" << endl;
            setColor(White);
            if (opcion == 3) setColor(Yellow);
            cout << (opcion == 3 ? "> " : "  ") << "3. Triangulo" << endl;
            setColor(White);
            if (opcion == 4) setColor(Purple);
            cout << (opcion == 4 ? "> " : "  ") << "4. Cuadrado" << endl;
            setColor(White);
            if (opcion == 5) setColor(White);
            cout << (opcion == 5 ? "> " : "  ") << "5. Salir" << endl;

            int key = _getch();

            if (key == 224) {
                key = _getch();
                if (key == 72) {
                    if (opcion > 1) {
                        opcion--;
                    }
                }
                else if (key == 80) {
                    if (opcion < 5) {
                        opcion++;
                    }
                }
            }
            else if (key == 13) {
                selected = true;
            }
        }

        system("cls");

        switch (opcion) {
        case 1: {
            double radio;
            cout << "Ingrese el radio del circulo: ";
            cin >> radio;
            area = M_PI * radio * radio;
            setColor(Blue); // Cambiar color para el resultado del círculo
            cout << "El area del circulo es: " << area << endl;
            break;
        }
        case 2: {
            double base, altura;
            cout << "Ingrese la base del rectangulo: ";
            cin >> base;
            cout << "Ingrese la altura del rectangulo: ";
            cin >> altura;
            area = base * altura;
            setColor(Green); // Cambiar color para el resultado del rectángulo
            cout << "El area del rectangulo es: " << area << endl;
            break;
        }
        case 3: {
            double base, altura;
            cout << "Ingrese la base del triangulo: ";
            cin >> base;
            cout << "Ingrese la altura del triangulo: ";
            cin >> altura;
            area = (base * altura) / 2;
            setColor(Yellow); // Cambiar color para el resultado del triángulo
            cout << "El area del triangulo es: " << area << endl;
            break;
        }
        case 4: {
            double lado;
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            area = lado * lado;
            setColor(Purple); // Cambiar color para el resultado del cuadrado
            cout << "El area del cuadrado es: " << area << endl;
            break;
        }
        case 5:
            cout << "Saliendo del programa." << endl;
            return 0;
        default:
            cout << "Opcion invalida. Por favor, seleccione una opcion entre 1 y 5." << endl;
            break;
        }

        setColor(White); // Restaurar color de texto blanco al finalizar la ejecución de cada opción

        cout << "Presione cualquier tecla para volver al menu..." << endl;
        _getch();
    }

    return 0;
}
