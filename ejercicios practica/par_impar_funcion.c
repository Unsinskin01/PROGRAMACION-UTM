#include <stdio.h>
int esPar(int numero);
int main() {
    int num;
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    if (esPar(num)) {
        printf("%d es un numero par.\n", num);
    } else {
        printf("%d no es un numero par.\n", num);
    }

    return 0;
}
int esPar(int numero) {
    // Un número es par si al dividirlo entre 2 el residuo es 0
    if (numero % 2 == 0) {
        return 1; // Es par
    } else {
        return 0; // No es par
    }
}
