#include <stdio.h>
#include <string.h>
#include <ctype.h>

//ejercicio 2

int main(void) {
	
	char palabra[100];
	int longitud, i, inicio=0, fin;
	
	printf ("Ingrese una palabra: ");
	scanf ("%s", &palabra);
	
	longitud = strlen(palabra);
	
	for (i=0; palabra[i]; i++) {
		
		palabra[i] = tolower(palabra[i]);
	}
	
	for (fin=longitud-1; palabra[fin]==palabra[inicio] && fin>=0; inicio++, fin--);
	
	if(inicio==longitud) {
        printf("\nLa palabra es palindromo");
      } else {
        printf ("\nLa palabra no es palindromo");
    }
    
    return 0;
}

