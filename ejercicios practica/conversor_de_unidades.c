#include <stdio.h>
//prototipos de funciones 
float convertirFahrenheitACelsius(float fahrenheit);
float convertirCelsiusAFahrenheit(float celsius);
float convertirLibrasAKilogramos(float libras);
float convertirKilogramosALibras(float kilogramos);
float convertirMillasAMetros(float millas);
float convertirMetrosAMillas(float metros);


int main() {
    int opcion;
    float valor;
    
    do {
        printf("\n\tMenu:\n");
        printf("1. Temperatura\n");
        printf("2. Masa\n");
        printf("3. Longitud\n");
        printf("4. Finalizar\n");
        printf("Ingrese la opcion deseada: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("\n1. Fahrenheit a Celsius\n");
                printf("2. Celsius a Fahrenheit\n");
                printf("Ingrese la opcion deseada: ");
                scanf("%d", &opcion);
                
                printf("Ingrese el valor: ");
                scanf("%f", &valor);

                switch (opcion) {
                    case 1:
                        printf("%.2f Fahrenheit = %.2f Celsius\n", valor, convertirFahrenheitACelsius(valor));
                        break;
                    case 2:
                        printf("%.2f Celsius = %.2f Fahrenheit\n", valor, convertirCelsiusAFahrenheit(valor));
                        break;
                    default:
                        printf("Opcion no valida.\n");
                        break;
                }
                break;
                
            case 2:
                printf("\n1. Libras a Kilogramos\n");
                printf("2. Kilogramos a Libras\n");
                printf("Ingrese la opcion deseada: ");
                scanf("%d", &opcion);
                
                printf("Ingrese el valor: ");
                scanf("%f", &valor);

                switch (opcion) {
                    case 1:
                        printf("%.2f Libras = %.2f Kilogramos\n", valor, convertirLibrasAKilogramos(valor));
                        break;
                    case 2:
                        printf("%.2f Kilogramos = %.2f Libras\n", valor, convertirKilogramosALibras(valor));
                        break;
                    default:
                        printf("Opcion no valida.\n");
                        break;
                }
                break;

            case 3:
                printf("\n1. Millas a Metros\n");
                printf("2. Metros a Millas\n");
                printf("Ingrese la opcion deseada: ");
                scanf("%d", &opcion);
                
                printf("Ingrese el valor: ");
                scanf("%f", &valor);

                switch (opcion) {
                    case 1:
                        printf("%.2f Millas = %.2f Metros\n", valor, convertirMillasAMetros(valor));
                        break;
                    case 2:
                        printf("%.2f Metros = %.2f Millas\n", valor, convertirMetrosAMillas(valor));
                        break;
                    default:
                        printf("Opcion no valida.\n");
                        break;
                }
                break;

            case 4:
                printf("Finalizando programa...\n");
                break;

            default:
                printf("Opcion no valida.\n");
                break;
        }

    } while (opcion != 4);

    return 0;
}
// Funciones de conversiones
float convertirFahrenheitACelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

float convertirCelsiusAFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float convertirLibrasAKilogramos(float libras) {
    return libras * 0.453592;
}

float convertirKilogramosALibras(float kilogramos) {
    return kilogramos * 2.20462;
}

float convertirMillasAMetros(float millas) {
    return millas * 1609.34;
}

float convertirMetrosAMillas(float metros) {
    return metros / 1609.34;
}

