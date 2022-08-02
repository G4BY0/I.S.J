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
int function();

int main(void){


	char temporal_nombre[100];


	for(int i = 0; temporal_nombre != PALABRA_CLAVE; i++){

		scanf("%s" ,temporal_nombre);

		if(strcmp(temporal_nombre, "FIN") == 0){ //strcmp() <--- si retorna 0, es porque son iguales

			break;

		}
		else{

			function(i);

		}
	}

	return 0;
}


int function(int reservado){

	for(){

		int names[i];

	}

	return 0;
}
