#include <stdio.h>

double calcularEuler(int n) {
int i;
    double euler = 1;
    double factorial = 1;

    for ( i = 1; i <= n; i++) {
        factorial *= i;
        euler += 1 / factorial;
    }

    return euler;
}

int main() {
    int n;
    printf("Ingresa un valor entero positivo para calcular la funcion euler: ");
    scanf("%d", &n);

    double resultado = calcularEuler(n);
    printf("La aproximacion de Euler con n = %d es: %lf\n", n, resultado);
fflush(stdin);
getchar();
    return 0;
}

