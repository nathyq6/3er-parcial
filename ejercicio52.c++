//equipo 6
#include <iostream>
using namespace std;

// OSVALDO VALENTIN ESCOBAR SANDOVAL
float calcularPromedio(float a, float b, float c) {
    return (a + b + c) / 3.0;
}

//katherine Función para obtener el máximo entre tres números
float obtenerMaximo(float a, float b, float c) {
    float maximo = a;
    if (b > maximo) {
        maximo = b;
    }
    if (c > maximo) {
        maximo = c;
    }
    return maximo;
}

//danna paola garcia perez llama a la funcion
float calcularPromedioFinal(float examen, float parcial1, float parcial2) {
    // Calcula el promedio de las calificaciones
    float promedio_calificaciones = calcularPromedio(examen, parcial1, parcial2);

    // Ailyn La nota final es la mejor entre el promedio y el examen
    float nota_final = obtenerMaximo(examen, promedio_calificaciones, promedio_calificaciones);
    return nota_final;
}

int main() {
    char opcion;

    do {
        float examen, parcial1, parcial2;

        // Solicitar las calificaciones al usuario
      //nathaly cuamatzi cuamatzi 
        cout << "Ingrese la calificación del primer parcial: ";
        cin >> examen;
        cout << "Ingrese la calificación del segundo parcial: ";
        cin >> parcial1;
        cout << "Ingrese la calificación del tercer parcial: ";
        cin >> parcial2;

        
        float promedio = calcularPromedio(examen, parcial1, parcial2);
        cout << "El promedio de las calificaciones es: " << promedio << endl;

        
        float calificacion_final = calcularPromedioFinal(examen, parcial1, parcial2);
        
       
        float calificacion_maxima = obtenerMaximo(examen, parcial1, parcial2);
        cout << "La calificación más alta es: " << calificacion_maxima << endl;

        
        cout << "La calificación final del alumno es: " << calificacion_final << endl;

        
        cout << "¿Desea calcular otra calificación? (Presione 'S' para continuar): ";
        cin >> opcion;
    } while (opcion == 'S');

    return 0;
}
