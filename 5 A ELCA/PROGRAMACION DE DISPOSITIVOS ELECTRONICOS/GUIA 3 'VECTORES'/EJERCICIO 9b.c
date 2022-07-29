#include <stdio.h>

int main(){
	//contexto
	puts("Ejercicio 9:\nEn dos vectores se tienen los goles de dos equipos en diferentes partidos que tuvieron entre si.\nEn la posición 0 del vector equipoA están los goles de un partido por ese equipo y en la misma posición del vector equipoB están los goles del otro equipo en ese mismo partido. En la posición 1 de ambos vectores tendremos los goles para otro partido, etc.\nSe pide permitir que el usuario cargue los datos y mostrar cuántos empates han ocurrido.\n\n");
	
	//declaracion
	int empates = 0;
	int partidos; printf("Partidos en total: "); scanf("%d" ,&partidos); //asignando valor correspondiente a partidos
	int equipoA_goles[partidos];
	int equipoB_goles[partidos];
	int partidos_ganados_equipoA = 0;
	int partidos_ganados_equipoB = 0;
	
	
	for(int i = 0; i < partidos ; i++){
		printf("\n\nPartido N°%d:\n" ,i + 1);
		
		printf("Equipo A: ");
		scanf("%d" ,&equipoA_goles[i]);
		printf("Equipo B: ");
		scanf("%d" ,&equipoB_goles[i]);
		
		
		
		if(equipoA_goles[i] > equipoB_goles[i]){
		    
		    partidos_ganados_equipoA++;
		  
		}
		else if(equipoB_goles[i] > equipoA_goles[i]){
		    
		    partidos_ganados_equipoB++;    
		    
		}
		else{
		    
		    empates++;
		    
		}
		
	}
	
	printf("\n\nPartidos empatados: %d" ,empates);
	
	
	if(partidos_ganados_equipoA > partidos_ganados_equipoB){
		
		puts("\nEl equipo ganador es: Equipo A");
		
	}
	
	else if(partidos_ganados_equipoB > partidos_ganados_equipoA){
		
		puts("\nEl equipo ganador es: Equipo B");
		
	}
	
	else{
		
		puts("\nEmpate por equivalencia de partidos ganados");
		
	}
	
	return 0;
}