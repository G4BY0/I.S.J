#include <stdio.h>


int main(){
	//contexto.
	puts("Ejercicio 5:\nEl usuario ingresa 5 edades (enteras) y 5 sueldos (float), correspondientes a 5 personas. Muestre en pantalla los vectores con los valores ingresados.\nMuestre en qué posición se encuentra la persona de más edad y en qué posición se encuentra el mayor sueldo. ");
	//declaracion.
	int edades[5];
	float sueldos[5];
	int flag_mayor_sueldo = 0;
	int flag_mayor_edad = 0;
	float mayor_sueldo = 0;
	int mayor_edad = 0;
	
	//ingreso de datos por teclado y almacenamiento de valores.
	for(int i = 0; i < 5; i++){
		
		printf("\nIngrese la edad de la %d° persona:     " ,i + 1);	
		scanf("%d" ,&edades[i]);
	
		printf("Ingrese el sueldo de la %d° persona: $ " ,i + 1);	
		scanf("%f" ,&sueldos[i]);
	
		
		if(mayor_edad < edades[i]){
		    mayor_edad = edades[i];
			flag_mayor_edad = i;
			
		}
		
		if(mayor_sueldo < sueldos[i]){
		    mayor_sueldo = sueldos[i];
			flag_mayor_sueldo = i;
			
		}
		
		
	}
	
	//marco separacion a la salida
	puts("\nLISTA DE EDADES Y SUELDOS:");
		
	//Logica que muestra a la salida los dos Vectores junto a lo que almacenan
	for(int i = 0; i < 5; i++){
	
		printf("\n Vector_Edades[%d] =  %d\nVector_Sueldos[%d] = $ %.2f\n" ,i ,edades[i] ,i ,sueldos[i]);
		
	}
		
		
		
	printf("\nLa persona con la mayor edad esta en la posición: %d°\nLa persona con el mayor sueldo esta en la posición: %d°\n" ,flag_mayor_edad ,flag_mayor_sueldo);
		
	//logica agregada en Ejercicio 5b pedida por el enunciado.
	if(flag_mayor_edad == flag_mayor_sueldo){
		
		puts("La persona mas grande es también la que más gana");	
		
		
	}
	else{
		
		puts("La persona mas grande no es también la que más gana");	
		
	}


	return 0;
}	

