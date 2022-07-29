#include <stdio.h>

int main(){
    //contexto
    puts("Ejercicio 10:\nSe cuenta con dos vectores de 8 enteros cada uno. Estos vectores tienen DNIs de jugadores de tenis.\nSe pide ingresar los datos y mostrar en pantalla las parejas, armadas así: el primero de un vector con el último del otro, el segundo con el anteúltimo, etc.");
        
        
    int Vector[8];
    int Vector2[8];
       
        
        //recoleccion de datos por la entrada con contexto al usuario
        for(int i = 0; i < 8 ; i++){
           
            printf("\nINGRESAR D.N.I DEL %d° JUGADOR: " , i + i + 1);
            scanf("%d" ,&Vector[i]);
          
            printf("\nINGRESAR D.N.I DEL %d° JUGADOR: " , i + i + 2);
            scanf("%d" ,&Vector2[i]);
            
        }
        
        //a la salida
        for(int i = 0; i < 8; i++){
            
            printf("\nVector[%d] = %d\t\t\tVector2[%d] = %d" ,i ,Vector[i] ,7 - i ,Vector2[7 - i]);
            
        }
        
    return 0; 
        
}