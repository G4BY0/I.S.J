//----------------------------------//
// GUIA DE EJERCICIOS: STRINGS      //
// ALUMNO: GABRIEL B. GUERETA TADEI //
// CURSO: 5 "A" E.L.C.A.            //
// EJERCICIO N� --> 9               //
//----------------------------------//

/*
  ENUNUCIADO:
  > El usuario ingresar� una palabra de hasta 10 letras. Se desea mostrarla en pantalla pero encriptada seg�n el "C�digo C�sar".
   Esto consiste en reemplazar cada letra con la tercera consecutiva en el abecedario. Por ejemplo, "CASA" se convierte en "FDVD".
   Tener en cuenta que las �ltimas letras deben volver al inicio, por ejemplo la Y se convierte B.
   Este mecanismo se utilizaba en el Imperio Romano.
*/
//Lib STDIN STDOUT
#include <stdio.h>
//Lib Aplicada
#include <string.h>

char *function();

int main(void){2

  ''

  printf("La palabra ingresada encriptada segun el \"Codigo Cesar\"" ,function());

	return 0;
}


char *function(){

  char palabra[10];

  for(unsigned long numero_de_letras = 0; numero_de_letras < 10; numero_de_letras++){



    // LOGICA DE CONTROL
    if((palabra[numero_de_letras] = getchar()) == '\n' || palabra[numero_de_letras] == ' ' || palabra[numero_de_letras] == '\t' || palabra[numero_de_letras] == '\v' || palabra[numero_de_letras] == '\f' || palabra[numero_de_letras] == '\r'){

      return palabra;

    }

    else{

      palabra[numero_de_letras] = 'palabra[numero_de_letras] + 3';

    }


  }

  return palabra;

}
