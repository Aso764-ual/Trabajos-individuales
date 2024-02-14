#include <stdio.h>

int main() {
    double t, p;

    // Pedir al usuario que ingrese el tiempo
    printf("Ingrese el tiempo en segundos: ");
    scanf("%lf", &t);

    // Calcular la presión según el tiempo ingresado
    if (t <= 35) {
        p = 80.55 * t;
    } else {
        p = 33.27 * t + 1670.74;
    }

    // Mostrar el valor de la presión
    printf("La presion es: %.2f pascales\n", p);

    return 0;
}
