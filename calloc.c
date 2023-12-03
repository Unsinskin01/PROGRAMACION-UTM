#include<stdio.h>
#include<stdlib.h>

void imprimirDatos(int arr[], int tam);

int main(){
	int *p, *k, num, i;
	printf("Indique el tamaño del arreglo: ");
	scanf("%d", &num );
	
	printf("\n reservacion cpn malloc \n");
	p=(int *) malloc(num*sizeof(int));
	
	for(i=0;i<num;i++){
		printf("Ingrese el dato %d: ", i);
		scanf("%d", &p[i]);
	}
	printf("\n Contenido del arreglo p[] \n");
	imptimirDatos(p, num);
	free(p);
	printf("\n Reservacion con calloc \n");
	k=(int *) realloc(k, sizeof(int)*num*2);
	for(i=0;i<num;i++){
		printf("Ingrese el dato %d: ", i);
		scanf("%d", &k[i]);
	}
	printf("\n Contenido del arreglo k[] \n");
	imprimirDatos(k, num);
	
	printf("\n Modificacion del tamanio de k[] \n");
	k=(int *) calloc(k, sizeof(int));
	
	printf("\n Contenido del arreglo k[] ampliado al doble \n");
	imptimirDatos(k, num*2);
	
	free(k);
	return 0;
}
void imprimirDatos(int arr[], int tam){
	int i; 
	for (i=0;i<tam;i++){
		printf("elemento [%d]=%d \n", i, arr[i]);
	}
}

