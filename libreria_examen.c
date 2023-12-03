#include <stdio.h>

int main()
{
	int catego, academicos=0, cuentos=0, literatura=0, libro=0;
	float precio, total=0, total1=0, total2=0, total3=0;
	
	printf("Ingresa el precio del libro\n");
	scanf("\n%f", &precio);
	
	total= total + precio;
	
	while (precio != -1){
		printf("Sleccione la clasificación del libro vendido");
		printf("\n(1).- Academico");
		printf("\n(2).- Cuento");
		printf("\n(3).- Literatura\n");
		scanf("\n%d", &catego);
		
		switch(catego){
			case 1:
				academicos++;
				libro = libro +1;
				total1=total1+precio;
				break;
			case 2:
				cuentos=cuentos +1;
				libro = libro +1;
				total2=total2+precio;
				break;
			case 3:
				literatura +=1;
				libro = libro +1;
				total3=total3+precio;
				break;
		}
		printf("Ingresa el precio del libro\n");
		scanf("\n%f", &precio);
		
		total= total + precio;
		
	}
	printf("\La cantidad total de libros vendidos fue %d", libro);
	printf("\nEl total de lirbos de la categoria academicos son: %d", academicos);
	printf("\nEl total de lirbos de la categoria cuento son: %d", cuentos);
	printf("\nEl total de lirbos de la categoria literatura son: %d", literatura);
	printf("\nEl monto total de las ventas es de %1.2f", total+1);
		printf("\nEl monto total de las ventas de libro academicos es de %1.2f", total1);
			printf("\nEl monto total de las ventas de cuentos es de %1.2f", total2);
				printf("\nEl monto total de las ventas de literatura es de %1.2f", total3);
	return 0;
}
