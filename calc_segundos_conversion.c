#include<stdio.h>
void convertir1(int *h, int *s);
void convertir2(int *h, int *m, int *s);
void convertir3(int *h, int *m, int *s);
main(){
	int seg, min, hrs, aux;
	
	printf("Ingrese su total de segundos: ");
	scanf("%d", &seg );
	aux=seg;
	convertir1(&hrs);
	printf("\n En %d segundos hay: ", aux);
	printf("%d horas", hrs);
	convertir2(&min);
	printf("hay %d minutos ", min);
	covertir3(&seg);
	printf("hay %d segundos ", seg);
	fflush(stdin);
	getchar();
	return 0;
	
}
void convertir1(int *h, int *s)
{
int residuo;
	*h=(*s)/3600;
	residuo=(*s)%3600;
	
}
void convertir2(int *h, int *m, int *s)
{
int residuo;
	*h=(*s)/3600;
	residuo=(*s)%60;
	*m=residuo/60;
	
	
}
void convertir3(int *h, int *m, int *s)
{
int residuo;
	*h=(*s)/3600;
	residuo=(*s)%3600;
	*m=residuo/60;
	*s=residuo%60;
	
}
