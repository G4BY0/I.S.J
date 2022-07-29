//-------------------------------------------//
//            GABRIEL GUERETA 2022           //
//            FILE: "Funciones del movil"    //
//-------------------------------------------//

//INCLUDING ALL LIBRARIES AND FILES FOR THIS:
#include <setup.hpp>                  //Fichero personal setup
//---------------------------------------------------------------------------


#define esperar_tiempo 3000  // TIEMPO DEL DELAY, EDITAR "NUMERO" SI ES NECESARIO

void arranque(){

    // INICIALIZACION LCD
    lcd.begin(16,2);
    lcd.home();
    //---------

    //INICIALIZACION SENSOR_ULTRASONIDO
    pinMode(Trigger, OUTPUT); //TRIGGER NEEDS TO BE OUTPUT BECAUSE IS WHO SENT THE SIGNAL TO THE AIR
    pinMode(Echo, INPUT);  //ECHO NEEDS TO BE INPUT BECAUSE IS WHO RECEIVE THE SIGNAL TO THE AIR
    digitalWrite(Trigger, LOW);//Inicializamos el pin con 0
    //------------------------------------------------------
    
    void startup_message();     // FUNCTION FROM lcd.cpp

     delay(esperar_tiempo);                // wait That amount of miliseconds TO READ MESSAGE ON DISPLAY AND TO BE PATIENT
     
}

// PROTOCOLO IR ADELANTE
void adelante(){

    void gointTO_message();      // mensajes a STDOUT (definido en lcd.cpp)
    
         
    delay(esperar_tiempo);                // wait That amount of miliseconds
    
    void motor_paso_a_paso();

}



// PROTOCOLO INTERRUPCION
void interrupcion(){

    
    
    void Interrupt_message();        // mensajes a STDOUT (definido en lcd.cpp)
    
    delay(esperar_tiempo);                // wait That amount of miliseconds
    
    void backingTO_message();     // mensajes a STDOUT (definido en lcd.cpp)

    delay(esperar_tiempo);                // wait That amount of miliseconds

}

// PROTOCOLO MARCHA ATRAS
void marcha_atras(){


    void backingTO_message();     // mensajes a STDOUT (definido en lcd.cpp)

    delay(esperar_tiempo);                // wait That amount of miliseconds

}

// PROTOCOLO ERROR
void error(){


    void error_message();         // mensajes a STDOUT (definido en lcd.cpp)

    delay(esperar_tiempo);                // wait That amount of miliseconds


}
