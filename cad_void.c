#include<stdio.h>
void copiarCadena(char s[], char cp[]);
main(){
	char palabra[30], copia[30];
	int tam;
	
	printf("Ingrese una palabra: ");
	gets(palabra);
	copiarCadena(palabra,copia);
	
	printf("La copia es: %s", copia);
	return 0;
}
void copiarCadena(char s[], char cp[]){
	int i, posi=0;
	for(i=0;s[i]!= '\0';i++){
		if(s[i]!='a'){
			cp[posi]=s[i];
			posi=posi+1;
		}
	}
	cp[posi]='\0';
}
