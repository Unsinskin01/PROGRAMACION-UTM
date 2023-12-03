#include<stdio.h>
#include<stdlib.h>

main(){
	float *v=NULL;
	int elemen=0, i;
	char c;
	
	do{
		v=(float *) realloc((float *)v, (elemen+1)*sizeof(float));
		printf("\n Ingresa numero: ");
		fflush(stdin);
		scanf("%f", &v[elemen]);
		printf("Quieres ingresar otro numero (S o cualquier tecla para terminar) \n");
		fflush(stdin);
		c= getchar();
		elemen++;
	}while(c=='s' || c=='S');
	printf("\n Numeros ingresados \n");
	for(i=0;i<elemen;i++){
		printf("v[%d] contiene %.1f \n", i, v[i]);
	}
	
	return 0;
}
