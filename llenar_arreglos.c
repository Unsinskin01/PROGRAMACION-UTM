#include<stdio.h>
#include<stdlib.h>
#define TAM 5

int *seleccionarpares(int a[], int , int *);
void llenaArreglo(int a[], int);
void imprimeArreglo(int a[], int);

int main (void){
	int arreglo[TAM], i;
	int *seleccion, totselect;
	
	llenaArreglo(arreglo, TAM);
	printf("Contenido del arreglo original: \n");
	imprimeArreglo(arreglo, TAM);
	
	seleccion = seleccionarpares(arreglo, TAM, &totselect);
	
	printf("Numeros pares contenido en el arreglo: \n ");
	imprimeArreglo(seleccion, totselect);
	
	free(seleccion);
}
void llenaArreglo(int a[], int tamanio){
	int i;
	for(i=0;i<tamanio;i++){
		a[i]=i;
	}
}
void imprimeArreglo(int a[], int tama){
	int i;
	for(i=0;i<tama;i++){
		printf("%d", a[i]);
		printf("\n");
	}
}
int *seleccionarpares(int a[], int size , int *numpares){
	int i, j;
	int *pares;
	*numpares=0;
	for(i=0;i<size;i++){
		if(a[i]%2 ==0)
			(*numpares)++;
		}
	pares = (int *) malloc( (*numpares) *sizeof(int) );
	j=0;
	for(i=0;i<size;i++){
		if(a[i]%2 ==0)
			pares[j++]=a[i];
	}
	return pares;
}




