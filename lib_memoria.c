#include<stdio.h>
#include<stdlib.h>

main (){
	int **m, filas, columnas, i, j;
	printf("Total de filas:\n");
	scanf("%d", &filas);
	printf("Total de columnas:\n ");
	scanf("%d", &columnas);
	m= (int **)malloc(filas*sizeof(int*));
	for(i=0;i<filas;i++){
		m[i]=(int*)malloc(columnas*sizeof(int));
	}
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("Ingresa m[%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("%d \t", m[i][j]);
			printf("\n");
		}
	}
	
	for(i=0;i<filas;i++){
		free(m[i]);
	}
	free(m);
	return 0;
}
