#include<stdio.h>
#include<stdlib.h>

void ingresaDato(int **b, int fila, int column);
void escribirmatriz(int **b, int fila, int column);

main(){
	int fil, col, i, j, **pm;
	printf("ingresa el total de filas: ");
	scanf("%d", &fil);
	printf("Ingresa el total de columnas: ");
	fflush(stdin);
	scanf("%d", &col);
	
	pm=(int **)malloc(fil*sizeof(int*));
	for(j=0;j<fil;j++){
		pm=(int *)malloc(col*sizeof(int));
	}
	ingresaDato(pm, fil, col);
	escribirmatriz(pm, fil, col);
	for(j=0;j<fil;j++){
		free(pm[j]);
		
	}
	free(pm);
	
	return 0;
}
void ingresaDato(int **b, int fila, int column){
	int i, j;
	
	for(i=0;i<fila;i++){
		for(j=0;j<column;j++){
			printf("Ingresa el dato [%d][%d]", i,j);
			fflush(stdin);
			scanf("%d",  &b[i][j]);
		}
	}
}

void escribirmatriz(int **b, int fila, int column){
	int i, j;
	printf("\n Contenido de la matriz\n");
	for(i=0;i<fila;i++){
		for(j=0;j<column;j++){
			printf("%d", b[i][j]);
			
			printf("\n");
			
		}
	}
}
	
	printf("\n Contenido usando apuntadores\n");
	for(i=0;i<fila;i++){
		for(j=0;j<column;j++){
			printf("%d", *(*(b+i)+j));
			
			printf("\n");
		}
	}
}

