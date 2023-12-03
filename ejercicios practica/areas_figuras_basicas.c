#include <stdio.h>

#define PI 3.14159
float calcularAreaCircunferencia(float radio);
float calcularAreaRectangulo(float base, float altura);
float calcularAreaTriangulo(float base, float altura);
float calcularAreaTrapecio(float baseMayor, float baseMenor, float altura);

int main() {
    int opcion;
    float resultado, medida1, medida2, medida3;

    do {
        printf("Menu:\n");
        printf("1. Circunferencia\n");
        printf("2. Rectangulo\n");
        printf("3. Triangulo\n");
        printf("4. Trapecio\n");
        printf("5. Salir\n");
        printf("Ingrese la opcion deseada: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese el radio de la circunferencia: ");
                scanf("%f", &medida1);
                resultado = calcularAreaCircunferencia(medida1);
                printf("El área de la circunferencia es: %.2f\n", resultado);
                break;
            case 2:
                printf("Ingrese la base del rectángulo: ");
                scanf("%f", &medida1);
                printf("Ingrese la altura del rectángulo: ");
                scanf("%f", &medida2);
                resultado = calcularAreaRectangulo(medida1, medida2);
                printf("El área del rectángulo es: %.2f\n", resultado);
                break;
            case 3:
                printf("Ingrese la base del triángulo: ");
                scanf("%f", &medida1);
                printf("Ingrese la altura del triángulo: ");
                scanf("%f", &medida2);
                resultado = calcularAreaTriangulo(medida1, medida2);
                printf("El area del triangulo es: %.2f\n", resultado);
                break;
            case 4:
                printf("Ingrese la base mayor del trapecio: ");
                scanf("%f", &medida1);
                printf("Ingrese la base menor del trapecio: ");
                scanf("%f", &medida2);
                printf("Ingrese la altura del trapecio: ");
                scanf("%f", &medida3);
                resultado = calcularAreaTrapecio(medida1, medida2, medida3);
                printf("El area del trapecio es: %.2f\n", resultado);
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
                break;
        }
    } while (opcion != 5);

    return 0;
}
float calcularAreaCircunferencia(float radio) {
    return PI * radio * radio;
}

float calcularAreaRectangulo(float base, float altura) {
    return base * altura;
}

float calcularAreaTriangulo(float base, float altura) {
    return (base * altura) / 2;
}

float calcularAreaTrapecio(float baseMayor, float baseMenor, float altura) {
    return ((baseMayor + baseMenor) * altura) / 2;
}

