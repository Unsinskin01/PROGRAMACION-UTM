#include<stdio.h>

void estacion(float tmp);
main (){
	float dato;
	int temps, x;
	printf("Cuantas temperaturas ingresara: ");
	scanf("%d", &temps);
	for(x=1;x<=temps;x++){
	printf("\nIngrese la temperatura: \n");
	scanf("%f", &dato);
	estacion(dato);
}
	fflush(stdin);
	getchar();
	
	return 0;
}

void estacion(float tmp){
if(tmp>=0 && tmp<=28){
	if(tmp>=28)
		printf("\n Es primavera");
	if(tmp<28 && tmp>=22)
		printf("\n Es verano");
	if(tmp<22 && tmp>=19)
		printf("\n Es oto%co", 164);
	if(tmp<19)
		printf("\n Es invierno");
	}else{
		printf("\n La temperatura no es valida");
	}
}
