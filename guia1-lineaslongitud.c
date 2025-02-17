// guia1 - ejercicio 3
// 3. Escriba un programa que lea las coordenadas de 2 lineas y determine cual es la de mayor longitud .

#include <stdio.h>
#include <math.h>

// Función para calcular la distancia entre dos puntos
double calcular_distancia(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    // Declaración de variables para las coordenadas de los puntos
    double x1, y1, x2, y2;
    double x3, y3, x4, y4;

    // Lectura de las coordenadas de la primera línea
    printf("Ingrese las coordenadas del primer punto de la primera línea (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Ingrese las coordenadas del segundo punto de la primera línea (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Lectura de las coordenadas de la segunda línea
    printf("Ingrese las coordenadas del primer punto de la segunda línea (x3, y3): ");
    scanf("%lf %lf", &x3, &y3);
    printf("Ingrese las coordenadas del segundo punto de la segunda línea (x4, y4): ");
    scanf("%lf %lf", &x4, &y4);

    // Calcular las longitudes de ambas líneas
    double longitud_linea1 = calcular_distancia(x1, y1, x2, y2);
    double longitud_linea2 = calcular_distancia(x3, y3, x4, y4);

    // Imprimir las longitudes
    printf("Longitud de la primera línea: %.2f\n", longitud_linea1);
    printf("Longitud de la segunda línea: %.2f\n", longitud_linea2);

    // Determinar cuál es la línea de mayor longitud
    if (longitud_linea1 > longitud_linea2) {
        printf("La primera línea es más larga.\n");
    } else if (longitud_linea2 > longitud_linea1) {
        printf("La segunda línea es más larga.\n");
    } else {
        printf("Ambas líneas tienen la misma longitud.\n");
    }

    return 0;

    // gcc guia1-lineaslongitud.c -o guia1-lineaslongitud -lm
    // El -lm le dice al compilador que incluya la biblioteca matemática necesaria para que las funciones sqrt y pow funcionen correctamente.

}
