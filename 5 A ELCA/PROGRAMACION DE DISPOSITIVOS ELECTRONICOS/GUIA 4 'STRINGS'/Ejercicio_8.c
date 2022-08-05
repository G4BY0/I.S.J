//----------------------------------//
// GUIA DE EJERCICIOS: STRINGS      //
// ALUMNO: GABRIEL B. GUERETA TADEI //
// CURSO: 5 "A" E.L.C.A.            //
// EJERCICIO N� --> 8               //
//----------------------------------//

/*
  ENUNUCIADO:
  > El usuario ingresar� nombres de personas hasta que ingrese la palabra "FIN". No sabemos cu�ntos nombres ingresar�.
	Luego de finalizar el ingreso, mostrar en pantalla cu�l es el primer nombre en orden alfab�tico de todos los ingresados.
*/
//Lib STDIN STDOUT
#include <stdio.h>
//Lib Aplicada
#include <string.h>

#define PALABRA_CLAVE "FIN"


int main(void){


	char temporal_nombre[100];
	char nombre_stdout[100];

	while(strcmp(temporal_nombre, PALABRA_CLAVE) != 0){ // TIENEN QUE DAR DIFERENTE A 0, SINO ES EQUIVALENTE A PALABRA_CLAVE

		scanf("%s" ,temporal_nombre);

		if(strcmp(temporal_nombre, "FIN") == 0){ //strcmp() <--- si retorna 0, es porque son iguales

			break;

		}
		else{

			function(i);

		}

	}
	for(int i = 0; temporal_nombre != PALABRA_CLAVE; i++){

		while(strcmp(temporal_nombre, "FIN") != 0) {//strcmp() <--- si retorna 0, es porque son iguales

			//Contexto
			printf("\nIngrese Nombre: ");
			scanf("%s" ,temporal_nombre);

			//ALFABETO MAYUSCULAS
			for(short ABC0 = 65; ABC <= 90; ABC0++){

				

			}

			//ALFABETO MINUSCULAS
			for(short ABC1 = 97; ABC <= 122; ABC1++){



			}

		}

	}

	return 0;
}
