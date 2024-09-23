#include <stdio.h>
//ejercicio 3
main() {
	char letra;
	printf (" Ingrese su letra ");
	scanf ("%c", &letra);
	if (letra == 'a' || letra == 'e'|| letra == 'i'|| letra == 'o'|| letra == 'u') {
		printf(" La letra ingresada es una vocal ");
	} else {
		printf (" Su letra es una consonante ");
	}
}
