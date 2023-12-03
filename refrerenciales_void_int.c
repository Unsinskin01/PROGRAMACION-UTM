#include<stdio.h>
int sumarXvalor(int x, int y);
void sumarXreferencia(int n1, int  n2, int *ptrRes);

int main (){
	int a=5, b=2, resultado=0, otrores=0;
	printf("Valores %d  %d\n", a, b);
	printf("Paso de parametros por valor \n");
	resultado=sumarXvalor(a,b);
	printf("LA SUMA ES: %d\n", resultado);
	
	printf("Paso de parametros por referencia \n");
	sumarXreferencia(a, b, &otrores);
	printf("La suma por referencia es; %d \n", otrores);
	fflush(stdin);
	getchar();
	
	return 0;
}
int sumarXvalor(int x, int y){
return (x+y);
}

void sumarXreferencia(int n1, int  n2, int *ptrRes){
	*ptrRes=n1+n2;
}
