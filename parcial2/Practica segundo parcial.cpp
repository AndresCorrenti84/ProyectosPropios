#include <iostream>
#include <stdlib.h>

using namespace std;

void cargarpaciente (int *p, struct PACIENTE V [] );

struct PRESION{
	int minimo;
	int maximo;
};
struct PACIENTE{
	char apellido[30];
	int edad;
	struct PRESION L[5];
}; 

int main (void){
	struct PACIENTE p[100];
	int n;
	cargarpaciente(&n,p);
	
}


void cargarpaciente (int *p, struct PACIENTE V [] ){
	printf ("Ingrese cantidad de pacientes ");
	cin >>*p;
	for (int i=1; i < *p; i++){
		printf ("Ingrese el apellido del paciente.\n");
		scanf ("%s",&V[i].apellido);
		printf ("Ingrese la edad del paciente.\n");
		scanf ("%d",&V[i].edad);
		for (int j = 1; j < 6; j++){
			printf ("Ingrese la maxima de su presion, por %d en el dia. ",j);
			scanf ("%d",&V[i].L[j].maximo);
			printf ("\nIngrese la minima de su presion, por %d en el dia. ",j);
			scanf ("%d",&V[i].L[j].minimo);
		}
	}
}


void ordenar (int n, struct PACIENTE V[]){
	struct PACIENTE aux;
	do{
		for
	}while (ordenado ==0);
}