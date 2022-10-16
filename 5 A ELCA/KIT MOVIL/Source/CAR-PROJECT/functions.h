//-------------------------------------------//
//            GABRIEL GUERETA 2022           //
//               CURSO 5 A ELCA              //
//                HEADER FILE                //
//-------------------------------------------//

#include <LiquidCrystal.h>  //Libreria para lcd
#include <Ultrasonic.h>     //Libreria para Sensor Ultrasonido
#include <Servo.h>          //Libreria para Servo
#include <stdint.h>         //Libreria de tipo de integrers


#define MENSAJES_RETARDO 1000  // TIEMPO DEL DELAY, EDITAR "NUMERO" SI ES NECESARIO


// NO SE PUSIERON LOS PROTOTIPOS DE LAS FUNCIONES, PERO FUNCIONO IGUAL ASI QUE LO DEJO ASI...


typedef const uint_fast8_t ARDUINO_PIN;


//PINES
namespace PIN{

  /* ------------------------>PINOUT <---------------------------
  _PINES:
    -LEDS:
      A5 LEDS TRASEROS
      D3 LEDS FRONTALES
      D13 LED AMARILLO CONTROL
    -BUZZER
      A0 TRANSISTOR QUE SATURA O PONE EN CORTE AL BUZZER
     
    -SERVO
      D12
    -LIQUIDCRYSTAL 16X2
      10 D11 E
      11 D10 RS
      9 D9 lcd::D4
      8 D8 lcd::D5
      7 D7 lcd::D6
      6 D6 lcd::D7 
    -SENSOR INFRARROJO
      D2
    -SENSOR ULTRASONIDO
      ECHO 5
      TRIGGER 4
    -MOTOR PASO A PASO
      A1 MOTOR::INT1
      A2 MOTOR::INT2
      A3 MOTOR::INT3
      A4 MOTOR::INT4 
*/
  //PIN_LEDS
  ARDUINO_PIN LED_FRONT = 3; //DIGITAL 3
  ARDUINO_PIN LED_BACK = A5; //ANALOG 5
  ARDUINO_PIN LED_CONTROL = 13; //DIGITAL 13
  
  ARDUINO_PIN BUZZER = A0;
  
  //PIN_INFRARROJO
  ARDUINO_PIN INFRARROJO = 2; //DIGITAL 2

  //PIN_ULTRASONIDO
  namespace ULTRASONIDO{
  ARDUINO_PIN TRIGGER = 4; //DIGITAL D4
  ARDUINO_PIN ECHO = 5; //DIGITAL 5
  };

  //PIN_MOTOR
  namespace MOTOR{
  ARDUINO_PIN MOTOR_BOBINA1 = A1; //ANALOG 1
  ARDUINO_PIN MOTOR_BOBINA2 = A2; //ANALOG 2
  ARDUINO_PIN MOTOR_BOBINA3 = A3; //ANALOG 3
  ARDUINO_PIN MOTOR_BOBINA4 = A4; //ANALOG 4
  };

  namespace LIQUIDCRYSTAL{
  ARDUINO_PIN RS = 10; //DIGITAL 10
  ARDUINO_PIN E = 11; //DIGITAL 11
  ARDUINO_PIN DATA_PIN1 = 9; //DIGITAL
  ARDUINO_PIN DATA_PIN2 = 8; //ANALOG 4  
  ARDUINO_PIN DATA_PIN3 = 7; //ANALOG 3
  ARDUINO_PIN DATA_PIN4 = 6; //ANALOG 4  
  };
  //PIN_SERVO
  ARDUINO_PIN SERVO = 12; //D12

};



namespace Auto{

  //CREADO DE OBJETOS NECESARIOS DF LAS CLASES DE LAS LIBRERIAS INCLUIDAS
  LiquidCrystal lcd(  // (RS, E, D4, D5, D6, D7) SE CREO EL OBJETO "lcd" de la libreria LiquidCrystal.h. Y, se declararon los pines a utilizar del micro
  PIN::LIQUIDCRYSTAL::RS, 
  PIN::LIQUIDCRYSTAL::E, 
  PIN::LIQUIDCRYSTAL::DATA_PIN1, 
  PIN::LIQUIDCRYSTAL::DATA_PIN2, 
  PIN::LIQUIDCRYSTAL::DATA_PIN3, 
  PIN::LIQUIDCRYSTAL::DATA_PIN4
  );

