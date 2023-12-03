void EscribirRes(float a, float pe);
void LeerDatos(float *ptrRadio);
float AreaCirc(float r);
float PeriCirc(float r);
void EscribirRes(float a, float pe);

main(){
	float radio, peri, area;
	LeerDatos(&radio);
	EscribirRes(AreaCirc(radio), PeriCirc(radio));
	
	return 0;
}
//modificacion del codigo utilizando al apuntador como variable de lectura almacenando la direccion de memoria//
void LeerDatos(float *ptrRadio){
	printf("Ingresa el radio: ");
	scanf("%f", ptrRadio);
}
float AreaCirc(float r){
	return (2*3.1416*r*r);
}
float PeriCirc(float r){
	return (2*3.1416*r);
}
void EscribirRes(float a, float pe){
	printf("El area es %f \n", a);
	printf("El preimetro es %f\n", pe);
}
