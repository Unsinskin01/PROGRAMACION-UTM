#include<stdio.h>
#include<stdlib.h>
int maximo2(int x, int y);
int maximo3(int a, int b, int c);

main(){
	int num1, num2, num3;
	printf("Introduce tres enteros: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	printf("El mayor es: %d",maximo3(num1, num2, num3 ));
	system("pause");
	return 0;
	
}

int maximo2(int x, int y){
if (x>y)
return x;
else
return y;
}

int maximo3(int x, int y, int z)
{
	return maximo2(maximo2(x,y), z);
}


