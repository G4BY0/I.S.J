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
	short flag_comparacion;

	//PIDO A STDIN LOS DATOS A COMPARAR
	printf("Escribir 1� palabra: ");
	scanf("%s" ,string_1);

	printf("Escribir 2� palabra: ");
	scanf("%s" ,string_2);


	//LOGICA DE COMPARACION
	for(short i = 0; i < 250; i++){

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


	if(flag_comparacion == 1){

	    puts("SON IGUALES");

	}
	else{

	   puts("NO SON IGUALES");

	}

	return 0;

	//EL PROGRAMA SE COMPROBO A BASE DE ERRORES PERO LE ENCONTRE UN BUG QUE NO ENCUENTRO REPARACION HASTA EL MOMENTO, Y ES CUANDO COMPARO "321" con "123"...

}
