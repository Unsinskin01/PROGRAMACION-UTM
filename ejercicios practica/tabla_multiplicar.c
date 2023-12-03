#include <stdio.h>
void escribirTablaMulti(int numero);

int main() {
    int num;
    printf("Ingrese un numero entero para obtener su tabla de multiplicar: ");
    scanf("%d", &num);

    escribirTablaMulti(num);

    return 0;
}
void escribirTablaMulti(int numero) {
	int i;
    printf("Tabla de multiplicar del %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}
