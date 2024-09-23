#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct PARCIAL {
	int campo1;
	int campo2;
};

void leer (int*numero1, int*numero2);
void intercambio (int numero1, int numero2, int cambio);
void mostrar (int*numero1, int*numero2);

main (){
	struct PARCIAL;
	int n1, n2, aux;
	
	leer(&n1, &n2);
	intercambio(n1, n2, aux);
	mostrar(&n2, &n1);
}

void leer (int*numero1, int*numero2){
	printf ("Ingrese un numero:");
	scanf ("%d", numero1);
	printf ("Ingrese otro numero:");
	scanf ("%d", numero2);
}

void intercambio (int numero1, int numero2, int cambio){
	numero1 = cambio;
	numero2 = numero1;
	cambio = numero2;
	
}

void mostrar (int*numero1, int*numero2){
	printf ("El primer numero es: %d",numero1);
	printf ("\nEl segundo numero es:%d",numero2);
}