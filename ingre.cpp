#include<stdio.h>
#define fIL 10
#define COL 20
void ingresaDatos(int m[][COL], int fil, int colum);
void imprimeMatriz(int m[][COL], int filas, int columnas);

main(){
	int matriz[FIL][COL]={{0}};
	int x, y, fil, col;
	printf("Indica el toral de filas (1 a 10): ");
	scanf("%d", &fila);
	printf("Indica el toral de columnas (1 a 20): ");
	scanf("%d", &col);
	
	printf("\n Ingresar datos de la matriz de %dx%d\n", fil, col);
	ingresaDatos(matriz, fil, col);
	printf("Contenido de la matriz\n ");
	imprimeMatriz(matriz, fil, col);
	
	return 0;
}
void ingresaDatos(int m[][COL], int fil, int colum){
	
}
void imprimeMatriz(int m[][COL], int filas, int columnas){
	
}
