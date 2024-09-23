#include <iostream>

main(){
	
	int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8}; //El arreglo debe estar ordenado de forma ascendente
	int sup, inf, mitad, dato;
	char flag = 'F';
	
	dato = 6; //Dato que queremos encontar en el arreglo
	inf = -1; //Indica el inicio del arreglo
	sup = 8; //Indica la cantidad de elementos del arreglo
	
	while ((inf < sup-1) && (sup > inf+1)){
		
		mitad = (inf + sup) / 2;
		
		if (numeros[mitad] == dato){
			
			flag = 'V';
			break;
		}
		
		if (numeros[mitad] > dato){
			
			sup = mitad;
		}
		
		if (numeros[mitad] < dato){
			
			inf = mitad;
		}
	}
	
	if (flag == 'V'){
		
		printf ("\nEl numero se encontro en la posicion: %d", mitad);
	}
	else {
		
		printf ("\nEl numero no ha sido encontrado");
	}
}
