#include <stdio.h>


int main(){
	//contexto
	puts("Ejercicio 8:\nDeclare un vector de 10 enteros y carguelo con 1 y 0 alternativamente. Es decir, en la primer posición un 1, en la segunda un 0, en la tercera un 1, en la cuarta un 0... etc.\nMuestrelo en pantalla para verificar que quedó bien cargado.\n");
	
	
	//declaracion y cargado de valores solicitados
	int Vector[10] = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
	int i;
	
	//mostrando a la salida lo cargado
	for(i = 0 ; i < 10 ; i++){
		
		printf("Vector[%d] = %d\n" ,i ,Vector[i]);
		
	}
	return 0;
}