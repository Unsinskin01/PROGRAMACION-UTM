#include <stdio.h>
float celsiusToFahrenheit(float celsius);
float celsiusToKelvin(float celsius);
int main() {
    float celsius;

    do {
        printf("Ingrese la temperatura en grados Celsius (mayor a cero): ");
        scanf("%f", &celsius);

        if (celsius <= 0) {
            printf("Por favor, ingrese una temperatura mayor a cero.\n");
        }
    } while (celsius <= 0);

    printf("%.2f grados Celsius son %.2f grados Fahrenheit\n", celsius, celsiusToFahrenheit(celsius));
    printf("%.2f grados Celsius son %.2f grados Kelvin\n", celsius, celsiusToKelvin(celsius));

    return 0;
}
float celsiusToFahrenheit(float celsius) {
    return 1.8 * celsius + 32;
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

