#include <stdio.h>
#include <string.h>
//-------------------------------------------//
//            GABRIEL GUERETA 2022           //
//         INSTITUTO SAN JOSE (A-355)        //
//            CURSO: 5 "A" E.L.C.A           //
//-------------------------------------------//

/* 	
2) Una aerolinea tiene vuelos, los cuales poseen un código alfanumérico (ejemplo: AR1500), una ciudad de origen y una ciudad de destino. Ingrese 4 vuelos en un vector. Luego de ingresados los datos permita que el usuario escriba el nombre de una ciudad y muestre los vuelos que parten y los que arriban a esa ciudad. 
Si no hubiera vuelos para la ciudad ingresada debe mostrarse un mensaje de error.
*/

typedef struct AVION_DATOS{
    
	char *codigo;
    char *ciudad_de_origen;
    char *ciudad_de_destino;
	
	
} AEROLINEA;



int main (){

    AEROLINEA vuelos[4];
    int flag_ningun_vuelo = 1; // 1 <-- TRUE | 0 <-- FALSE
    int a,b;

	//----------------------CARGO DATOS-----------------------
	vuelos[0].codigo = "AR1500";
	vuelos[0].ciudad_de_origen = "Inglaterra";
	vuelos[0].ciudad_de_destino = "España";
	
	vuelos[1].codigo = "BR1511";
	vuelos[1].ciudad_de_origen = "Brasil";
	vuelos[1].ciudad_de_destino = "Inglaterra";
	
	vuelos[2].codigo = "FR1530";
	vuelos[2].ciudad_de_origen = "Chile";
	vuelos[2].ciudad_de_destino = "Brasil";

	vuelos[3].codigo = "CL1611";
	vuelos[3].ciudad_de_origen = "Chile";
	vuelos[3].ciudad_de_destino = "Argentina";
    	//--------------------------------------------------------
    
	//-----EL USUARIO INGRESA LA CIUDAD PENSADA---------
	char sentencia_del_usuario[100];
	printf("Ingresa ciudad en mente: ");
	scanf("%s" ,sentencia_del_usuario);
   	//--------------------------------------------------
    

	//--------------------------------------LOGICA DE IMPRESION DE VUELOS A STDOUT -----------------------------------------------
    	for(int i = 0; i < 4; i++){
		
		a = strcmp (sentencia_del_usuario, vuelos[i].ciudad_de_origen);
		
		b = strcmp (sentencia_del_usuario,vuelos[i].ciudad_de_destino);
		
		if(a == 0 || b == 0){
		        
			printf("\n\n%s" ,vuelos[i].codigo);
			
			if(a == 0){
			
				printf("\nParte de %s"  ,sentencia_del_usuario);
				flag_ningun_vuelo = 0;
			}	
            	                	            
			if(b == 0){
                		            	        
				printf("\nDestina a %s"  ,sentencia_del_usuario);
				flag_ningun_vuelo = 0;
			}
			
		}
		
	}
	
	if(flag_ningun_vuelo == 1){
		
		puts("Ningun vuelo destina ni parte de la ciudad ingresada...");
	}
	//-----------------------------------------------------------------------------------------------------------------------------
    
}
