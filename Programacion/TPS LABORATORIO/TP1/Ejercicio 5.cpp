#include <stdio.h>
//ejercicio 5
main () {

	int valor1, valor2, valor3;
	printf("Ingrese el valor 1: ");
	scanf ("%d", &valor1);
	printf ("Ingrese el valor 2: ");
	scanf ("%d", &valor2);
	printf ("Ingrese el valor 3: ");
	scanf ("%d", &valor3);
	
	if (valor1 > valor2 && valor1 > valor3) {
		printf ("El primer valor es el mayor");
	}
	else if (valor2 > valor1 && valor2 > valor3) {
		printf ("El segundo valor es el mayor");
	}
	else if (valor3 > valor1 && valor3 > valor2) {
		printf("El tercer valor es el mayor");
	}
	else if (valor1 == valor2 && valor1 == valor3) {
		printf (" Los tres valores son iguales ");
	}
	else if (valor1 == valor2 && valor1 > valor3) {
		printf (" Los primeros dos numero son iguales, y son los mayores");
	}
	else if (valor2 == valor3 && valor2 > valor1) {
		printf (" El segundo y tercer valor son iguales, y son los mayores ");
	}
	else if (valor1 == valor3 && valor1 > valor2) {
		printf (" El primer valor y el ultimo son iguales, y son los mayores");
	}
	else if (valor1 == valor2 && valor1 < valor3) {
		printf (" Los dos priimeros valores son iguales, pero el mayor es el tercero");
	}
}

