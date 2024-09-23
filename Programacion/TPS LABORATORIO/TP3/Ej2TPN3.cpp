#include <iostream>
using namespace std;

int main (void) {
	int matriz [100][100], filas, columnas, f, c, prom, promedio, prom2, promedio2;
	printf ("Ingrese cuantas filas ");
	scanf ("%d",& filas);
	printf ("\nIngrese cuantas columnas ");
	scanf ("%d",& columnas);
	for (f = 0; f < filas; f++){
		for (c = 0; c < columnas; c++){
			printf ("Ingrese un numero: ");
			scanf ("%d",& matriz [f][c]);
		}
	}
	for (f = 0; f < filas; f++){
		for (c = 0; c < columnas; c++){
			printf ("\t%d", matriz [f][c]);
		}
		printf ("\n");	
	}
	printf (" La diagonal principal es: ");
	for (f = 0; f < filas; f++){
		for (c = 0; c < columnas; c++){
			if (f == c){
				printf ("%d", matriz [f][c]);
				prom = prom + matriz [f][c];
			}
		}	
	}
	promedio = prom/columnas;
	printf ("\nEl promedio es: " "%d", promedio); 
	
	printf ("\nLa diagonal secundaria es: ");
	for (f = 0; f < filas; f++){
		for (c = 0; c < columnas; c++){
			if ((f + c)==(columnas-1)) {
				printf ("%d", matriz [f][c]);
				prom2 = prom2 + matriz [f][c];
			}
		}
	}
	promedio2 = prom2/columnas;
	printf ("\nEl promedio es: " "%d", promedio2); 
}
