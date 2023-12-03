#include<stdio.h>

float datoXentrada();
float calculaXperimetro();
float calculaXarea();
float mostrarXresultado();

main(){
	float w, x, y, z;
	w=datoXentrada();
	printf("%f",w);
	x=calculaXperimetro();
	printf("%f", x);
	y=calculaXarea();
	printf("%f", y);
	z=mostrarXresultado();
	printf("%f", z);
	
	fflush(stdin);
	getchar();
	return 0;
}
float datoXentrada(){
	float nume;
	printf("Ingrese el radio del circulo: ");
	scanf("%f", &nume);
	
	return nume;
}

float calculaXperimetro(){
	float perimetro;
	perimetro= (nume*2)*3.1416;
	return perimetro;
	
}
float calculaXarea(){
	float area;
	area=(3.1416*(nume*nume));
	return area;
}
float mostrarXresultado(){
	printf("EL DATO RECIBIDO ES: %f", nume);
	printf("\n EL PERIMETRO ES: %f", perimetro);
	printf("\n EL AREA ES: %f", area);
	return datos;
}
