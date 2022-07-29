//----------------------------------//
// GUIA DE EJERCICIOS: STRINGS      //
// ALUMNO: GABRIEL B. GUERETA TADEI //
// CURSO: 5 "A" E.L.C.A.            //
// EJERCICIO N° --> 7               //
//----------------------------------//

/*
	-"A partir de acá se pueden utilizar funciones de la biblioteca estándar (strlen, strcpy, strcmp)"
  ENUNUCIADO:
  > El usuario ingresará 5 nombres de personas y sus edades (número entero). 
Luego de finalizar el ingreso, muestre en pantalla el nombre de la persona más joven.
El ingreso se realiza de este modo: nombre y edad de la primera persona, luego nombre y edad de la segunda, etc...
Nota: no hay que almacenar todos los nombres y todas las notas.
*/
//Lib STDIN STDOUT
#include <stdio.h>
//Lib Aplicada
#include <string.h>

int main(void){

	
	char nombre[100];
	int edad_mas_chico;
	
	char temp_pointer[100];
	int temp_int;

	
	//SOLICITO A STDIN LOS DATOS DE LAS 5 PERSONAS SOLICITADAS
	puts("INGRESAR:");
	for(short numero_total_de_personas =1; numero_total_de_personas <= 5; numero_total_de_personas++){
	
		printf("NOMBRE DE LA %d° PERSONA: " ,numero_total_de_personas);
		scanf("%s" ,temp_pointer);

		printf("\nEDAD DE LA %d° PERSONA: " ,numero_total_de_personas);
		scanf("%d" ,&temp_int);

		puts("\n");


		if(temp_int > edad_mas_chico){
		
		//lo que hay en temp se copia en edad_mas_chico
		strcpy(nombre, temp_pointer);
		
		edad_mas_chico = temp_int;

		}

	}
    
    //OFRECIENDO LOS DATOS A STDOUT PEDIDOS POR EL ENUNCIADO 
    printf("LA PERSONA MAS JOVEN SE LLAMA: %s" ,nombre);
    
    
	return 0;
}