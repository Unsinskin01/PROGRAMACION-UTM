#include<stdio.h>
#define FIL 10
#define COL 20
void ingresaDatos(int m[][COL], int fil, int colum);
void imprimeMatriz(int m[][COL], int filas, int columnas);

main(){
	int matriz[FIL][COL]={{0}};
	int x, y, fila, col;
	printf("Indica el toral de filas (1 a 10): ");
	scanf("%d", &fila);
	printf("Indica el toral de columnas (1 a 20): ");
	scanf("%d", &col);
	
	printf("\n Ingresar datos de la matriz de %dx%d\n", fila, col);
	ingresaDatos(matriz, fila, col);
	printf("Contenido de la matriz\n ");
	imprimeMatriz(matriz, fila, col);
	
	return 0;
}
void ingresaDatos(int m[][COL], int filas, int columnas){
	int x, y;
	for(x=0;x<filas;x++){
		for(y=0;y<columnas;y++){
			printf("valor para el elemento [%d][%d]: ", x, y);
			scanf("%d", &m[x][y]);
			
			printf("\n");
			
		}
	}
}
void imprimeMatriz(int m[][COL], int filas, int columnas){
	int i, j;
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("\t%d\t", m[i][j]);
			
			printf("\n");
			
		}
	}
}
