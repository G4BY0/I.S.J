//----------------------------------//
// GUIA DE EJERCICIOS: STRINGS      //
// ALUMNO: GABRIEL B. GUERETA TADEI //
// CURSO: 5 "A" E.L.C.A.            //
// EJERCICIO N� --> 3               //
//----------------------------------//

/*
  ENUNUCIADO:
  > El usuario ingresa dos strings. Mostrar en pantalla si son iguales o no, es decir, si tienen las mismas letras en las mismas posiciones.
*/
//Lib STDIN STDOUT
#include <stdio.h>

int main(void){
	//OTRA MANERA DE HACERLO SERIA CON PUNTEROS PERO SE VUELVE MUY TEDIOSO, ENTONCES VOY A USAR VECTORES DE CARACTERES
	char string_1[250];
	char string_2[250];
	short flag_comparacion = 1; // <- 0 "PALABRAS DIFERENTES" || 1 "PALABRAS IGUALES" INCIALIZA EN 1

	int string_1_EOF; //NECESARIOS PARA COMPARAR
	int string_2_EOF;	//NECESARIOS PARA COMPARAR

	//PIDO A STDIN LOS DATOS A COMPARAR
	printf("Escribir 1° palabra: " );
	scanf("%s" ,string_1);

	printf("Escribir 2° palabra: ");
	scanf("%s" ,string_2);
	//--------------------------------

	//BUSCO Y ENCUENTRO LA LONGITUD DE AMBOS STRINGS
	for(string_1_EOF = 0; string_1[string_1_EOF] != '\0'; string_1_EOF++);
	for(string_2_EOF = 0; string_2[string_2_EOF] != '\0'; string_2_EOF++);
	//----------------------------------------------

	//LOGICA DE COMPARACION
	if(string_1_EOF == string_2_EOF){

		for(short checkeando = 0 ; checkeando < string_1_EOF; checkeando++){
			if(string_1[checkeando] != string_2[checkeando]){

				flag_comparacion = 0;
				break;
			}

		}

	}
	else(flag_comparacion = 0);
	//---------------------

	//A TRAVES DEL FLAG_COMPARACION ME INDICA SI SON IGUALES O NO Y LO INDICO EN STDOUT
	if(flag_comparacion == 1){

	    puts("SON IGUALES");

	}
	else{

	   puts("NO SON IGUALES");

	}
	//---------------------------------------------------------------------------------

	return 0;
}
