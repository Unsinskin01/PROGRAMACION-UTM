#include<stdio.h>
#include<stdlib.h>

#define FIL 3  //FILAS: 3carreras
#define COL 2  //COLUMNAS: 2semestres
#define PROF 4 //PROFUNDIDAD: 

void Lectura(int a[][COL][PROF], int, int, int);
void Imprimir(int a[][COL][PROF], int, int, int);
void Funcion1(int a[][COL][PROF], int, int, int);
void Funcion2(int a[][COL][PROF], int, int, int);
void Funcion3(int a[][COL][PROF], int, int, int);


main(){
	int uni[FIL][COL][PROF];
	Lectura(uni, FIL, COL, PROF);
	Imprimir(uni, FIL, COL, PROF);
	Funcion1(uni, FIL, COL, PROF);
	Funcion2(uni, FIL, COL, PROF);
	Funcion3(uni, FIL, COL, PROF);

return 0; 
}
void Lectura(int a[][COL][PROF], int prof, int fil, int colum){
	int i,j,k;
	for(k=0;k<prof;k++){
		for(i=0;i<fil;i++){
			for(j=0;j<colum;j++){
				printf("\ Anio: %d \t carrera: %d \t semestre: %d");
				scanf("%d", a[i][j][k]);
			}
		}
		printf("\n");
	}
}
void Imprimir(int a[][COL][PROF], int row, int columna, int prof){
	int i,j,k;
	for(k=0;k<prof;k++){
		for(i=0;i<row;i++){
			for(j=0;j<columna;j++){
				printf("%d", a[i][j][k] );
			}
			printf("\n");
		}
		printf("\n");
	}
}
void Funcion1(int a[][COL][PROF], int filas, int columnas, int profun)
{int i, j, k, mayor, anioMayor, suma;
mayor = 0;
anioMayor = -1;
for (k=0; k‹profun; k++){         //por cada a n i o s e suma e l ingreso d e l o s 2 semestres d e L a s 3 carreras
suma=0;
for (1=0; i‹filas; i++){

	for( j = 0 ; j < columnas; j + + )
		suma †= a[i][j][k];
	if (suma > mayor){
		mayor = suma; anioMayor = k;
	}

printf("\n\n Anio con mayor ingreso de alumnos: %d ", anioMayor+1);
printf("In con un total de %d Alumnos", mayor);
}

void Funcion2(int a[][COL][PROF], int f1, int co, int pr){			//c a r r e r a c o n m a y o r n ú m e r o d e a l u m n o s e l ú l t i m o a ñ o
int i, j, mayor=0, carrera=-1, suma;
for (i=0; i<f1; i+)
{ suma = 0;
f o r ( j = 0 ; j<co ; j + + )
suma += a[j][i][pr-1]; //último año
if(suma > mayor)
{ mayor = suma;
carrera = i;
}
}
printf("In\n Carrera con mayor numero de alumnos: %d ", carrera+1);
printf("In con un total de %d Alumnos", mayor);
}

void funcion3(int a[][COL][PROF], int fil, int col, int pr)
{ int j, k, mayor=0, anioMay=-1, suma;
for(k=0; k<pr; k++)
{ suma=0;
for(j=0; j<col; j++)
suma += a[fil-1][j][k];

if(suma> mayor)
{mayor = suma;
anioMay=k;
}
}
}
