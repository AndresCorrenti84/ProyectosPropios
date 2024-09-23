#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
//encabezados de subprocesos
void llenarnombres(char vector[100]);

//main principal
main (){
	char vectornombres[100];
	llenarnombres(vectornombres);
}



//subprocesos
void llenarnombres(char vector[10]){
	for (int i = 1; i < 11; i++){
		printf ("Ingrese el nombre en la posicion ");
		printf ("%d:  ", i);
		scanf ("%s", &vector[i]);
		printf ("La primera letra es: %c\n", vector[i]);
	}
}