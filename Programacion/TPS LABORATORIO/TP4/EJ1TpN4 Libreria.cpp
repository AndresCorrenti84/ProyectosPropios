#include <stdio.h>
#include <string.h>

int main (void){
	char palabra[100];
	int letra;
	
	printf ("Ingrese una palabra: ");
	scanf ("%s", &palabra);
	letra = strlen(palabra);
	printf ("La longitud de la palabra (en letras), es de: %d", letra);
	
	return 0;
}
