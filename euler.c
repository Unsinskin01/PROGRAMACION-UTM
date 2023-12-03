#include <stdio.h>
#include <stdlib.h>
double calcularEuler(int n);
main(){
	int n;
	double resultado=0;
	printf("Ingresa un valor entero positivo para calcular la funcion euler: \n");
	scanf("%d", &n);
	resultado=calcularEuler(n);
	
	printf("El resultado de Euler con n = %d es: %lf\n", n, resultado);
	system("pause");
	return 0;
}
double calcularEuler(int n){
	int i;
	double factorial=1, euler=1;
	for(i=1;i <= n;i++) {
		factorial *= i;
        euler += 1 / factorial;
}
return euler;
}
