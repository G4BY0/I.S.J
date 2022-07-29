#include <stdio.h>


int main(){

	
	int Vector[10] = {0,1,2,3,3,5,6,7,0,9}; 
	int temp=0;  
	
	//logica
	for (int i=1;i<10;i++){
	
       for (int j=0; j < 10-i ;j++) {
		   
          if (Vector[j] > Vector[j+1]){
            temp=Vector[j];
            Vector[j]=Vector[j+1];
            Vector[j+1]=temp;
			
          }
       }
	}

	
	for(int k = 0; k < 10; k++){
		
		if(k == 0){
		    
		    printf("Vector[%d] = %d\n" ,k ,Vector[k]);
		    
		}
		if(Vector[k] != Vector[k - 1] && Vector[k] >= Vector[k - 1]){
			
			printf("Vector[%d] = %d\n" ,k ,Vector[k]);
			
		}
		
	}
	
	return 0;
	
	
}