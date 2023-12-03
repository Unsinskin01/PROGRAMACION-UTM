#include <stdio.h>
#include <stdlib.h>

int main (){
	int num, prim, i;
	
	printf("Ingrese un numero entero positivo: ");
	scanf("%d", &num);
	
	 for (i = 2; i * i <= num; i++) {
        if (prim=(num % i == 0)) 
    
     if (prim==i
	 ) {
        printf("%d es un numero primo.\n", num);
    } else {
        printf("%d no es un número primo.\n", num);
    }

}
  
	system ("pause");
	return 0;
}
