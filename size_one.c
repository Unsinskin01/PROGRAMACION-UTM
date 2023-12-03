#include<stdio.h>
#define SIZE 5
int main(){
	int x[SIZE], i;

	for(i=0;i<SIZE;i++){
		printf("Ingresa el entero %d: ", i);
		scanf("%d", &x[i]);
		
	}
	printf("\n :::Datos almacenados:::\n");
	printf("Elemento \t valor\n");
	
	for(i=0;i<SIZE;i++){
		printf("x[%d] \t\t %d\n", i, x[i]);
	}
return 0;
}
