#include <stdio.h>

void arreglo (int vector[10]);
void leer (int valor);
void busqueda (int vector[10], int valor);

main (){
	int v[10], val;
	arreglo(v);
	leer(val);
	busqueda(v, val);
}


void arreglo (int vector[10]){
	for (int i = 0; i < 10; i++){
		printf ("Llene el arreglo de numeros. ");
		scanf ("%d", &vector[i]);
	}
}

void leer (int valor){
	do{
		printf ("Ingrese un numero.  ");
		scanf ("%d", &valor);
	}while (valor < 0);
}

void busqueda (int vector[10], int valor){
	int contador;
	for (int i = 0; i < 10; i++){
		if (valor > vector[i]){
			contador = contador++;
		}
	} printf ("La cantidad de numeros mayores son: %d", contador);
}