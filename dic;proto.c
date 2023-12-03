#include<stdio.h>
int mi_strlen(char *s);
main (){
	char *s="Curso de C";
	char t[]="Nuevo curso de c++";
	printf("La cadena \'%s\' tiene %d caracteres \n", s,mi_strlen(s));
	printf("La cadena \'%s\' tiene %d caracteres \n", t,mi_strlen(t));
	
}
int mi_strlen(char *s){
	int n;
	for(n=0;*s!='\0';s++){
		n++;
	}
	return n;
}
