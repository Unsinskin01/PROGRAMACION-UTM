#include<stdio.h>
#define fil 2
#define col 3
main(){
	int renglon, columna;
	int datos[fil][col]={{84,12,67}, {14,73,95}};
	
	for(renglon=0;renglon<fil;renglon++){
		for(columna=0;columna<col;columna++){
			printf("datos[%d][%d] = %d\n", renglon,columna,datos[renglon][columna] );
			printf("\n");
		}
	}
	return 0;
}
