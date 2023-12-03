#include <stdio.h>
#define SIZE 3
main(){
	int original[SIZE]={6,1,4};
	int copia[SIZE]={6,1,5};
	int i, soniguales;
	soniguales=1;
	while(i<SIZE&&soniguales){
		if(copia[i]!= original[i])
		soniguales=0;
		i++;
		if(soniguales)
		printf("Los arreglos son iguales \n");
		else
		printf("Los arreglos son diferentes \n");
	}
	return 0;
}
