#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
//calcular fibonacci.
int main (void){
	int posiciones, i, numero, numero1, resultado;
	numero = 0;
	numero1 = 1;
	resultado = 0;
	printf ("Ingrese la cantidad de numeros que quiere que se muestre. "); //cantidad de posiciones 
	scanf (" %d", &posiciones); //ingreso de cantidad de posiciones.
	printf ("%d", numero1);
	for (i = 1; i <= posiciones; i++){ //repetitiva.
		resultado = numero+numero1; //1
		numero = numero1; //1, en la primera vuelta, despues va sumando.
		numero1 = resultado;
	    printf (" %d", resultado);
	}
}
