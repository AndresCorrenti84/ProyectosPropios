#include <iostream>
#include <stdlib.h>
using namespace std;
int consonante(char letra);
int main (void){
	char letr;
	consonante(letr);
}


int consonante(char letra){
	printf (" Ingrese su letra ");
	scanf ("%c", &letra);
	if (letra == 'a' || letra == 'e'|| letra == 'i'|| letra == 'o'|| letra == 'u') {
		printf(" La letra ingresada es una vocal ");
	} else {
		printf (" Su letra es una consonante ");
	}
}
