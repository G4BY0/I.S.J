//-------------------------------------------//
//            GABRIEL GUERETA 2022           //
//               CURSO 5 A ELCA              //
//                 MAIN FILE                 //
//-------------------------------------------//

#include "functions.h"

void setup() {
  
  Auto::Setup();

  delay(MENSAJES_RETARDO);                // wait That amount of miliseconds TO READ MESSAGE ON DISPLAY AND TO BE PATIENT

}


void loop() {
  
  Serial.println("Estoy en el void loop XO"); // REGISTRO

  Auto::MyServo.write(0);
  delay(MENSAJES_RETARDO);

  Auto::Message::Adelante(); // MENSAJE DE IR ADELANTE

  //LOGICA PARA ENCENDER LAS LUCES DE ADELANTE
  Auto::Leds(LOW,LOW,HIGH);
  delay(MENSAJES_RETARDO * 2); 
  
  Serial.println("Yendo Adelante"); //REGISTRO
  //BUCLE HASTA DETECTAR OBSTRUCCION ALGUNO DE LOS SENSORES
  while((Auto::Infrarrojo::State() == false) && (Auto::Ultrasonido::State() == false)){
    Auto::Motor::Adelante();       //MOTOR IR ADELANTE
  }
  Auto::Interrupt();
  Auto::Buzzer::Protocol();
  delay(MENSAJES_RETARDO * 2);
  
  //MENSAJES
  Serial.println("MARCHA ATRAS"); //REGISTRO
  Auto::Message::Atras(); // A LA SALIDA

  //GIRO DEL SERVOMOTOR A 45 GRADOS
  Auto::MyServo.write(45);
  delay(MENSAJES_RETARDO);
  Auto::Leds(HIGH,LOW,LOW);
  
  for(unsigned long milisegundos = millis();((millis() - milisegundos) <= 7000 ); ){
    Auto::Motor::Atras();
  } 
  

  //LOGICA PARA ENCENDER LA LUZ DE CONTROL PARA REACOMODAR LAS RUEDAS
  Auto::Leds(LOW,HIGH,LOW);
}
