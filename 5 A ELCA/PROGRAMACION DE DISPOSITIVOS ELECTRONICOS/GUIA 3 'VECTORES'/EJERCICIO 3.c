#include <stdio.h>


int main(){
	//contexto.
	puts("\nEjercio 3:\nPermita el ingreso de 5 flotantes. Muestre el vector en pantalla.\nLuego multiplique todos los valores por 1.65 y vuelva a mostrarlos.");
	
	//declaro.
	double a[4];
	int i;
	
	//logica de ingreso por el usuario y guardado de datos.
	for(i = 0; i < 5; i++){
		
		printf("\nIngrese su %d° flotante: " ,i);
		scanf("%lf" ,&a[i]);
		
	}
	
	/*	logica para mostrar valores y luego mostrar su resultado desp de ser
		multiplicados por 1.65													*/
	for(i = 0; i < 5; i++){
		
		printf("\n%.2lf x 1.65 = %.2lf" ,a[i] , a[i] * 1.65);
		
	}

	return 0;
}