#include <iostream>
using namespace std;

int main (void) {
	
	int vector[9], i, suma=0, promedio, mayor, menor;
	for (i = 0; i < 9; i++){
		printf ("Ingrese un numero: ");
		scanf ("%d", & vector[i]);
		suma = suma + vector[i];
	}
	promedio = suma / 9;
	printf ("La suma es %d", suma);
	printf ("\nEl promedio es %d", promedio);//media aritmetica == promedio
	
	mayor = 0; //numero mas lejos
	for (i = 0; i < 9; i++){
		if (vector [i] > promedio){
			mayor = vector[i];
		}
	}
	printf ("\nEl numero mas alejado a la media %d \n", mayor);
	menor = 10000000000;
	for (i = 0; i < 9; i++){
		if (vector[i] < menor) {
			menor = vector [i];
		}
	}
	printf ("\nEl numero mas cercano a la media es: %d", menor);

}
