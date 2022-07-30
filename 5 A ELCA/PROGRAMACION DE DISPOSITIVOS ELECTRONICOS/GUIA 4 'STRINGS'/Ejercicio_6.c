//----------------------------------//
// GUIA DE EJERCICIOS: STRINGS      //
// ALUMNO: GABRIEL B. GUERETA TADEI //
// CURSO: 5 "A" E.L.C.A.            //
// EJERCICIO N� --> 6               //
//----------------------------------//

/*
  ENUNUCIADO:
  > El usuario ingresa una palabra. Determinar qu� letra aparece mayor cantidad de veces. Para simplificar el problema, trabaje solo con may�sculas.
*/
//Lib STDIN STDOUT
#include <stdio.h>

//DECLARO ABCEDARIO EN MAYUSCULA_ESPA�OL
const char alfabeto_mayuscula[29] = "ABCDEFGHIJKLMN�OPQRSTUVWXYZ"; // <- ERROR DE COMPILADOR SI LO HAGO DE 28/27 POSICIONES.

int main(void){
    char temp;
    int contador_mayusculas;


    //INICIALIZACION
    int alfabeto_contador_de_repeticiones[27] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    short flag_mayor_repetido();






    //logica para ignorar espacios, enter, tabulaciones, entre otros tipos de control
	while((temp = getchar()) != '\n' && temp != ' ' && temp != '\t' && temp != '\v' && temp != '\f' && temp != '\r'){

	    for(int checkeando = 0; checkeando < 24; checkeando++){

            if(temp == alfabeto_mayuscula[checkeando]){

            alfabeto_contador_de_repeticiones[checkeando]++;

            }
        }
	}

    printf("De la palabra ingresada, la letra %c fue la mas repetida." ,flag_mayor_repetido());


    return 0;
}


short flag_mayor_repetido(){

    //incializacion de flag
    short flag_abc = -1;

    for(int checkeando = 0; checkeando < 24; checkeando++){

        if(flag_abc < alfabeto_mayuscula[checkeando]){

            flag_abc = alfabeto_mayuscula[checkeando];
        }
    }

    return flag_abc;
}
