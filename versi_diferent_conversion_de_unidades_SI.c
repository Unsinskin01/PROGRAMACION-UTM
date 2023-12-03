#include<stdio.h>
void pausa(void);
void mostrar_menu(void);
int eleccion(void);
void cm_a_pulgadas(void);
void grados_a_farenheit(void);
double leerdatos(void);

main(){
	int fin=0;
	while(fin!=1) {
		mostrar_menu();
		switch(eleccion()){
			case 1:
				cm_a_pulgadas();
				break;
			case 2:
				grados_a_farenheit();
				break;
			case 3:
				fin=1;
				break;
			default:
				printf("\n Opcion erronea\n");
				pausa();
		}
}
return 0;
}
void pausa(void){
	fflush(stdin);
	printf("\nOpima cualquier tecla para terminar");
	getchar();
}
void mostrar_menu(void){
	printf("\n::: MENU :::\n");
	printf("\n1. Centimetros a Pulgadas");
	printf("\n2. Celsius a Farenheit");
	printf("\n3. Para Terminar");
}
int eleccion(void){
	int dato;
	printf("\n Escriba la opcion: ");
	scanf("%d", &dato);
	return dato;
}
void cm_a_pulgadas(void){
	double centime, pulgadas;
	printf("\n Indique los Centimetros a convertir: ");
	centime=leerdatos();
	pulgadas=centime/2.54;
	printf("%.3f centimetros = %.3f pulgadas \n", centime, pulgadas);
	pausa();
}
void grados_a_farenheit(void){
	double grados, fah;
	printf("\n Indique los Grados a convertir: ");
	grados=leerdatos();
	fah=(((grados*9)/5)+32);
	printf("%.3f Grados = %.3f Fahrenheit \n", grados, fah);
	pausa();
}
double leerdatos(void){
	double valor;
	scanf("%lf", &valor);
	return valor;
}










