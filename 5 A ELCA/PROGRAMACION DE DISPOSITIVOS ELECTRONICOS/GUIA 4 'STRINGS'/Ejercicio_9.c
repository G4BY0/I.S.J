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

char *function(); //FUNCION QUE RETORNA STRING
char palabra[10]; //STRING

int main(void){
  //INDICACION
  printf("Ingresar palabra a encriptar en \"Codigo Cesar\" {De 3 Posiciones}: ");

  printf("La palabra ingresada encriptada es: %s" ,function()); // <---- RETORNA STRING Y LO MUESTRA EN STDOUT

  return 0;
}



char *function(){

  for(unsigned long numero_de_letras = 0; numero_de_letras < 10; numero_de_letras++){

    //logica para ignorar espacios, enter, tabulaciones, entre otros tipos de control
    if((palabra[numero_de_letras] = getchar()) == '\n' || palabra[numero_de_letras] == ' ' || palabra[numero_de_letras] == '\t' || palabra[numero_de_letras] == '\v' || palabra[numero_de_letras] == '\f' || palabra[numero_de_letras] == '\r'){

      return palabra;

    }

    //Si se presentan los caracteres 'X' , 'Y' , 'Z' , 'x' , 'y' , 'z' deberian loopear al principio
    switch(palabra[numero_de_letras]){

      case 88:  // 'X'
        palabra[numero_de_letras] = 65;  // caracter 65 es 'A'
      break;
      case 89:  // 'Y'
        palabra[numero_de_letras] = 66;  // caracter 66 es 'B'
      break;
      case 90:  // 'Z'
        palabra[numero_de_letras] = 67;  // caracter 67 es 'C'
      break;
      case 120: // 'x'
        palabra[numero_de_letras] = 97;  // caracter 97 es 'a'
      break;
      case 121: // 'y'
        palabra[numero_de_letras] = 98;  // caracter 98 es 'b'
      break;
      case 122: // 'z'
        palabra[numero_de_letras] = 99;  // caracter 99 es 'c'
      break;

      /*  LOGICA AGREGADA POR AGREGAR CARACTER 'Ñ' y 'ñ'  */
      //CARACTER HISPANO HABLANTE 'ñ'
      case 164: // <--- 'ñ ' caracter 164
      //caracter 'q' = 113 {TABLA ASCII}
      palabra[numero_de_letras] = 113; // <--- pasa a ser Caracter 'q' por sumarle 3 unidades a partir del alfabeto hispano hablante
      break;

      //CASO ESPECIAL: cuando el caracter tomado es 'l' 108
      case 108: // <---- Caracter 'l' es 76 en "TABLA ASCII"
      palabra[numero_de_letras] = 164; // <--- pasa a ser Caracter 'ñ' por sumarle 3 unidades a partir del alfabeto hispano hablante
      break;

      //CARACTER HISPANO HABLANTE 'Ñ'
      case 165: // <--- 'Ñ ' caracter 165
      //caracter 'Q' = 81 {TABLA ASCII}
      palabra[numero_de_letras] = 81; // <--- pasa a ser Caracter 'Q' por sumarle 3 unidades a partir del alfabeto hispano hablante
      break;

      //CASO ESPECIAL: cuando el caracter tomado es 'L'
      case 76:  // <---- Caracter 'L' es 76 en "TABLA ASCII"
      palabra[numero_de_letras] = 165; // <--- pasa a ser Caracter 'Ñ' por sumarle 3 unidades a partir del alfabeto hispano hablante
      break;

      //TENIENDO EN CUENTA Y A MANO LA "TABLA ASCII". AL CARACTER A MANO LE SUMA A SU VALOR DECIMAL, 3 UNIDADES. DE ESA MANERA, CORRE 3 POSICIONES DEL ALFABETO
      default:
      palabra[numero_de_letras] = palabra[numero_de_letras] + 3;
      break;

    }

  }

  return palabra;

}
