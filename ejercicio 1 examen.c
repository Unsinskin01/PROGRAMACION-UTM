//diseñe un programa en c que solicite un numero entero positivo n. el programa leera n numeros positivos e imprimira el promedio de n numeros y el menor de todos los numeros leidos//
#include<stdio.h>
#include<stdlib.h>
int main(){
	int num, conta, nummenor;
	printf("Ingrese un numero entero para saber cuantos caracteres ingresara: ");
	scanf("%d", &num);
	int x=1, val, suma=0;
	float promedio;
	printf("Ingrese un numero: ");
		scanf("%d",&val);
			nummenor=val;
			num=num-1;
	while(x<=num) {
		printf("Ingrese un numero: ");
		scanf("%d",&val);
		suma=suma+val;
	
		if(val<nummenor){
		
		nummenor=val;
	}
	x++;
}
promedio=suma/x;
printf("el promedio total seria %f\n", promedio);
printf("El numero menor es: %d\n", nummenor);
system("pause");
return 0; 
}
