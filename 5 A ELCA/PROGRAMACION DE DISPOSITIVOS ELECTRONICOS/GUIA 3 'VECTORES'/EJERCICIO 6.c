#include <stdio.h>


int main(){
	//contexto
	puts("Ejercicio 6:\nEl usuario ingresa el DNI (entero) de 10 estudiantes y su calificación (float).\nMuestre en pantalla el DNI de los estudiantes que aprobaron.");
	//declaraciones
	long DNI[10];
	float calificacion[10];
	int aprobados[10];
	
	//ingreso de datos por teclado y almacenamiento de valores.
	for(int i = 0; i < 10; i++){
		
		printf("\nIngrese el DNI del %d° Estudiante: " ,i + 1);
		scanf("%ld" ,&DNI[i]);
		
		printf("\nIngrese la calificacion del %d° Estudiante:" ,i + 1);
		scanf("%f" ,&calificacion[i]);
		
	}
	
	//muestro a la salida los que aprobaron (los que tienen la calificacion >= 6)
	puts("\nAPROBADOS:");
	for(int i = 0; i < 10; i++){
	
		if(calificacion[i] >= 6){
		
			printf("DNI: %ld\n" ,DNI[i]);
			
		}
		
		
	}
	return 0;
}