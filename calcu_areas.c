#include <stdio.h>

void areatrapecio(float *area);
void areacirculo(float *area);
void areatriangulo(float *area);
void arearectangulo(float *area);

main (){
	float area;
	int op;
	
	while(op!=5){
	printf("\nSeleccione una de las opciones\n");
	printf("1.- Area de un trapecio\n");
	printf("2.-Area de un circulo\n");
	printf("3.-Area de un triangulo\n");
	printf("4.-Area de un rectangulo\n");
	printf("5.-salir\n");
	scanf("%d",&op);
	
	    if(op!=5){
	        switch (op){
		        case 1:
		        	areatrapecio(&area);
		        	break;
		        case 2:
		        	areacirculo(&area);
		        	break;
		        case 3:
		        	areatriangulo(&area);
		        	break;
		        case 4:
		        	arearectangulo(&area);
		        	break;
		        default :
		        	printf("Error\n");
		    }
	    }
    }
    printf("Precione enter para cerrar el programa");
    fflush(stdin);
    getchar();
    
    return 0;
}

void areatrapecio(float *area){
	float B,b,h;
	printf("ingrese la base mayor:\n");
	scanf("%f",&B);
	
	printf("ingerse la base menor:\n");
	scanf("%f",&b);
	
	printf("ingrese a altura:\n");
	scanf("%f",&h);
	
	*area=((B+b)/2)*h;
	
	printf("El area del trapecio es: %f\n",*area);
}

void areacirculo(float *area){
	float r;
	
	printf("Ingrese el radio:\n");
	scanf("%f",&r);
	
	*area=3.1416(r*r);
	
	printf("El area del circulo es: %f\n",*area);
}

void areatriangulo(float *area){
	float B,h;
	printf("ingrese la base:\n");
	scanf("%f",&B);
	
	printf("ingrese a altura:\n");
	scanf("%f",&h);
	
	*area=(B*h)/2;
	
	printf("El area del triangulo es: %f\n",*area);
}

void arearectangulo(float *area){
	float B,h;
	printf("ingrese la base:\n");
	scanf("%f",&B);
	
	printf("ingrese a altura:\n");
	scanf("%f",&h);
	
	*area=B*h;
	
	printf("El area del trapecio es: %f\n",*area);
}
