#include<stdio.h>

int main(){
	int array[6], cont, num, bandera=0;
	for(cont=0;cont<6;cont++){
		printf("Introducir numero [%d]: ", cont);
		scanf("%d", &array[cont]);
	}
	printf("\n Los datos almacenados son: \n");
	for(cont=0;cont<6;cont++){
		printf("Dato %d: %d \n", cont, array[cont] );
	}
	printf("\n Indica dato a buscar: ");
	scanf("%d", &num);
	for(cont=0;cont<6;cont++){
		if(array[cont] == num){
			printf("\n El dato si existe en el arreglo \n");
			bandera=1;
		}
	}
	if(bandera==0)
		printf("\n Dato NO encontrado");
		
	return 0;
}
