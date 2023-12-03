#include<stdio.h>
#define TAMANIO 5

void leer_datos(int numeros[]);
void Imprimir_datos(int numeros[]);
main(){
	int arreglo[TAMANIO];	
	leer_datos(arreglo);
	printf("\n Datos Ingresados \n");
	Imprimir_datos(arreglo);
}
void leer_datos(int numeros[]){
	int cont;
	printf("Ingrese %d enteros: \n", TAMANIO);
	for(cont=0;cont<TAMANIO;cont++){
		printf("\nIngrese el valor %d: ", cont+1);
		scanf("%d", &numeros[cont]);
	}
}
void Imprimir_datos(int numeros[]){
	int cont;
	for(cont=0;cont<TAMANIO;cont++)
	printf(" %d ", &numeros[cont]);
}
