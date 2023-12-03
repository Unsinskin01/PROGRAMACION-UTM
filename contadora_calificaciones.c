#include<stdio.h>
#include<stdlib.h>
int main(){
	int matricula, contapro=0, contarep=0, alumn=1;
	float cali1, cali2, promedio;
	
	
	while(matricula != 9999){
		printf("Ingrese la matricula del alumno: ");
	scanf("%d", &matricula);
	printf("Ingrese la calificacion 1 del alumno: ");
	scanf("%f", &cali1);
	printf("Ingrese la calificacion 2 del alumno: ");
	scanf("%f", &cali2);
		
		printf("La matricula del alumno %d es: %d\n", alumn, matricula);
		printf("calificacion 1: %f\n", cali1);
		printf("calificacion 2: %f\n", cali2);
		printf("El promedio es: %f\n", promedio=(cali1+cali2)/2);
		
		if(promedio>=6 && promedio<=10) {
			contapro++;
			if(promedio>=0 && promedio<6){
			
				contarep++;
			}
		
			
}
alumn++;
getchar();
	}
	printf("El total de aprobados fueron: %d\n", contapro);
	printf("El total de reprobados fueron: %d\n", contarep);
	
	system("pause");
	return 0;
	
}
