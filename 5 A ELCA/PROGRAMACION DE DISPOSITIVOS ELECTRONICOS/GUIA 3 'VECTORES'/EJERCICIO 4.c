#include <stdio.h>

int main(){
	//contexto
	puts("Ejercicio 4:\nPermita el ingreso de 10 enteros positivos.\nRecorra el vector y todo número par que encuentre reemplacelo por cero. Muestre en pantalla el resultado.");
	
	//declaraciones
	int i;
	long entero[10];
	
	//logica de almacenamiento de datos que ingresa el usuario
	for(i = 0; i < 10; i++){
		
		printf("\nIngrese su %d° valor entero: " ,i + 1);
		scanf("%ld" ,&entero[i]);
		
		//logica pedida por el enunciado
		if(entero[i]%2 == 0){
			
			entero[i] = 0;
			
		}
	}
	
	//A la salida muestrea el valor del Vector
	for(i=0; i < 10; i++){
		
		printf("Vector[%d] = %ld\n" ,i ,entero[i]);	
	}
	
	return 0;
}