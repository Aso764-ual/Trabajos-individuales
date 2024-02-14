#include <stdio.h>

int main() {
    int segundos, horas, minutos, segundos_restantes;

    // Pedir al usuario que ingrese el valor en segundos
    printf("Ingrese un valor de tiempo en segundos: ");
    scanf("%d", &segundos);

    // Calcular horas
    horas = segundos / 3600;
    // Calcular minutos
    minutos = (segundos % 3600) / 60;
    // Calcular segundos restantes
    segundos_restantes = (segundos % 3600) % 60;

    // Mostrar el resultado
    printf("%d segundos equivalen a %d horas, %d minutos y %d segundos.\n", segundos, horas, minutos, segundos_restantes);

    return 0;
}