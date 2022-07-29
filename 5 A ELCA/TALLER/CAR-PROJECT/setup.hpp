//-------------------------------------------//
//            GABRIEL GUERETA 2022           //
//            FILE: "DECLARACIONES"          //
//-------------------------------------------//


//---------------------------------------------
#include <iostream>					//Libreria C++
#include <LiquidCrystal.h>			//Libreria para lcd
#include <Ultrasonic.h>				//Libreria para Sensor Ultrasonido
#include <Servo.h>          //Libreria para Servo

#include <lcd.cpp>                  //fichero personal del display lcd
#include <functions.cpp>            //fichero personal de funciones
#include <sensor_ultrasonido.cpp>   //fichero personal de sensor_ultrasonido
#include <motor_paso_a_paso.cpp>    //fichero personal de motor paso a paso


//functions.cpp
void arranque();                    //metodo arranque
void interrupcion();                //metodo parada
void marcha_atras();                //metodo marcha atras
void error();                       //metodo error
//-------------------------------------------------------------------------

//motor_paso_a_paso.cpp
void adelante_motor();				//funcion de ir adelante del motor
void marcha_atras_motor();			//funcion de ir marcha atras del motor
void stop_motor();				    //funcion de quedarse quieto/stopear el motor
//-------------------------------------------------------------------------

//lcd.cpp
void startup_message();
void Interrupt_message();
void gointTO_message();
void backingTO_message();
void pegando_vuelta_message();
void error_message();
//-------------------------------------------------------------------------

//sensor_infrarrojo.cpp
//-------------------------------------------------------------------------

//servo.cpp
//-------------------------------------------------------------------------

//sensor_ultrasonido.cpp
//-------------------------------------------------------------------------
