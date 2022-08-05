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

int main(void){

  char temp;
  char letra_mas_repetida;


  //INICIALIZACION
  short flag_repeticion = 0;
  int alfabeto_contador_de_repeticiones[27] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; // <- CONTADOR DE Ñ ULTIMA POSICION DEL VECTOR


  //INDICACION
  puts("INGRESAR PALABRA:");
  printf("%d" ,1);
  //logica para ignorar espacios, enter, tabulaciones, entre otros tipos de control
  while((temp = getchar()) != '\n' && temp != ' ' && temp != '\t' && temp != '\v' && temp != '\f' && temp != '\r'){
    printf("%d\n" ,temp);
    //LOGICA
    //"TABLA ASCII" ALFABETO EN MAYUSCULA ES DESDE '65' A '90' {Ñ ES LA POSICION '165'}. SIENDO LA LETRA 'A' LA PRIMERA Y LA 'Z' LA ÚLTIMA.
    for(short ABC = 65; ABC <= 90; ABC++){

      //LETRA 'Ñ'
      if(temp == -91){ // Ñ <--- "TABLA ASCII" ES EL 165 // PROBLEMA MI COMPUTADORA ES -91 leido por STDIN

        alfabeto_contador_de_repeticiones[26]++;

      }

      else if(temp == ABC){
        /*
        *   90-65=25+1{POR LA Ñ}=26.
        *   ALFABETO MAYUSCULA SIN Ñ EN TABLA ASCII ES DESDE '65'<-{'A'}  HASTA '90'<-{'Z'}. EN LA POSICION 26 GUARDO EL CONTADOR DE LA LETRA Ñ POR SER 'ESPECIAL' DEL HABLA HISPANA
        */
        alfabeto_contador_de_repeticiones[ABC-65]++;
      }


    }
  }

  //RETOMANDO LAS REPETICIONES DE CADA LETRA PARA LOCALIZAR LA QUE SE REPITIO MAYOR CANTIDAD DE VECES
  for(short checkeando = 65 ,flag_ABC; checkeando <= 90; checkeando++){ // <--- LA CONDICION ES 90+1 PORQUE EN EL ULTIMO BUCLE SE TIENE EN CUENTA LA LETRA ESPECIAL 'Ñ'

    //CONDICIONALES EN ITERACION ESPECIFICA

    //INICIALIZACION DEL FLAG EN LA PRIMERA ITERACION/BUCLE
    if(checkeando == 65){

      flag_ABC = alfabeto_contador_de_repeticiones[checkeando-65];
      letra_mas_repetida = checkeando; // <-- INCIALIZA CON LA 'A'
      continue; // <--- POR SER LA PRIMERA ITERACION TERMINA ACA
    }

    //SI SE REPITEN LA MISMA CANTIDAD DE VECES DOS O MAS CARACTERES
    if(flag_ABC == alfabeto_contador_de_repeticiones[checkeando-65]){

      flag_repeticion = 1;

    }


    //-------------------------------------------------------------


    //CONDICIONES PARA EL CARACTER ESPECIAL 'Ñ' APROVECHANDO LA ULTIMA ITERACION/BUCLE
    if(alfabeto_contador_de_repeticiones[26] > flag_ABC){

      flag_ABC = alfabeto_contador_de_repeticiones[26]; // <---- POSCION 26 DEL VECTOR CONTADOR RESERVADO PARA EL CARACTER 'Ñ'
      letra_mas_repetida = -91;                         // <--------- CARACTER '165' letra 'Ñ'
      flag_repeticion = 0;
    }

    //---------------------------------------------------------

    //ENCUENTRA EL MAYOR
    if(alfabeto_contador_de_repeticiones[checkeando-65] > flag_ABC){

      flag_ABC = alfabeto_contador_de_repeticiones[checkeando-65];
      flag_repeticion = 0;
      letra_mas_repetida = checkeando;

    }
    //------------------

  }
  /*
  for(int i = 0 ; i < 27; i++){

    printf("%d\n" ,alfabeto_contador_de_repeticiones[i]);

  }
  */
  //STDOUT
  //IMPLEMENTACION DE OPERADOR TERNEARIO
  //(flag_repeticion == 1) ? printf("De la palabra ingresada, la letra \"%c\" mayuscula fue la mas repetida." ,letra_mas_repetida) : printf("Hay más de un caractér ")

  if(flag_repeticion == 0){

    printf("De la palabra ingresada, la letra \"%c\" mayuscula fue la mas repetida." ,letra_mas_repetida);

  }
  else{

    printf("Hay mas de un caracter repetidos la misma cantidad de veces.");

  }


  return 0;
}
