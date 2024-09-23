#include <stdio.h>
// ejercicio 4 if
main () {
	int numeropar;
	printf (" Ingrese numero par ");
	scanf ("%d", &numeropar);
	if (numeropar  %2 == 0) {
		printf (" El numero ingresado es par ");
	}else{
		printf (" El numero ingresado es impar ");
	}
}
