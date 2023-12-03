#include<stdio.h>

void prueba(int *ptra); //prototipo de funcion

main(){
	int a;
	a=12;
	printf("a  = %d\n", a);
	prueba(&a);
	printf("a' = %d \n", a);  //llamada a la funcion ncon direccion de a
	fflush(stdin);
	getchar();
	
	return 0;
}
void prueba(int *ptra){      //definicion de la funcion
	*ptra=3;                 //modificacion del contenido a
}
