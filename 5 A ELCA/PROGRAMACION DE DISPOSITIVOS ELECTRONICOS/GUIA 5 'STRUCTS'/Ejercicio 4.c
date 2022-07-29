#include <stdio.h>

//-------------------------------------------//
//            GABRIEL GUERETA 2022           //
//         INSTITUTO SAN JOSE (A-355)        //
//            CURSO: 5 "A" E.L.C.A           //
//-------------------------------------------//


/* 
4) Una ferretería tiene un listado de facturas emitidas en cierto año, con estos datos: 
número de factura, fecha de emisión (día y mes), nombre del cliente y monto total. 
Dado un vector de 10 facturas, se necesita mostrar en pantalla cuál fue el mejor mes (o sea, el de mayor dinero facturado). 
Los datos se pueden ingresar por teclado o dejarlos fijos en el programa para no perder tiempo en tipear datos.
*/

typedef struct {
	
	int numero_de_factura;
	int fecha_de_emision[2]; // posicion 0 mes, posicion 1 dia
	char nombre_cliente[100];
	int monto_total;
	
}FACTURAS;



int main(){
	
    FACTURAS facturas[10];
    int flag_mayor_monto_total = 0;
    int flag_mayor_monto_total_mes = 0; // FLAG CREADO PARA RECONOCER EL MAYOR MONTO EN DINERO
    int flag_mayor_monto_similitud_mes[10];

    for(int i = 0 ;i < 10; i++){
    
        flag_mayor_monto_similitud_mes[i] = 0;
    }
    
	// --------------- LOGICA DE CARGADO DE DATOS DESDE STDIN -------------------
	for(int i = 0; i < 10; i++){
		
		facturas[i].numero_de_factura = i+1;
		
		printf("\nIngresar nombre del cliente N%d: " ,i+1);
		scanf("%s" ,&facturas[i].nombre_cliente[0]);
		
		printf("\nIngresar mes de emision (en numeros): ");
		scanf("%d" ,&facturas[i].fecha_de_emision[0]);
		
		printf("\nIngresar dia de emision (en numeros): ");
		scanf("%d" ,&facturas[i].fecha_de_emision[1]);
		
		printf("\nIngresar monto total: $ ");
		scanf("%d" ,&facturas[i].monto_total);
		
		//---------------------CONDICIONALES CON FLAG----------------------------
		if(flag_mayor_monto_total < facturas[i].monto_total){
			
			flag_mayor_monto_total_mes = facturas[i].fecha_de_emision[0];
            
			flag_mayor_monto_total = facturas[i].monto_total;
			
		for(int i = 0 ;i < 10; i++){
                
                	flag_mayor_monto_similitud_mes[i] = 0;
                
            	}
			
		}
        
		
        	if(flag_mayor_monto_total = facturas[i].monto_total){
            
            		flag_mayor_monto_similitud_mes[i] = facturas[i].fecha_de_emision[0];
            
       		}
        	//-----------------------------------------------------------------------
	 }
	 //------------------------------------------------------------------------------


    	
    
	// mayor dinero facturado mostrado a la salida //
	
	
	    
	printf("\n\nEl mayor dinero facturado fue en el mes %2.d \n" ,flag_mayor_monto_total_mes);
	

	return 0;
	
}
