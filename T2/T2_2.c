#include <stdio.h>
#include <math.h>

int main() {
    // Definir constantes
    const double e = 2.71828;
    double T, A, k;
    int t;

    // Pedir al usuario que ingrese los valores
    printf("Ingrese la temperatura inicial del objeto (en grados Celsius): ");
    scanf("%lf", &T);

    printf("Ingrese la temperatura de la sustancia (en grados Celsius): ");
    scanf("%lf", &A);

    printf("Ingrese la constante termica: ");
    scanf("%lf", &k);

    printf("Ingrese el tiempo en minutos: ");
    scanf("%d", &t);

    // Calcular temperatura final del objeto
    double t_final = A + (T - A) * pow(e, (-k * t));

    // Mostrar resultado
    printf("La temperatura final del objeto despues de %d minutos es: %.2f grados Celsius\n", t, t_final);

    return 0;
}
