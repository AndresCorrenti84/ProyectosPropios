#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main (void){
	int numero, numero1, posiciones, resultado, vueltas;
	numero = 0;
	numero1 = 1;
	resultado = 0;
	vueltas = 1;
    printf ("Ingrese la cantidad de numeros que quiere que se muestre. ");
    scanf ("%d", posiciones);
    printf ("%d", numero1);
    
    while(vueltas <= posiciones){
        resultado=numero + numero1;
        numero=numero1;
        numero1=resultado;
        printf ("%d", resultado);
        vueltas++;
    }
}
