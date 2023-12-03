#include <stdio.h>
#define N 10
main(){
	int array[N],i, j;
	printf("Ingrese 10 valores de caracter entero");
	for(i=0;i<N;i++){
		printf("\nIngresar numero: ");
		scanf("%d", &array[i]);
		
		for(j=0;j<i;j++){
			if(array[j]==array[i]){
				printf("\nNumero repetido\n");
				i--;
				break;
			}
		}
	}
	for(i=0;i<N;i++){
		printf("\n%d\n", array[i]);
	}
	return 0;
}
