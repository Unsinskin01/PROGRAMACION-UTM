#include <stdio.h>
int sumaDigitos(int numero);

int main() {
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    int resultado = sumaDigitos(num);

    printf("La suma de los digitos es: %d\n", resultado);

    return 0;
}
int sumaDigitos(int numero) {
    int suma = 0;

    while (numero != 0) {
        suma += numero % 10; // Obtiene el último dígito y lo suma
        numero /= 10; // Elimina el último dígito del número
    }

    return suma;
}

