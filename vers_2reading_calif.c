#include<stdio.h>

void Promedio(double *ptrRes);
int main(){
	double res;
	Promedio(&res);
	
	printf("El promedio es %5.2lf\n", res);
	return 0;
}
void Promedio(double *ptrRes){
	int i;
	double suma=0, cali;
	
	for(i=0;i<4;i++) {
		printf("Ingrese la calificacion %d:", i+1);
		scanf("%lf", &cali);
		suma=suma+cali;
		
	}
	*ptrRes=(suma/i);
}
