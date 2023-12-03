#include<stdio.h>
#include<stdlib.h>
main(){
	int *datos, i, tam;
	//preguntar el tamaño del arreglo
	printf("Indica el tamanio del arreglo:");
	scanf("%d", &tam);
	
	//datos es un arreglo dinamico de enteros
	datos=(int *) malloc(tam * sizeof(int) );
	
	if(datos == NULL)
		printf("No hay sudiciente memoria \n");
	else{
		for(i=0;i<tam;i++){
			printf("Ingrese el dato %d", i+1);
			scanf("%d", &datos[i]);
		}
		
		printf("\n Contenido del arreglo \n");
		for(i=0;i<tam;i++){
			printf("datos[%d] = %d \n", i, datos[i]);
			
			free(datos);
		}
	}
}
