#include <stdio.h>
int suma(int a, int b);
void resta(int a, int b);
float divi(int a, int b);

int main() {
    int opcion, num1, num2;

    printf("Ingrese el primer numero entero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &num2);

    printf("Menu de opciones:\n");
    printf("1- SUMAR\n");
    printf("2- RESTAR\n");
    printf("3- MULTIPLICAR\n");
    printf("4- DIVIDIR\n");
    printf("Ingrese la opcion deseada: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("La suma de %d + %d = %d\n", num1, num2, suma(num1, num2));
            break;
        case 2:
            resta(num1, num2);
            break;
        case 3:
            printf("La multiplicacion de %d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case 4:
            if (num2 == 0) {
                printf("Error: No se puede dividir entre cero\n");
            } else {
                printf("La division de %d / %d = %.2f\n", num1, num2, divi(num1, num2));
            }
            break;
        default:
            printf("Opcion no valida.\n");
            break;
    }

    return 0;
}
int suma(int a, int b) {
    return a + b;
}

void resta(int a, int b) {
    printf("La resta de %d - %d = %d\n", a, b, a - b);
}

float divi(int a, int b) {
    return (float)a / b;
}

