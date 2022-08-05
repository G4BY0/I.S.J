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


	char temporal_nombre[100]; //variable que varia en cada iteracion dentro del while
	char nombre_stdout[100];	//Luego se mostrara en STDOUT y se usara para comparar con el otro vector de caracteres.

	//Contexto
	puts("Algoritmo que guarda los strings de \"menor\" peso y muestra en pantalla el primer nombre en orden alfabetico de todos los ingresados.");

	while(strcmp(temporal_nombre, PALABRA_CLAVE) != 0){ // TIENEN QUE DAR DIFERENTE A 0, SINO ES EQUIVALENTE A PALABRA_CLAVE
		printf("\nEscribir Nombre: ");
		scanf("%s" ,temporal_nombre);
		//LOGICA
		//BASANDOME EN QUE SE PUEDE UTILIZAR LA FUNCION strcpy() que retorna 0, -1 y 1 Y QUE COMPARA POR "PESOS"... {POR EJ: Es decir, 'A' es menor que 'Z'}
		if(strcmp(temporal_nombre, nombre_stdout) == -1){

			//copio el string temporal dentro de la iteracion a nombre_stdout
			strcpy(nombre_stdout ,temporal_nombre);

		}

	}

	printf("\n\nEL primer nombre en orden alfabetico de todos los ingresados es: %s" ,nombre_stdout);

	return 0;
}
