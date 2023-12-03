#include<stdio.h>
float conversionXtemperatura(int temp);
float conversionXtemperatura(int tempe);
float conversionXmasa(int mas);
float conversionXmasa(int masa);
float conversionXlongitud(int longi);
float conversionXlongitud(int longitud);
main(){
	float unidades, uni, temp1,temp2;
	printf("Selecciones una opcion del 1 al 4: \n\n");
	printf("1. Temperatura\t 2. Masa\t 3. Longitud\t 4. Terminar");
	scanf("%d", &unidades);
	switch(unidades) {
		1:
		printf("Temperatura");
		printf("selecciona de grados \n1)celcius a farenheit \n2)farenheit a celcius");
		scanf("%d", &uni);
		switch(uni){
		
		1;
			temp1=conversionXtemperatura(temp);
			printf("De %d celcius a farenheit son: ", uni, temp1);
			break;
		2;
		temp2=conversionXtemperatura(tempe);
		printf("De %f farenheit a celcius: %f \n",uni, temp2 );
		
		break;
	}
	default:
}
	
	
	fflush(stdin);
	getchar();
	return 0;
}

float conversionXtemperatura(float temp){
	float conver;
	conver= uni*(9/5)+32;
	return conver;
}
