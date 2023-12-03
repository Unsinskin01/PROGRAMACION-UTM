#include<stdio.h>
main(){
	char x, *px, **ppx;
	x='A';
	px=&x;
	ppx=&px;
	printf("	*px accede a %c \n", *px);
	printf(" **ppx accede a %c \n ", **ppx);
	
	return 0;
}
