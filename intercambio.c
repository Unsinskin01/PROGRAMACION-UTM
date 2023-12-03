#include <stdio.h>

void intercambiar(int *var1, int *var2);
main(){
	int a=5, b=7;
	printf("a vale %d y b vale %d \n", a, b);
	
	intercambiar( &a, &b);
	printf("Despues de la funcion a vale %d y b vale %d\n", a, b);
	fflush(stdin);
	getchar();
	return 0;
	
}
void intercambiar(int *var1, int *var2)
{
	int aux;
	aux=*var1;
	*var1=*var2;
	*var2=aux;
}
