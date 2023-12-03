#include<stdio.h>
#include<stdlib.h>

float **crear_matriz(int fil, int col);
void leer_matriz(float **mat, int fil, int col);
void imprimir_matriz(float **mat, int fil, int col);
void destruir_matriz(float **mat, int fil);

main(){
	float **matriz;
	int fil, col;
	printf("total de fila: ");
	scanf("%d", &fil);
	printf("total de columnas: ");
	scanf("%d", &col);
	matriz=crear_matriz(fil, col);
	leer_matriz(matriz, fil, col);
	imprimir_matriz(matriz, fil, col);
	destruir_matriz(matriz, fil);
}
float **crear_matriz(int fil, int col){
	int j;
	float **mat;
	
	mat=(float**)malloc(fil*sizeof(float*));
	for(j=0;j<fil;j++){
		mat[j]=(float*)malloc(col*sizeof(float));
	}
	return mat;
}
void leer_matriz(float **mat, int fil, int col){
	int f, c;
	float dato;
	
	for(f=0;f<fil;f++){
		for(c=0;c<col;c++){
			printf("ELemento [%d][%d]: ", f, c);
			scanf("%f", &dato);
			mat[f][c]=dato;
		}
	}
}
imprimir_matriz(float **mat, int fil, int col){
	int f, c;
	
	for(f=0;f<fil;f++){
		for(c=0;c<col;c++){
			printf("[%d][%d] : %.1f \t", f, c, mat[f][c]);
			
		printf("\n");
		}
	}
}
void destruir_matriz(float **mat, int fil){
	int x;
	
	for(x=0;x<fil;x++){
		free(mat[x]);
	}
	free(mat);
}
