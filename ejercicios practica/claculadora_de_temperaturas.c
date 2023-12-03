#include <stdio.h>

void imprimirEstacion(float temperatura);
int main() {
    int N, i;
     float temperatura;
    printf("Ingrese la cantidad de temperaturas a evaluar: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Ingrese la temperatura %d: ", i + 1);
        scanf("%f", &temperatura);
        
        printf("La estacion correspondiente es: ");
        imprimirEstacion(temperatura);
    }

    return 0;
}
void imprimirEstacion(float temperatura) {
    if (temperatura >= 28) {
        printf("Primavera\n");
    } else if (temperatura < 28 && temperatura >= 22) {
        printf("Verano\n");
    } else if (temperatura < 22 && temperatura >= 19) {
        printf("Otoño\n");
    } else {
        printf("Invierno\n");
    }
}

