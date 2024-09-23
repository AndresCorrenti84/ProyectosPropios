#include <iostream>
#include <stdio.h>

int pasajevalor (int *nro);

int main (){
	int n1;
	printf ("Ingrese un numero. \n");
	scanf ("%d", &n1);
	printf ("El numero ingresado y multiplicado por 10 es: %d", n1 = pasajevalor(&n1));
}

int pasajevalor (int *nro){
	*nro * 10;
	return *nro;
}