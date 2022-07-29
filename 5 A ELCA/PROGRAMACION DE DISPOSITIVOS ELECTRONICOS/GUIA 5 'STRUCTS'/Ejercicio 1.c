#include <stdio.h>

//-------------------------------------------//
//            GABRIEL GUERETA 2022           //
//         INSTITUTO SAN JOSE (A-355)        //
//            CURSO: 5 "A" E.L.C.A           //
//-------------------------------------------//

    
/* 

1) Declare una estructura para almacenar datos de estudiantes (DNI y dos notas correspondientes a los dos cuatrimestres del anio).
Haga un programa que permita ingresar los datos de 5 estudiantes en un vector de estas estructuras.
Luego de ingresar los datos se deben mostrar los DNI de cada estudiante y el promedio que tiene en sus exC!menes.

*/
//-----ESTRUCTURA-----------
typedef struct ALUMNO_DATOS{
    
    int DNI;
    int cuatrimestres_2[2];
    
} DAT;
//--------------------------

//------OBJETO CREADO-------
DAT alumno_[5];
//--------------------------

int main (void){
    
    // --------------- LOGICA DE CARGADO DE DATOS DESDE STDIN -------------------

    for(int i = 0; i < 5; i++){
        
        printf("\nIngrese DNI del %d° alumno: " ,i+1);
        scanf("%d" ,&alumno_[i].DNI);
        
        printf("\nIngrese su 1° nota del cuatrimestre: ");
        scanf("%d" ,&alumno_[i].cuatrimestres_2[0]);
        
        printf("\nIngrese su 2° nota del cuatrimestre: ");
        scanf("%d" ,&alumno_[i].cuatrimestres_2[1]);
        
        
    }
    //------------------------------------IMPRESION DE DATOS A LA STDOUT---------------------------------
    for(int i = 0; i < 5; i++){
        
        printf("ESTUDIANTE N°%d\nDNI: %d\nPROMEDIO = %d\n\n" ,i + 1 ,alumno_[i].DNI , (alumno_[i].cuatrimestres_2[0] + alumno_[i].cuatrimestres_2[1]) / 2);
        
    }
    //---------------------------------------------------------------------------------------------------

    return 0;
}
