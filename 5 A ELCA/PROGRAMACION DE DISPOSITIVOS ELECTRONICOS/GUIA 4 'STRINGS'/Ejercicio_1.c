//----------------------------------//
// GUIA DE EJERCICIOS: STRINGS      //
// ALUMNO: GABRIEL B. GUERETA TADEI //
// CURSO: 5 "A" E.L.C.A.            //
// EJERCICIO N� --> 1               //
//----------------------------------//

/*
  ENUNUCIADO:
  > Permitir que el usuario ingrese una palabra de hasta 20 letras. Mostrar en pantalla cu�ntas letras tiene la palabra ingresada.
   Por ejemplo "CASA" debe indicar 4 letras.
*/
//Lib STDIN STDOUT
#include <stdio.h>

//declaro funcion
int function();


int main(void){
    
    
    
    
    printf("La palabra ingresada es de %ld letras" ,function());
    

    return 0;

}


int function(){
    
    char aux;
    
    for(unsigned long numero_de_letras = 0; numero_de_letras < 20; numero_de_letras++){
       
        aux = getchar();
        
        // TODAS LAS POSIBILIDADES QUE SE ME PUDIERON OCURRIR MIRANDO LA TABLA ASCII 'LOS CARACTERES DE CONTROL'
        if(aux == '\n' || aux == ' ' || aux == '\t' || aux == '\v' || aux == '\f' || aux == '\r'){
            
           return numero_de_letras; 
        
        }
        
        
    }
    
    return 20;

}