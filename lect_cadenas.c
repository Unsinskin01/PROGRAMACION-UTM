#include<stdio.h>
#define MAXLON 80
main(){
	int i;
	char frases[3][MAXLON];
	
	for(i=0;i<3;i++){
		printf("Ingrese la cadena %d: ", i);
		gets(frases[i]);
		
	}
	
	for(i=0;i<3;i++){
		puts(frases[i]);
	}
	return 0;
}
