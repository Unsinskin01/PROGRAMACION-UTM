#include<stdio.h>

double Promedio();
int main(){
	double res;
	res=Promedio();
	printf("El promedio es %5.2lf\n", res);
	return 0;
}
double Promedio(){
	int i;
	double suma=0, cali;
	
	for(i=0;i<4;i++) {
		printf("Ingrese la calificacion %d:", i+1);
		scanf("%lf", &cali);
		suma=suma+cali;
		
	}
return (suma/i);
}
