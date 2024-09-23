//funcion
#include <stdio.h>
//prototipo o encabezado
int suma (int nro1, int nro2);
int main (void){ //main, donde solo llamamos al proceso, y nos ahorramos lugar.
	int valor1, valor2, resultado;
	printf ("Ingrese dos valores para sumar. ");
	scanf ("%d", &valor1);
	scanf ("%d", &valor2);
	resultado = suma(valor1, valor2);
	printf ("\nEl resultado es: %d", resultado);
}

//encabezado.
int suma (int nro1, int nro2){ //proceso
	int total;
	total = nro1 + nro2;
	return total; //porque devuelve un entero.
}
//void no devuelve nada. (hablar con el usuario, carteles, mensajes etc,)
