#include <iostream>
using namespace std;
int main (void){
	int matriz[100][100], filas, columnas, f, c, matriz2 [100][100], f2, c2, filas2, columnas2;
	printf ("Ingrese cuantas filas desea: ");
	scanf ("%d", &filas);
	printf ("\nIngrese cuantas columnas desea: ");
	scanf ("%d", &columnas);
	for (f = 0; f < filas; f++){
		for (c = 0; c < columnas; c++){
			printf ("Ingrese un numero: ");
			scanf ("%d", &matriz[100][100]);
		}
	}
	printf ("Ingrese cuantas filas desea de la segunda matriz: ");
	scanf ("%d", &filas2);
	printf ("Ingrese la cantidad de columnas que desea de la segunda matriz: ");
	scanf ("%d", &columnas2);
	for (f2 = 0; f2 < filas2; f2++){
		for (c2 = 0; c2 < columnas2; c2++){
			printf ("Ingrese un numero: ");
			scanf ("%d", &matriz2[100][100]);
		}
	}
	if (filas == filas2 && columnas == columnas2){
		printf ("Las matrices son de igual dimension. ");
	}else {
		printf ("Las matrices son de distintas dimesiones. ");
	}
}
