#include<stdio.h>
void sumauno(int *numero);
main(){
	int mivariable=10;
	printf("Mi variable vale %d \n", mivariable);
	sumauno(&mivariable);
	printf("Mi variable vale %d \n", mivariable);
	sumauno(&mivariable);
	printf("Mi variable vale %d \n", mivariable);
	
	
	fflush(stdin);
	getchar();
	
	return 0;
}

void sumauno(int *numero){
	*numero=*numero+1;
	
}