  Servo MyServo;

  // CONTROL_DE_LEDS()
  static void Leds(uint_fast8_t State_Led_Back,uint_fast8_t State_Led_Control,uint_fast8_t State_Led_Front){

    digitalWrite(PIN::LED_BACK, State_Led_Back);
    digitalWrite(PIN::LED_CONTROL, State_Led_Control);
    digitalWrite(PIN::LED_FRONT, State_Led_Front);

  }

  class Message{
    public:
    //MENSAJE DE ENCENDIDO()
    static void Setup(void){
  
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Gabriel Guereta");
      lcd.setCursor(0,1);
      lcd.print("Arrancando...");
      lcd.blink();
    
  
    }

    //MENSAJE DE INTERRUPCION()
    static void Interrupcion(void){
  
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("¡INTERRUPCION!");
      lcd.setCursor(0,1);
      lcd.print("PASO INACCESIBLE...");
      lcd.blink();

    }

    //MENSAJE DE YENDO PARA DELANTE()
    static void Adelante(void){
  
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("YENDO ADELANTE");
      lcd.setCursor(0,1);
      lcd.print("GOING FRONT");
      lcd.blink();
    
  
    }

    //MENSAJE DE MARCHA-ATRAS()
    static void Atras(void){
  
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("YENDO MARCHA ATRAS");
      lcd.setCursor(0,1);
      lcd.print("GOING BACK");
      lcd.blink();
  
    }

    //MENSAJE DE PEGANDO-VUELTA()
    static void Vuelta(void){
  
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("ACCEDIENDO A PROTOCOLO:");
      lcd.setCursor(0,1);
      lcd.print("EQUILIBRIO");
      lcd.blink();
    
    }

    //MENSAJE DE ERROR()
    static void Error(void){
  
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("ERROR");
      lcd.setCursor(0,1);
      lcd.print("REVISAR PROBLEMA...");
      lcd.blink();
    
    }

  };


  //ARRANQUE
  static void Setup(void){

    // INICIALIZACION LCD
    lcd.begin(16,2);
    lcd.home();
    
    //MONITOR SERIAL INICIALIZADO
    Serial.begin(9600); 

    //SERVO CON EL PIN RESPECTIVO INICIALIZADO
    MyServo.attach(PIN::SERVO);

    //INICIALIZACION SENSOR_ULTRASONIDO
    pinMode(PIN::ULTRASONIDO::TRIGGER, OUTPUT); //TRIGGER NEEDS TO BE OUTPUT BECAUSE IS WHO SENT THE SIGNAL TO THE AIR
    pinMode(PIN::ULTRASONIDO::ECHO, INPUT);  //ECHO NEEDS TO BE INPUT BECAUSE IS WHO RECEIVE THE SIGNAL FROM THE AIR
    digitalWrite(PIN::ULTRASONIDO::TRIGGER, LOW);//INICIALIZA EN 0

    //LEDS
    pinMode(PIN::LED_BACK, OUTPUT);
    pinMode(PIN::LED_CONTROL, OUTPUT);
    pinMode(PIN::LED_FRONT, OUTPUT);
      
    //INFRARROJO
    pinMode(PIN::INFRARROJO, INPUT);

    //TEST DE QUE LAS LUCES ENCIENDAN
    for(uint_fast8_t Prende_Y_Apaga = 0; Prende_Y_Apaga < 4; Prende_Y_Apaga++){
      
      Leds(HIGH,HIGH,HIGH);
      delay(125);
      Leds(LOW,LOW,LOW);
      delay(125);
    
    }
    
    Message::Setup(); // MENSAJE EN EL LCD

    Serial.println("Setup sin problemas");        

  }

