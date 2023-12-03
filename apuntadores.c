#include<stdio.h>
main(){
	int i, j ,*p;
	i=10;
	p=&i;
	//*p=15;// 
	
	printf("Contenido de i= %d \n", i);
	printf("Contenido de p= %p \n", p);
	printf("lo apuntado por p= %d\n", *p);
	
	p=&j;
	*p=-2;
	
	printf("Contenido de i= %d \n", j);
	printf("Contenido de p= %p \n", p);
	printf("lo apuntado por p = %d\n", *p);
	
	fflush(stdin);
	getchar();
	return 0;
}
