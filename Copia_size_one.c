#include <stdio.h>
#define SIZE 
main(){
	int original[SIZE];
	int copia[SIZE];
	int i;
	for(i=0;i<SIZE;i++){
		copia[i]=original[i];
	}
	for(i=0;i<SIZE;i++){
		printf("Copia[%d] : %d \n", i, copia[i]);
	}
	printf("\n");
	return 0;
}
