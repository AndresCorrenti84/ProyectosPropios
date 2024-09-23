#include <iostream>
#include <stdlib.h>
using namespace std;
int comparacion(int numero1, int numero2, int numero3);
int main (void){
	int valor1, valor2, valor3;
	comparacion(valor1, valor2, valor3);
}

int comparacion(int numero1, int numero2, int numero3) {
	printf (" Ingrese su primer numero ");
	scanf ("%d", &numero1),
	printf (" Ingrese su segundo numero ");
	scanf ("%d", &numero2);
	if (numero1>numero2) {
		printf(" El primero numero es el mayor ");
	} else if (numero2>numero1) {
		printf (" El segundo numero es el mayor ");
	} else if (numero1=numero2){
		printf (" Los numeros ingresados son iguales ");
	}
}
