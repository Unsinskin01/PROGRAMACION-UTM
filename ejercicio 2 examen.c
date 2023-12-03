//crea un programa en lenguaje c que calcule la raiz cuadradade un numero positivo. el usuario puede porporcionar cualquien numero y como resultado se obtiene el valor aproximado de la raiz cuadrada. (se tiene una tolerancia de +-0.01, es decir raiz cuadrada de 4=2, donde el resultado)// 
#include<stdio.h>
int main() {
    int numero;
    float i, raiz=0;

   
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &numero);
    i=0;
    while(raiz<=numero) {
		raiz=i*i;
		i=i+0.01;
    	
}


printf("\n La raiz cuadrada de %d es: %f", numero, i);

fflush(stdin);
getchar();

return 0;
}
