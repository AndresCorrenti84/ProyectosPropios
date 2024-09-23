#include <stdio.h>
//ejercicio 1
main() {
	int numero1, numero2, igualdad;
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
