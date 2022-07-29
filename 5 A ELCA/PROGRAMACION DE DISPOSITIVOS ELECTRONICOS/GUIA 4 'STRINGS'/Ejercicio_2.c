//----------------------------------//
// GUIA DE EJERCICIOS: STRINGS      //
// ALUMNO: GABRIEL B. GUERETA TADEI //
// CURSO: 5 "A" E.L.C.A.            //
// EJERCICIO N° --> 2               //
//----------------------------------//

/*
  ENUNUCIADO:
  > Permitir el ingreso de una palabra y mostrarla en pantalla al revés.
   Por ejemplo, para "CASA" se debe mostrar "ASAC".
*/
//Lib STDIN STDOUT
#include <stdio.h>



int main(void) {

    char str[100];
    int position_EOF;


    //PIDO A STDIN LOS DATOS SOLICITADOS.
    printf("Escribir la palabra en cuestión: ");
    scanf("%s", str);
    //-----------------------------------

    //LOGICA PARA ENCONTRAR EL EL EOF {FIN DE LA TRANSMISION} O '\0'

    for(position_EOF = 0; str[position_EOF] != '\0'; position_EOF++);


    //--------------------------------------------------------------




    //MOSTRAR A STDOUT {STANDARD OUTPUT} EL STRING AL REVES
    for (position_EOF; position_EOF >= 0; position_EOF--) {

        printf("%c", str[position_EOF]);

    }
    //-----------------------------------------------------

    return 0;

}

