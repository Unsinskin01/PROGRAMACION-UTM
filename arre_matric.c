#include<stdio.h>
main(){
	int renglon;
	char arreglo[5][60]={"Lunes", "Martes", "Miercoles", "Jueves", "Viernes"};
	
	for(renglon=0;renglon<5;renglon++){
		
		puts(arreglo[renglon]);
		printf("\n");
	}
	return 0;
}
