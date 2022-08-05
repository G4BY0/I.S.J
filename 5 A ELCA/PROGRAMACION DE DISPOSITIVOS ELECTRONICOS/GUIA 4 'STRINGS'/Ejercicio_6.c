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
  int contador_mayusculas;
  char letra_mas_repetida;

  //INICIALIZACION
  int alfabeto_contador_de_repeticiones[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; // <- CONTADOR DE Ñ ULTIMA POSICION DEL VECTOR
    for(int i =0; i < 26; i++){

      printf("%d\n" ,alfabeto_contador_de_repeticiones[i]);

    }


  //INDICACION
  puts("INGRESAR PALABRA:");
  //logica para ignorar espacios, enter, tabulaciones, entre otros tipos de control
  while((temp = getchar()) != '\n' && temp != ' ' && temp != '\t' && temp != '\v' && temp != '\f' && temp != '\r'){

    //LOGICA
    //"TABLA ASCII" ALFABETO EN MAYUSCULA ES DESDE '65' A '90' {Ñ ES LA POSICION '165'}. SIENDO LA LETRA 'A' LA PRIMERA Y LA 'Z' LA ÚLTIMA.
    for(short ABC = 65; ABC <= 90; ABC++){

      //LETRA 'Ñ'
      if(temp == 165){ // Ñ <--- "TABLA ASCII" ES EL 165

        alfabeto_contador_de_repeticiones[27]++;


      }

      else if(temp == ABC){
        /*
        *   90-65=25+1{POR LA Ñ}=26.
        *   ALFABETO MAYUSCULA SIN Ñ EN TABLA ASCII ES DESDE '65'<-{'A'}  HASTA '90'<-{'Z'}. EN LA POSICION 26 GUARDO EL CONTADOR DE LA LETRA Ñ POR SER 'ESPECIAL' DEL HABLA HISPANA
        */
        alfabeto_contador_de_repeticiones[ABC-65]++;
      }


    }

    //RETOMANDO LAS REPETICIONES DE CADA LETRA PARA LOCALIZAR LA QUE SE REPITIO MAYOR CANTIDAD DE VECES
    for(short checkeando = 65 ,flag_ABC; checkeando <= 91; checkeando++){ // <--- LA CONDICION ES 90+1 PORQUE EN EL ULTIMO BUCLE SE TIENE EN CUENTA LA LETRA ESPECIAL 'Ñ'

      //CONDICIONALES EN ITERACION ESPECIFICA

      //INICIALIZACION DEL FLAG EN LA PRIMERA ITERACION/BUCLE
      if(checkeando == 65){

        flag_ABC = alfabeto_contador_de_repeticiones[checkeando-65];
        letra_mas_repetida = checkeando; // <-- INCIALIZA CON LA 'A'
        continue; // <--- POR SER LA PRIMERA ITERACION TERMINA ACA
      }
      //------------------------------------------------------
      //CONDICION PARA EL CARACTER ESPECIAL 'Ñ' APROVECHANDO LA ULTIMA ITERACION/BUCLE
      else if((checkeando == 91) && (flag_ABC < alfabeto_contador_de_repeticiones[checkeando-65])){

        flag_ABC = alfabeto_contador_de_repeticiones[26]; // <---- POSCION 26 DEL VECTOR CONTADOR RESERVADO PARA EL CARACTER 'Ñ'
        letra_mas_repetida = 165; // <--------- CARACTER '165' letra 'Ñ'

      }
      //-----------------------------------------------------------------------

      //---------------------------------------------------------

      else if(flag_ABC < alfabeto_contador_de_repeticiones[checkeando-65]){

        flag_ABC = alfabeto_contador_de_repeticiones[checkeando-65];
        letra_mas_repetida = checkeando;

      }



    }

  }

  for(int i =0; i < 26; i++){

    printf("%d\n" ,alfabeto_contador_de_repeticiones[i]);

  }

  printf("De la palabra ingresada, la letra \"%c\" mayuscula fue la mas repetida." ,letra_mas_repetida);


  return 0;
}
