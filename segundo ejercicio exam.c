

#include <stdio.h>
int main(){
    int n,c1=1;
    float c, a=0;
    
    printf("Ingrese la cantidad de numeros a evaluar\n");
    scanf ("%d", &n);
    
    if (n>=0)
       {      for(c=1;c1<=n;c=c+2){
      	 c1+=1;
        if (c1%2==0){
        a=a-(4/c);
    	}
        else{
        a=a+(4/c);
        }
        }
        a=a*-1;
       printf("El resultado de la sumatoria de los %d valores dados es %.2f",n,a);
                                }
    else{
         if(n<0){
                 printf("ERROR, Numero negativo");
                 }
                 }
    
    
    fflush(stdin);
    getchar();
    return 0;
