#include <stdio.h>

void leerarreglo (int v[30]);
int mostrararreglo (int v[30]);

int main(){
	int vector[30];
	
	leerarreglo(vector);
	mostrararreglo(vector);
}

void leerarreglo (int v[30]){
	for (int i = 0; i < 30; i++){
	printf ("Ingrese su cadena de numeros.");
	scanf ("%d", &v[i]);
	}
}

int mostrararreglo (int v[30]){
	printf ("\nLos numeros ingresados son:\n");
	for(int i = 0; i < 30; i++){
		printf ("%d", v[i]);
		printf ("\n");
	}
}