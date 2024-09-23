#include <stdlib.h>
#include <iostream>
#include <stdio.h>
using namespace std;
//encabezado de de subprocesos
void arreglo (int arreglo[20]);
int multiplicacion (int arreglo[20]);
//main principal
main (){
	int vector [20];
	arreglo(vector);
	multiplicacion(vector);
}


//subprocesos
void arreglo (int arreglo[20]){
	for (int i=0; i < 20; i++){
		printf ("Rellene el vector en la posicion: ");
		printf (" %d  ", i);
		scanf ("%d", &arreglo[i]);	
	}
}

    int multiplicacion (int arreglo[20]){
	int multiplicacion;
	for (int i = 0; i < 20; i++){
	    multiplicacion = arreglo[i]*i;
	    printf ("\nEl numero en la posicion %d", i);
		printf (", el resultado es: %d", multiplicacion);
	}
	return multiplicacion;
}          