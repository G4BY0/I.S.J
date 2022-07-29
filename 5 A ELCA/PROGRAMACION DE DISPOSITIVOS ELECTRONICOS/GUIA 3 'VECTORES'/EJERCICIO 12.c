#include <stdio.h>

int main(){
	//contexto
	puts("Ejercicio 12:\nDados los vectores del ejercicio anterior, imprima todas las combinaciones.\nPor ejemplo: 1ro de A con 1ro de B, 1ro de A con 2do de B, 1ro de A con 3ro de B.... 2do de A con 1ro de B, 2do de A con 2do de B... etc.");
	
	int enterosA[3];
	int enterosB[10];
	
	for(int  i = 0; i < 3; i++){
		for(int j = 0; j < 10 ; j++){
		
			    printf("\nCombinacion: A[%d] con B[%d]\n" ,i, j);
				
		}
	}
	
	return 0;
}