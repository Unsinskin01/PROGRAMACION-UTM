#include<stdio.h>
#define SIZE 5
int main(){
	int x[SIZE]={7, 5, 1, 3, 9}, y,k;
	
	printf("Elemento \t valor\t histograma");
	
	for(y=0;y<=SIZE-1;y++){
		printf("\n x[%d] \t\t %d\n", y, x[y]);
		for(k=0;k<x[y];k++){
			printf("%c", '+');
		}
		printf("\n");
	}
	return 0;
}
