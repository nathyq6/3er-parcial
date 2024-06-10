//Nathaly Cuamatzi Cuamatzi 
#include <stdio.h>

float calcularMax(float x, float y) {
    return (x > y) ? x : y;
}

float calcularNota(float parcial1, float parcial2, float examen) {
    float promedio_parciales = (parcial1 * 0.2) + (parcial2 * 0.2);
    float nota_final = calcularMax(promedio_parciales, examen);
    return nota_final;
}

int main(void) {
    char c;

    do {
        float parcial1, parcial2, examen, final;

        // valentin Leer las calificaciones
        printf("Introduzca calificación del primer parcial [0, 10]: ");
        scanf("%f", &parcial1);
        printf("Introduzca calificación del segundo parcial [0, 10]: ");
        scanf("%f", &parcial2);
        printf("Introduzca calificación del examen final [0, 10]: ");
        scanf("%f", &examen);

        //danna Calcular la nota final
        final = calcularNota(parcial1, parcial2, examen);

        // Ailyn Imprimir resultados
        printf("La nota final del alumno es: %.2f\n", final);

        // katherine Preguntar al usuario si desea calcular otra nota
        printf("\n¿Desea calcular otra nota? (Presione 's' para salir): ");
        scanf(" %c", &c);
    } while (c != 's' && c != 'S');

    return 0;
}
