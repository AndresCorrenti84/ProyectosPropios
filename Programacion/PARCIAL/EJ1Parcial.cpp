#include <iostream>
#include <stdio.h>
using namespace std;
#include <iostream>
using namespace std;
int main (void) {
	int numero;
	printf ("Ingrese un numero: ");
	scanf ("%d", &numero);
	if (numero >= 20 && numero <= 40){
		printf ("El numero es correcto. ");
	} else {
		printf ("El numero que ingreso es mayor/menor que el permitido. ");
	}
}
