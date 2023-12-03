#include<stdio.h>
int mi_strcpy(char *dest, char *orig);
main (){
	char frase[]="osa";
	char cpyFrase[20];
	mi_strcpy(cpyFrase, frase);
	
	printf("La frase original es \'%s\' \n", frase);
	printf("La copia es \'%s\' \n ", cpyFrase);
	return 0;
}
int mi_strcpy(char *dest, char *orig){
	while((*dest = *orig) !='\0'){
		dest=dest+1;
		orig=orig+1;
	}
}
	
	
