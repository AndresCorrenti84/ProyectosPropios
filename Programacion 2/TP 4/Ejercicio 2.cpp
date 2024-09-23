#include <stdio.h>

int main (){
	int x = 5;
	int f = 7;
	
	int *pnro1, *pnro2;
	
	pnro1 = &x;
	pnro2 = &f;
	
	printf ("%d %d", x, f);
	
	printf ("\nLa suma de los numeros es; %d", *pnro1 + *pnro2);
	
	printf ("\nLa direccion de memoria del primer numero es %d, y la del segundo es %d", &x, &f /*pnro1, pnro2*/ );
	
	printf ("\Lo que ocupan las dos variables iniciales es: %d, %d", sizeof(x), sizeof(f));
}