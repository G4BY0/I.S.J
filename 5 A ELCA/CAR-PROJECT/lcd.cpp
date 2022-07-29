//-------------------------------------------//
//            GABRIEL GUERETA 2022           //
//            FILE: "LCD PROGRAMME"          //
//-------------------------------------------//

//INCLUDING ALL LIBRARIES AND FILES FOR THIS:
#include <setup.hpp>                  //Fichero personal setup
//------------------------------------------------------------


LiquidCrystal lcd(10,11,9,8,7,6); // (RS, E, D4, D5, D6, D7)

//--------------- MENSAJE DE ENCENDIDO -----------------//
void startup_message(){

    lcd.clear();
    lcd.setCursor("0,0");
    lcd.print("Gabriel Guereta");
    lcd.setCursor("0,1");
    lcd.print("Arrancando...");
    lcd.blink();

}
//------------------------------------------------------//

//--------------- MENSAJE DE INTERRUPCION -----------------//
void Interrupt_message(){

    lcd.clear();
    lcd.setCursor("0,0");
    lcd.print("¡INTERRUPCION!");
    lcd.setCursor("0,1");
    lcd.print("PASO INACCESIBLE...");
    lcd.blink();

}
//---------------------------------------------------------//

//--------------- MENSAJE DE YENDO PARA DELANTE -----------------//
void gointTO_message(){

    lcd.clear();
    lcd.setCursor("0,0");
    lcd.print("YENDO ADELANTE");
    lcd.setCursor("0,1");
    lcd.print("");
    lcd.blink();

}
//---------------------------------------------------------//


//--------------- MENSAJE DE MARCHA-ATRAS -----------------//
void backingTO_message(){

    lcd.clear();
    lcd.setCursor("0,0");
    lcd.print("YENDO MARCHA ATRAS");
    lcd.setCursor("0,1");
    lcd.print("");
    lcd.blink();

}
//---------------------------------------------------------//

//--------------- MENSAJE DE PEGANDO-VUELTA -----------------//
void pegando_vuelta_message(){

    lcd.clear();
    lcd.setCursor("0,0");
    lcd.print("ACCEDIENDO A PROTOCOLO:");
    lcd.setCursor("0,1");
    lcd.print("EQUILIBRIO");
    lcd.blink();

}
//------------------------------------------------------------//

//--------------- MENSAJE DE ERROR -----------------//
void error_message(){

    lcd.clear();
    lcd.setCursor("0,0");
    lcd.print("ERROR");
    lcd.setCursor("0,1");
    lcd.print("REVISAR PROBLEMA...");
    lcd.blink();

}
//------------------------------------------------------------//
