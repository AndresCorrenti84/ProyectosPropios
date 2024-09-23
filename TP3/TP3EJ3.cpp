#include <iostream>
#include <stdio.h>
using namespace std;

int main (void){
	int numero = 1;
	printf ("%d", numero);
	while (numero < 100){
		numero = numero + 4;
			printf ("\n"); //salto de linea
		printf ("%d", numero);
		numero = numero -2;
			printf ("\n"); //salto de linea
		printf ("%d", numero);
		if (numero == 97){
			printf ("\n");
			system ("pause");
			return 0;
		}
	}
}
