#include <stdio.h>
int potenciaEntera(int base, int exponente);
int main() {
    int base, exponente;
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    int resultado = potenciaEntera(base, exponente);

    printf("El resultado de %d elevado a la %d es: %d\n", base, exponente, resultado);

    return 0;
}
int potenciaEntera(int base, int exponente) {
    if (exponente == 0) {
        return 1;
    } else {
        return base * potenciaEntera(base, exponente - 1);
    }
}
