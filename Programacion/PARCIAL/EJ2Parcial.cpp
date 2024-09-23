#include <iostream>
#include <stdio.h>
using namespace std;

int main (void){
	//Ingreso de numero.
	int arreglo[10], i, numero, contador=0;
		printf ("Ingrese un numero: ");
	scanf ("%d", &numero);
	//Condicion.
	if (numero >= 20 && numero <= 40){
		printf ("El numero es correcto. ");
	} else {
		printf ("El numero que ingreso es mayor/menor que el permitido. ");
	}
	//Ingreso de arreglo.
	for (i = 0; i < 10; i++){
		printf ("\nIngrese un numero: ");
		scanf ("%d", &arreglo[i]);
	}
	//Mostrar arreglo.
	for (i = 0; i < 10; i++){
		printf ("\n");
	printf ("El arreglo es: [%d]", arreglo[i]);
	}
	//Condicion para saber si el numero SI se encuentra en el arreglo.
	for (i = 0; i < 10; i++){
		if (arreglo[i] == numero){
			contador++;
			printf ("\nEl numero que ingreso, se encuentra, y en la posicion %d", i);
			} 
		}
		//Contador para saber si no se encuentra (con condicion).
		if (contador == 0){
			printf ("\nEl numero que ingreso no se encuentra en el arreglo. ");
		}
}
