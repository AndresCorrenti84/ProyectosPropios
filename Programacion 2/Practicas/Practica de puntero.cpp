#include <stdio.h>
#include <malloc.h>

int main (){
	int a = 5;
	int b = 7;
	int *p1;
	int *p2;
	
	p1 = &a;
	
	p2 = &b; //Lo hacemos que apunte a la direccion.
	
	printf ("%d", *p1 + *p2); //Muestra la suma de los numeros principales con puntero.
	printf ("\n%d %d", &a, &b); //Mostramos la direccion de memoria de ambos numeros.
	
	printf ("\n%d %d", sizeof (a), sizeof (b)); //Mostramos lo que ocupan ambos numeros principales.
	
	
	
}