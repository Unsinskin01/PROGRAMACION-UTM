#include<stdio.h>
void LeerDatos(float *ptrRadio);
float AreaCirc(float r);
float PeriCirc(float r);
void EscribirRes(float a, float pe);

main(){
	float radio, peri, area;
	LeerDatos(&radio);
	area=AreaCirc(radio);
	peri=PeriCirc(radio);
	EscribirRes(area, peri);
	
	return 0;
}
void LeerDatos(float *ptrRadio){
	float x;
	printf("Ingresa el radio: ");
	scanf("%f", &x);
	*ptrRadio=x;
}
float AreaCirc(float r){
	return (2*3.1416*r*r);
}
float PeriCirc(float r){
	return (2*3.1416*r);
}
void EscribirRes(float a, float pe){
	printf("El area es %f \n", a);
	printf("El preimetro es %f\n", pe);
}