  // PROTOCOLO INTERRUPCION
  static void Interrupt(void){

    
    //LOGICA DE LEDS
    Leds(LOW,HIGH,LOW);
    
    Message::Interrupcion();        // mensajes a lcd

    Serial.println("Hubo una Interrupcion");

  }

    
  class Motor{
    public:
    /* MODO : "PASO_COMPLETO_CON_UNA_BOBINA" (MINIMO TORQUE) */
    #define MOTOR_DEMORA 3
    //MOTOR_MARCHA_ADELANTE()
    static void Adelante(void){
      

      //------------PASO 1-------------
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA4, LOW);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA3, LOW);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA2, LOW);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA1, HIGH);
      delay(MOTOR_DEMORA);

      //-------------------------------

      //------------PASO 2-------------
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA4, LOW);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA3, LOW);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA2, HIGH);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA1, LOW);
      delay(MOTOR_DEMORA);
      //-------------------------------

      //------------PASO 3-------------
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA4, LOW);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA3, HIGH);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA2, LOW);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA1, LOW);
      delay(MOTOR_DEMORA);
      //-------------------------------

      //------------PASO 4-------------
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA4, HIGH);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA3, LOW);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA2, LOW);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA1 , LOW);
      delay(MOTOR_DEMORA);
      //-------------------------------

    }

    //MOTOR_MARCHA_ATRAS()
    static void Atras(void){


      //------------PASO 1-------------
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA1, LOW);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA2, LOW);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA3, LOW);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA4, HIGH);
      delay(MOTOR_DEMORA);

      //-------------------------------

      //------------PASO 2-------------
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA1, LOW);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA2, LOW);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA3, HIGH);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA4, LOW);
      delay(MOTOR_DEMORA);
      //-------------------------------

      //------------PASO 3-------------
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA1, LOW);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA2, HIGH);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA3, LOW);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA4, LOW);
      delay(MOTOR_DEMORA);
      //-------------------------------

      //------------PASO 4-------------
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA1, HIGH);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA2, LOW);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA3, LOW);
      digitalWrite(PIN::MOTOR::MOTOR_BOBINA4, LOW);
      delay(MOTOR_DEMORA);
      //-------------------------------

    }
  };

  class Infrarrojo{
    public:
      //INFRARROJO()  <-- devuelve true si detecta obstruccion sino false
      static uint_fast8_t State(void){
      return digitalRead(PIN::INFRARROJO);
      }
  };

  class Ultrasonido{
    public:
      //ULTRASONIDO() <-- devuelve true si detecta obstruccion sino false
      static uint_fast8_t State(void){
        //YA INICIALIZADO EN EL void setup()
        long tiempo_demora; //tiempo que demora en llegar el eco
        long distancia; //distancia en centimetros
  
        digitalWrite(PIN::ULTRASONIDO::TRIGGER, HIGH);
        delayMicroseconds(10);          //Enviamos un pulso de 10us
        digitalWrite(PIN::ULTRASONIDO::TRIGGER, LOW);

        tiempo_demora = pulseIn(PIN::ULTRASONIDO::ECHO, HIGH); //obtenemos el ancho del pulso
        distancia = tiempo_demora/59;             //escalamos el tiempo a una distancia en cm
 
        if(distancia <= 10){
          return true;  
        }
        else{
          return false;
        }
        
 
      }

  };

  class Buzzer{
    private:
      #define BUZZER_FREQ_DUTYCYCLE_ON 255
      #define BUZZER_FREQ_DUTYCYCLE_OFF 0

    public:
    //SONAR BUZZER() PARA INTERRUPCION
    static uint_fast8_t Protocol(void){

      analogWrite(PIN::BUZZER, BUZZER_FREQ_DUTYCYCLE_ON);
      delay(MENSAJES_RETARDO / 4);
      analogWrite(PIN::BUZZER, BUZZER_FREQ_DUTYCYCLE_OFF);
      delay(MENSAJES_RETARDO / 2);
      analogWrite(PIN::BUZZER, BUZZER_FREQ_DUTYCYCLE_ON);
      delay(MENSAJES_RETARDO / 4);
      analogWrite(PIN::BUZZER, BUZZER_FREQ_DUTYCYCLE_OFF);
      
      
    }

  };

};
