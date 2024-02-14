#include <stdio.h>

int main() {
    // Declarar variables para los lados del triángulo
    double lado1, lado2, lado3;

    // Pedir al usuario que ingrese los lados del triángulo
    printf("Ingrese la longitud del primer lado del triangulo: ");
    scanf("%lf", &lado1);

    printf("Ingrese la longitud del segundo lado del triangulo: ");
    scanf("%lf", &lado2);

    printf("Ingrese la longitud del tercer lado del triangulo: ");
    scanf("%lf", &lado3);

    // Verificar si es un triángulo válido
    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        printf("Es un triangulo valido.\n");

        // Verificar si es equilátero
        if (lado1 == lado2 && lado1 == lado3) {
            printf("Es un triangulo equilatero.\n");
        }
        // Verificar si es isósceles
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("Es un triangulo isosceles.\n");
        }
        // Si no es equilátero ni isósceles, entonces es escaleno
        else {
            printf("Es un triangulo escaleno.\n");
        }

        // Verificar si cumple con el teorema de Pitágoras
        if (lado1 * lado1 + lado2 * lado2 == lado3 * lado3 ||
            lado1 * lado1 + lado3 * lado3 == lado2 * lado2 ||
            lado2 * lado2 + lado3 * lado3 == lado1 * lado1) {
            printf("El triangulo cumple con el teorema de Pitagoras.\n");
        } else {
            printf("El triangulo no cumple con el teorema de Pitagoras.\n");
        }
    } else {
        printf("No es un triangulo valido.\n");
    }

    return 0;
}
