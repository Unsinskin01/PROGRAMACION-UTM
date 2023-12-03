#include<stdio.h>

int maximo (int, int, int);
main(){
	int a, b, c;
	printf("Introduce tres enteros: ");
	scanf("%d%d%d", &a, &b, &c);
	printf("El mayor es: %d", maximo(a, b, c));
	fflush(stdin);
	getchar();
	
	return 0;
}
int maximo(int x, int y, int z){
	int max=x;
	
	if(y>max)
	max=y;
	
	if(z>max)
	max=z;
	
	return max;
}
