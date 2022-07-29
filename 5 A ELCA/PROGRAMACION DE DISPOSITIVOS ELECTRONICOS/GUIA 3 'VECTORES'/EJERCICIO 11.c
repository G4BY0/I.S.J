#include <stdio.h>

int main(){
    
	//contexto
	puts("Ejercicio 11:\nDado un vector de enteros A con 3 posiciones y otro B de 10 posiciones, indique si todos los elementos de A se encuentran al menos una vez en B, o no.");
	//declaro
	int enterosA[3];
	int enterosB[10];
	int flag_al_menos_una_vez = 0;
	
	//logica de comprobacion
	for(int i = 0; i < 3 ; i++){
		for(int j = 0; j < 10; j++){
		    
		    if(enterosB[j] == enterosA[i]){
		        
		        flag_al_menos_una_vez = 1;
		        break;
		    }
		    
		}
		
	}
	
	if(flag_al_menos_una_vez == 1){
		
		puts("\nTodos los elementos de A se encuentran al menos una vez en el Vector: \"enteros B\"");
		
	}
	
	else{
		
		puts("\nTodos los elementos de A no se encuentraron ni al menos una vez en el Vector: \"enteros B\"");
		
	}
	
	return 0;
}