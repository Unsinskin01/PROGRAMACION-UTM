//calcular el area y el perimetro//
#include <stdio.h>
#include <stdlib.h>

int main(){
	float area, base, altura, perimetro;
	int c=2;
	
	printf("Ingrese la base de su rectangulo \n");
	scanf("%f",&base);
	
	printf("Ingrese la altura de su rectangulo \n");
	scanf("%f",&altura);
	
	area=base*altura;
	perimetro=(base*altura)*c;
	
	printf("su area es %f\n", area);
	printf("Su perimetro es %f\n", perimetro);
	
	system("pause");
	
	return 0;
}
