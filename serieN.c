#include<stdio.h>

int main(){
	int mivariable, x;
	float suma=0;
	printf("Ingrese un valor de tipo entero: ");
	scanf("%d", &mivariable);
	for(x=2;x<=mivariable;x++) {
		printf("1/%d \t", x);
		if(x%2==0){
		suma=((1/x)-(1/x));
	    }
		if(x%2!=0){
		
		suma=((1/x)+(1/x));
	    }
	
    }
	
	printf("%f\n", suma);
	
	fflush(stdin);
	getchar();
	
	return 0;
}

