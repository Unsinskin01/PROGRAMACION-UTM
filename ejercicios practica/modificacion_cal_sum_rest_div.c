#include <stdio.h>

int suma(int a, int b);
void resta(int a, int b);
float divi(int a, int b);

int main() {
    int num1, num2, opcion;

    printf("Ingrese el primer numero entero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &num2);

    do {
        printf("\nMenu de opciones:\n");
        printf("1- SUMAR\n");
        printf("2- RESTAR\n");
        printf("3- MULTIPLICAR\n");
        printf("4- DIVIDIR\n");
        printf("5- SALIR\n");
        printf("Ingrese la opción deseada: ");
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
                    printf("Error: No se puede dividir entre cero.\n");
                } else {
                    printf("La division de %d / %d = %.2f\n", num1, num2, divi(num1, num2));
                }
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no válida.\n");
                break;
        }
    } while (opcion != 5);

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

