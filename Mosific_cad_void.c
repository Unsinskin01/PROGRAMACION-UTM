#include<stdio.h>
int longitud(char s[]);
main(){
	int tam;
	char palabra[20];
	
	printf("ingrese ina palabra: ");
	scanf("%s", palabra);
	tam=longitud(palabra);
	printf("\n El tamaño de %s es de %d", palabra, tam);
	printf("ingrese ina palabra: ");
	scanf("%s", palabra);
	printf("\n El tamaño de %s es de %d", palabra, longitud(palabra));
	return 0;
}
int longitud(char s[]){
	int i;
	for(i=0;s[i] != '\0';i++);
	return 0;
}
