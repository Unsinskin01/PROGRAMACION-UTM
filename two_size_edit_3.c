#include<stdio.h>
#define SIZE 20

main(){
	int i, tam;
	char cadena[SIZE], cadenaMay[SIZE];
	printf("Ingresa una cadena en minusculas: ");
	scanf("%s", cadena);
	
	i=0;
	while(cadena[i] !='\0'){
		printf("%c", cadena[i]);
		cadenaMay[i]=cadena[i]-32;
		i++;
	}
	tam=i;
	
	cadenaMay[tam]='\0';
	
	printf("\n");
	
	for(i=0;i<tam;i++)
		printf("%c", cadenaMay[i]);
		
	
	return 0;
}
