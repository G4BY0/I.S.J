//----------------------------------//
// GUIA DE EJERCICIOS: STRINGS      //
// ALUMNO: GABRIEL B. GUERETA TADEI //
// CURSO: 5 "A" E.L.C.A.            //
// EJERCICIO N� --> 5               //
//----------------------------------//

/*
  ENUNUCIADO:
  > El usuario ingresa una palabra. Mostrar en pantalla cu�ntas vocales min�sculas y may�sculas contiene.
*/
//Lib STDIN STDOUT
#include <stdio.h>

int main(void){

	char temp;	//NECESARIA PARA LA LOGICA
  //DECLARACION, DEFINICION Y INICIALIZACION DE CONTADORES
  int contador_minusculas = 0;	//STDOUT
  int contador_mayusculas = 0;	//STDOUT

		puts("Ingresar palabra:");
    //logica para ignorar espacios, enter, tabulaciones, entre otros tipos de control
		while((temp = getchar()) != '\n' && temp != ' ' && temp != '\t' && temp != '\v' && temp != '\f' && temp != '\r'){

	    //si el caracter es alguna vocal minuscula, incrementar contador_minusculas
	    if(temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o'|| temp == 'u'){

	        contador_minusculas++;

	    }
	    //--------------------------------------------------------------------------

	    //si el caracter es alguna vocal mayuscula, incrementar contador_minusculas
	    if(temp == 'A' || temp == 'E' || temp == 'I' || temp == 'O'|| temp == 'U'){

	        contador_mayusculas++;

	    }
	    //--------------------------------------------------------------------------

	}
	//--------------------------------------------------------------------------------



    printf("La palabra ingresada tiene: %d vocales minusculas\n" ,contador_minusculas);
    printf("                            %d vocales mayusculas" ,contador_mayusculas);


    return 0;

}
