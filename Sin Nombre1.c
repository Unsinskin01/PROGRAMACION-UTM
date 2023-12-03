//Casa de cambio//
#include <stdio.h>
#include <stdlib.h>

int main() {
	float dolares, cash=20.4;
	
	printf("Ingrese la cantidad en dolares$ \n");
	scanf("%f", &dolares);
	
	dolares=dolares*cash;
	
	printf("su cambio a pesos es %f.0 \n", dolares);
	
	system("pause");
	return 0;
	 
}
