#include <iostream>

main(){
	
	int vector[7];
	int i, j, aux;
	
	for (i=0; i<7; i++){
		
		printf ("Ingrese un numero: ");
		scanf ("%d", &vector[i]);
	}
	
	printf ("\nVector ordenado: ");
	for (int i=0; i<7; i++){
		for (int j=0; j<7; j++){
			
			if (vector[j] > vector[j+1]){
				aux = vector[j];
				vector[j] = vector[j+1];
				vector[j+1] = aux;
			}
		}
	}
	
	for (int i=0; i<7; i++){
		
		printf ("[%d] ", vector[i]);
	}
}
