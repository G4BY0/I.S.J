#include <stdio.h>

int main(){
	//contexto
	puts("Ejercicio 7:\nEl usuario ingresa datos de 5 microprocesadores. Se cuenta con su precio (float) y su velocidad en gigahertz (float).\nMostrar en pantalla si el microprocesador más caro es también el más rápido, o no.");
	
	//declaracion
	float precio[5];
	float gigahertz[5];
	int flag_mas_caro = 0;
	int flag_mas_rapido = 0;
	int flag_coincidencia = 0;
	
	puts("Ingrese el precio y la velocidad en gigahertz de cada procesador...");
	
	//guardado de datos ingresados por el teclado
	for(int i = 0 ; i < 5; i++){
		
		printf("\n          %d° Precio: " ,i + 1);
		scanf("%f",&precio[i]);
		printf("\n%d° Velocidad en Ghz: " ,i + 1);
		scanf("%f" ,&gigahertz[i]);
		
		//logica de flags
		if(precio[i] > flag_mas_caro){
			
			flag_mas_caro = precio[i];
			
		}
		
		if(gigahertz[i] > flag_mas_rapido){
			
			flag_mas_rapido = gigahertz[i];
			
		}	
	}
	
	
	for(int j = 0; j < 5; j++){
		
		if(precio[j] == flag_mas_caro && gigahertz[j] == flag_mas_rapido){
			
			flag_coincidencia = 1;
			
		}
		
	}
	
	
	if(flag_coincidencia == 1){
		puts("El mas caro también es el más rapido");
		
		
	}
	
	else{
		
		puts("El mas caro no es también es el más rapido");
		
	}
	
   return 0; 
}