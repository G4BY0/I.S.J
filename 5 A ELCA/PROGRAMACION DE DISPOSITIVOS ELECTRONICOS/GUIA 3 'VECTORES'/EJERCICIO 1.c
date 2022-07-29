#include <stdio.h>

int main(){
	//Contexto
    puts("1 Ejercicio:\nPermita el ingreso de 5 números enteros y guárdelos en un vector.\nMuestre el vector en pantalla, al derecho y al revés.\n");
	
	//declaraciones
	long a[5];
	int i;
	
	    //logica
	    for(i = 0; i <= 4; i++){
    		
    		printf("INGRESE SU %d° valor: " ,i + 1);
    		scanf("%ld" ,&a[i]);
    		
	    }
	//impresion a la salida del vector con 5 espacios desde el último guardado hasta el primero y viceversa
	printf("\n%ld %ld %ld %ld %ld" ,a[4], a[3], a[2], a[1], a[0]); //Último al primero
    printf("\n%ld %ld %ld %ld %ld" ,a[0], a[1], a[2], a[3], a[4]); //Primero al último
	
	
	
	return 0;
	
}