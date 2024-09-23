#include <iostream>
#include <stdio.h>
using namespace std;
int main (void){
	int numero, primo,  i; //declaracion de variable.
	primo = 0; //divisible x 1 y x si mismo.
	printf ("Ingrese numero natural: ");
	scanf ("%d", &numero);
	for (int i = numero; i > 0; i--){	
		if (numero %i == 0){
			primo++;
		}
	}
		if (primo == 2){
			printf ("Es primo.");
		}else {
			printf ("No es primo.");
		}
}
