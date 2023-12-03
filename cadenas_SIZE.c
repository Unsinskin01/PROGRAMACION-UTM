#include<stdio.h>
#define SIZE 80
main(){
	char cadena[SIZE];
	printf("Ingresa una cadena: ");
	scanf("%s", &cadena);
	printf("La primera palabra es: %s", cadena);
	scanf("%s", cadena);
	printf("\nLa segunda palabra es: %s", cadena);
	scanf("%s", cadena);
	printf("\nLa otra palabra es: %s", cadena);
	return 0;
}
