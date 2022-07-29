//-------------------------------------------//
//            GABRIEL GUERETA 2022           //
//            FILE: "ULTRASONIDO"            //
//-------------------------------------------//


//---------------------------------------------

//INCLUDING ALL LIBRARIES AND FILES FOR THIS:
#include <setup.hpp>                  //Fichero personal setup
//------------------------------------------------------------

Ultrasonic ultrasonic(5,4); //inicializo sensor como: ultrasonic

const int Trigger = 5;
const int Echo = 4;
bool interrupcion = false;

//En functions.cpp @void arranque(); inicializa porque la llama void setup();

long tiempo_demora; //timepo que demora en llegar el eco
long distancia; //distancia en centimetros

digitalWrite(Trigger, HIGH);
delayMicroseconds(10);          //Enviamos un pulso de 10us
digitalWrite(Trigger, LOW);
  
tiempo_demora = pulseIn(Echo, HIGH); //obtenemos el ancho del pulso
distancia = tiempo_demora/59;             //escalamos el tiempo a una distancia en cm


if(distancia = 5/*cm*/){
  
  interrupcion = true;
  
  }
