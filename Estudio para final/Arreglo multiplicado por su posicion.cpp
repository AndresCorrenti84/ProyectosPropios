#include <stdio.h>

void leerarreglo (int v[4]);
int mostrararreglo (int v[4]);

int main (){
	int vector[4];
	leerarreglo(vector);
	mostrararreglo(vector);
}

void leerarreglo (int v[4]){

	for (int i = 0; i < 4; i++){
		printf ("Ingrese su cadena de numeros; ");
		scanf ("%d", &v[i]);
	}
}

int mostrararreglo (int v[4]){
	printf ("\nEl numero multiplicado por su posicion es;\n");
	for (int i = 0; i < 4; i++){
		v[i] = v[i]* i;
		printf("%d\n", v[i]);
	}
}