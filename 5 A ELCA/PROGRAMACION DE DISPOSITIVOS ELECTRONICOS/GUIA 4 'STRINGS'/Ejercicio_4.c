//----------------------------------//
// GUIA DE EJERCICIOS: STRINGS      //
// ALUMNO: GABRIEL B. GUERETA TADEI //
// CURSO: 5 "A" E.L.C.A.            //
// EJERCICIO N� --> 4               //
//----------------------------------//

/*
  ENUNUCIADO:
  > El usuario ingresa una palabra. Mostrar en pantalla cu�ntas letras A min�sculas contiene.
*/
//Lib STDIN STDOUT
#include <stdio.h>

int main(void){

	int conteo;
	char temp;

    conteo = 0;

	while((temp = getchar()) != '\n' && temp != ' ' && temp != '\t' && temp != '\v' && temp != '\f' && temp != '\r'){

		if(temp == 'a'){

		conteo++;

		}

	}

	printf("La palabra ingresada tiene %d letras 'a' " ,conteo);

	return 0;

}