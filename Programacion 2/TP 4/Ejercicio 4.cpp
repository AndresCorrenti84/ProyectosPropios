#include <stdio.h>
#include <malloc.h>


int main (){
	int *vector;
	int p;
	int f;
	
	//creacion
	printf ("Ingrese la dimension de la que desea el vector.");
	scanf ("%d", &p);
	
	vector = (int *) malloc (p*sizeof(int));
	
	//carga de elementos.
	
	for (f = 0; f < p; f++){
		printf ("\nIngrese el numero.");
		scanf ("%d", &vector[f]);
		
	}
}