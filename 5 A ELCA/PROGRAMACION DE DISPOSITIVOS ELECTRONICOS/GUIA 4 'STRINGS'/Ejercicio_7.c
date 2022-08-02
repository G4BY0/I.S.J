//AVERIGUAR LUEGO PROBLEMA POR Q NO FUNCIONA EL STRING COPY.

//----------------------------------//
// GUIA DE EJERCICIOS: STRINGS      //
// ALUMNO: GABRIEL B. GUERETA TADEI //
// CURSO: 5 "A" E.L.C.A.            //
// EJERCICIO N° --> 7               //
//----------------------------------//

/*
	-"A partir de ac� se pueden utilizar funciones de la biblioteca est�ndar (strlen, strcpy, strcmp)"
  ENUNUCIADO:
  > El usuario ingresar� 5 nombres de personas y sus edades (n�mero entero).
Luego de finalizar el ingreso, muestre en pantalla el nombre de la persona m�s joven.
El ingreso se realiza de este modo: nombre y edad de la primera persona, luego nombre y edad de la segunda, etc...
Nota: no hay que almacenar todos los nombres y todas las notas.
*/
//Lib STDIN STDOUT
#include <stdio.h>
//Lib Aplicada
#include <string.h>

int main(void){


	char nombre[100];
	int edad_mas_chico;

	char temp_pointer[100];	//Variable dinamica
	int temp_int;						//Variable dinamica
	// int position_EOF; // <- VARIABLE NECESARIA SI NO SE APLICA STRCPY();

	//SOLICITO A STDIN LOS DATOS DE LAS 5 PERSONAS SOLICITADAS
	puts("INGRESAR:");
	for (short numero_total_de_personas = 1; numero_total_de_personas <= 5; numero_total_de_personas++) {

		printf("NOMBRE DE LA %d° PERSONA: ", numero_total_de_personas);
		scanf("%s", temp_pointer);

		printf("\nEDAD DE LA %d° PERSONA: ", numero_total_de_personas);
		scanf("%d", &temp_int);

		puts("\n");

		//LOGICA PARA ENCONTRAR LA PERSONA MAS JOVEN
		if (temp_int < edad_mas_chico) {
			//copio el string de temp_pointer a nombre
			strcpy(nombre, temp_pointer);
			//lo que hay en temp se copia en edad_mas_chico
			edad_mas_chico = temp_int;

			/* ----> Descomentar en el caso de no querer usar strcpy() de la libreria standard string.h <----
			* //LOGICA PARA ENCONTRAR EL EL EOF {FIN DE LA TRANSMISION} O '\0'                 					<----------- CODIGO RECICLADO DEL EJERCICIO 3
			* for (position_EOF = 0; temp_pointer[position_EOF] != '\0'; position_EOF++);
			* //--------------------------------------------------------------
			* for (short voy_alojando_datos = position_EOF; position_EOF != 0; position_EOF--, nombre[voy_alojando_datos] = temp_pointer[voy_alojando_datos]); // COPIANDO
			*/



		}
		//------------------------------------
		//INICIALIZACION DE edad_mas_chico
		if(numero_total_de_personas == 1){

			edad_mas_chico = temp_int;

		}
		//--------------------------------
	}

  //OFRECIENDO LOS DATOS A STDOUT PEDIDOS POR EL ENUNCIADO
  printf("LA PERSONA MAS JOVEN SE LLAMA: %s" ,nombre);


	return 0;
}
