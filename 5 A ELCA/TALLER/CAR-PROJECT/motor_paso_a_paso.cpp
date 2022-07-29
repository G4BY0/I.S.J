//-------------------------------------------//
//            GABRIEL GUERETA 2022           //
//            FILE: "MOTOR PASO A PASO"      //
//-------------------------------------------//

//--------------------------------------------------------//
/* MODO : "PASO_COMPLETO_CON_DOS_BOBINAS" (MAXIMO TORQUE) */
//--------------------------------------------------------//

//INCLUDING ALL LIBRARIES AND FILES FOR THIS:
#include <setup.hpp>                  //Fichero personal setup
//---------------------------------------------------------------------------

//--DEFICION DE DEMORA ENTRE PASOS DEL MOTOR--

#define demora 5

//--------------------------------------------





//------CONSTANTES NECESARIAS--------------

const int bobina1 = 15;
const int bobina2 = 16;
const int bobina3 = 17;
const int bobina4 = 18;

//-----------------------------------------




//----------------IR ADELANTE--------------
void adelante_motor(){


//------------PASO 1-------------
digitalWrite(bobina1, HIGH); 
digitalWrite(bobina2, LOW); 
digitalWrite(bobina3, LOW); 
digitalWrite(bobina4, HIGH);
delay(demora);
//-------------------------------

//------------PASO 2-------------
digitalWrite(bobina1, HIGH); 
digitalWrite(bobina2, HIGH); 
digitalWrite(bobina3, LOW); 
digitalWrite(bobina4, LOW);
delay(demora);
//-------------------------------

//------------PASO 3-------------
digitalWrite(bobina1, LOW); 
digitalWrite(bobina2, HIGH); 
digitalWrite(bobina3, HIGH); 
digitalWrite(bobina4, LOW);
delay(demora);
//-------------------------------

//------------PASO 4-------------
digitalWrite(bobina1, LOW); 
digitalWrite(bobina2, LOW); 
digitalWrite(bobina3, HIGH); 
digitalWrite(bobina4, HIGH); 
delay(demora);
//-------------------------------

}
//----------------------------------------




//----------------IR MARCHA ATRAS--------------
void marcha_atras_motor(){


//------------PASO 1-------------
digitalWrite(bobina1, HIGH); 
digitalWrite(bobina2, LOW); 
digitalWrite(bobina3, LOW); 
digitalWrite(bobina4, HIGH);
delay(demora);

//-------------------------------

//------------PASO 2-------------
digitalWrite(bobina1, LOW); 
digitalWrite(bobina2, LOW); 
digitalWrite(bobina3, HIGH); 
digitalWrite(bobina4, HIGH);
delay(demora);

//-------------------------------

//------------PASO 3-------------
digitalWrite(bobina1, LOW); 
digitalWrite(bobina2, HIGH); 
digitalWrite(bobina3, HIGH); 
digitalWrite(bobina4, LOW);
delay(demora);
//-------------------------------

//------------PASO 4-------------
digitalWrite(bobina1, HIGH); 
digitalWrite(bobina2, HIGH); 
digitalWrite(bobina3, LOW); 
digitalWrite(bobina4, LOW); 
delay(demora);
//-------------------------------

}
//----------------------------------------


//----------------STOP--------------
void stop_motor(){


//------------PASO UNICO-------------
digitalWrite(bobina1, LOW); 
digitalWrite(bobina2, LOW); 
digitalWrite(bobina3, LOW); 
digitalWrite(bobina4, LOW); 

//-------------------------------

}
//----------------------------------------
