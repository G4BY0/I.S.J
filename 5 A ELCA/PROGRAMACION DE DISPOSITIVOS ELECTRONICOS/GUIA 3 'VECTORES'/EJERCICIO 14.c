#include <stdio.h>


int main(){
	//contexto
	puts("Ejercicio Dado un vector de 8 floats, imprima en pantalla si todos sus elementos son idénticos, o no.\n");
	
	float a[8];
	
	
	if(a[7] == a[6] == a[5] == a[4] == a[3] == a[2] == a[1] == a[0]){
		
		puts("Todos los datos dentro del vector son identicos");
		
	}
	
	else{
		
		puts("Todos los datos dentro del vector no son identicos");
		
	}
	
}