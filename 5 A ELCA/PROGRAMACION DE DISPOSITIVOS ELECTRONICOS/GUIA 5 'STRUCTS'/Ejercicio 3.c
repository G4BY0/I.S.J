#include <stdio.h>

//-------------------------------------------//
//            GABRIEL GUERETA 2022           //
//         INSTITUTO SAN JOSE (A-355)        //
//            CURSO: 5 "A" E.L.C.A           //
//-------------------------------------------//


/*
3) Utilice el ejercicio 1, modificándolo para que las notas del estudiante estén en un vector de notas dentro de la estructura. Este vector de notas puede almacenar hasta 10 notas del alumno. Los lugares no utilizados se escriben con un valor -1 para indicar que ese lugar está vacío.
De esta manera, un estudiante puede haber rendido 2 exámenes, otro 4 y otro 10, para citar algunos ejemplos. 
Se pide conservar la funcionalidad del programa teniendo en cuenta esta nueva organización de la información. Por lo tanto, para mostrar el promedio del estudiante, habrá que considerar las notas que tiene en este vector de notas, teniendo cuidado en utilizar solamente las notas que existan y omitiendo los -1 que pueda haber.

*/

// FUNCION AUXILIAR PARA PROMEDIAR //
float promedio(int);
//-----------------------------------

// ESTRUCTURA //
typedef struct {
    
    int DNI;
    float notas[10];
    float cantidad;
    
} DAT;
//-----------------------------------

#define alumnos_totalidad 5

DAT alumno[alumnos_totalidad];



int main (void){
    
    
    // --------------- LOGICA DE CARGADO DE DATOS DESDE STDIN -------------------
    for(int i = 0; i < alumnos_totalidad; i++){
        
        printf("\nIngrese DNI del %d° alumno: " ,i+1);
        scanf("%d" ,&alumno[i].DNI);
        
        printf("\nIngrese la cantidad de pruebas que rindió (0 - 10): ");
        scanf("%f" ,&alumno[i].cantidad);
        
        for(int j = 0; j < 10; j++){
            
            alumno[i].notas[j] = -1;
            
            
        }
        
        for(int j = 0; j < alumno[i].cantidad; j++){
            
            printf("\nIngrese su %d° nota: " ,j+1);
            scanf("%f" ,&alumno[i].notas[j]);
            
        }
        
    }
    //----------------------------------------------------------------------------

	//------------------------------------IMPRESION DE DATOS A LA STDOUT---------------------------------
    for(int i = 0; i < alumnos_totalidad; i++){
        
        printf("\n\nESTUDIANTE N°%d\nDNI: %d\nPROMEDIO = %.2f\n\n" ,i + 1 ,alumno[i].DNI , promedio(i));
        
    }
	//----------------------------------------------------------------------------------------------------
    return 0;
}


// ------------ FUNCION PROMEDIO ------------------------
float promedio(int numero_de_alumno){

    float acumulador = 0;
    
    for(int i = 0; i < alumno[numero_de_alumno].cantidad; i++){
        
        acumulador = acumulador + alumno[numero_de_alumno].notas[i];
       
    }
    
    acumulador = acumulador / alumno[numero_de_alumno].cantidad;
    
    return (acumulador);
}

//-------------------------------------------------------
