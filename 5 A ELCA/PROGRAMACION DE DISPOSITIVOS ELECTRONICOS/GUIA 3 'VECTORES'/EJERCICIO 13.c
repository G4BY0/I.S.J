#include <stdio.h>

int main(){
	
	//contexto
	puts("Ejercicio 13:\nDado un vector con 5 enteros, imprima en pantalla si es monótono o no, es decir si todos los números son crecientes, decrecientes o ninguno de los anteriores.\n");
	
	
	int a[5];//= {0,0,0,0,0,0,0,0,0,0} (un ejemplo);
	
	//logica
	if(a[0] < a[1] < a[2] < a[3] < a[4]){
		
		puts("Vector con sucesiones monótonas crecientes");
		
	}
	
	else if(a[4] < a[3] < a[2] < a[1] < a[0]){
		
		puts("Vector con sucesiones monótonas decrecientes");
		
	}
	
	
	else{
		
		puts("Vector sin sucesiones monótonas");
		
	}
	
    
    /*decomentar en caso de querer ver el valor aleatorio que almacena el vector
    
    for(int i = 0; i < 5; i++){
        
        printf("a[%d] = %d\n" ,i ,a[i]);
        
    }
    
    */
    return 0;
}