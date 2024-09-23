#include <stdio.h>
using namespace std;

int main (void){
	char palabra[100];
	int letra, i;
	printf ("Ingrese una palabara: ");
	scanf ("%s", &palabra);
	for (i = 0; palabra[i] !='\0'; i++);
	printf ("La cantidad de letras es: %d", i);
}
