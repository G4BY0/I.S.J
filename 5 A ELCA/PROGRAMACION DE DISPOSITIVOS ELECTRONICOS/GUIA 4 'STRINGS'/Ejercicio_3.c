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
	short flag_comparacion; // <- 0 "PALABRAS DIFERENTES" || 1 "PALABRAS IGUALES"

	int string_1_EOF;
	int string_2_EOF;



	//PIDO A STDIN LOS DATOS A COMPARAR
	printf("Escribir 1° palabra: " );
	scanf("%s" ,string_1);

	printf("Escribir 2° palabra: ");
	scanf("%s" ,string_2);


	for(string_1_EOF = 0; string_1[string_1_EOF] != '\0'; string_1_EOF++);
	for(string_2_EOF = 0; string_2[string_2_EOF] != '\0'; string_2_EOF++);
	printf("%d" ,string_1_EOF);
	printf("%d" ,string_2_EOF);
	if(string_1_EOF == string_2_EOF){

		for(short checkeando = 0, flag_comparacion = 1; (flag_comparacion != 0) && (checkeando < string_1_EOF); checkeando++){

			if(string_1[checkeando] != string_2[checkeando]){

				flag_comparacion = 0;

			}

		}

	}





	//for(int caracter = 0; string_1[caracter] != '\0' && string_2[caracter] != '\0'; caracter++){





	/*
	//LOGICA DE COMPARACION
	for(short i = 0; i <= 250; i++){

		//LOGICA DE SI TERMINO EL STREAM DE LA CADENA
		if(string_1[i] == '\0' && string_2[i] == '\0'){

			break;

		}

		if(string_1[i] == '\0' && string_2[i] != '\0'){


			flag_comparacion = 0;
			break;
		}

		if(string_1[i] != '\0' && string_2[i] == '\0'){


			flag_comparacion = 0;
			break;
		}
		//--------------------------------------------

		if(string_1[i] == string_2[i]){

			flag_comparacion = 1;

		}


	}
	//--------------------
	*/

	if(flag_comparacion == 1){

	    puts("SON IGUALES");

	}
	else{

	   puts("NO SON IGUALES");

	}

	return 0;

	//EL PROGRAMA SE COMPROBO A BASE DE ERRORES PERO LE ENCONTRE UN BUG QUE NO ENCUENTRO REPARACION HASTA EL MOMENTO, Y ES CUANDO COMPARO "321" con "123"...

}
