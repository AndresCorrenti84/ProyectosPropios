#include <stdio.h>
//ejercicio 4 switch
main () {
	int numeropar, resto;
	printf (" Ingrese su numero ");
	scanf ("%d", &numeropar);
	resto = (numeropar %2 == 0);
	switch(resto) {
		case 1: printf(" Su numero es par "); break;
		default: printf(" Numero impar "); break;
	}
}
