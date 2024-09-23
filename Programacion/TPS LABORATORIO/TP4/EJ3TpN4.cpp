#include <stdio.h>

//ejercicio 3

int main(void) {
	
	char palabra[50], letra1, letra2;
	int i;
	
	printf ("Ingrese una palabra: ");
	scanf ("%s", &palabra);
	fflush(stdin); 
	
	printf ("\nIngrese la letra que quiere cambiar: ");
	scanf ("%c", &letra1);
	fflush(stdin);
	
	printf ("\nIngrese la letra reemplazante: ");
	scanf ("%c", &letra2);
	fflush(stdin);

	
	for (i=0; i<palabra[i]; i++) {
		
		if (palabra[i] == letra1) {
			palabra[i] = letra2;
		}
	}
	
	printf ("\nLa nueva palabra formada es: %s", palabra);
}
