#include <stdio.h>
#include <string.h>

struct ASEGURADO {
	char nombre[10];
	int telefono;
};

struct POLIZAS {
	char patente[10];
	int modelo;
	char accidente[4];
	int poliza;
	char marca[10];
	int choque;
	struct ASEGURADO a;
};

void cargardatos (struct POLIZAS p);
void calcularpolizas (struct POLIZAS p);
void mostrarpolizas (struct POLIZAS p);

int main(){
	struct POLIZAS po;
	
	
	cargardatos(po);
	calcularpolizas(po);
	mostrarpolizas(po);
}

void cargardatos (struct POLIZAS p){
	for (int i = 0; i < 2; i++){
		printf ("Ingrese la patente del vehiculo. ");
		scanf ("%s", &p.patente);
		printf ("\nIngrese el modelo del vehiculo. ");
		do {
			scanf ("%d", &p.modelo);
		} while (p.modelo <= 2000);
		printf ("\nIngrese la marca del vehiculo. ");
		scanf ("%s", &p.marca);
		printf ("Si la poliza se encuentra vigente, marque 1, sino, 2. ");
		scanf ("%d", &p.poliza);
		printf ("\nIngrese la cantidad de choques del vehiculo. ");
		scanf ("%d", &p.choque);
		
		for (int j = 0; j < p.choque; j++){
			printf("\nIngrese la gravedad del accidente. ");
			scanf ("%s", &p.accidente);
		}
		
		printf ("\nIngrese el nombre del asegurado. ");
		scanf ("%s", &p.a.nombre);
		printf ("\Ingrese el numero de telefono. ");
		scanf ("%d", &p.a.telefono);
	}
}

void calcularpolizas (struct POLIZAS p){
	int contador;
	
	for (int i = 0; i < 2; i++){
		if (p.accidente != "g"){
			contador++;
		}
	}
	
	printf ("La cantidad de polizas sin choques GRAVES, son %d", contador);
}

void mostrarpolizas (struct POLIZAS p){
	char marca[20];
	int comparacion;
	
	for (int i = 0; i < 2; i++){
		printf ("\nIngrese una marca para la poliza. ");
		scanf ("%s", &marca);
		
		comparacion = strcmp(marca, p.marca);
		
		if (comparacion == 0 && p.poliza == 1){
			printf ("\nLa patente es: %s", p.patente);
			printf ("\nEl modelo es: %d", p.modelo);
			printf ("\nTuvo %d accidentes. ", p.choque);
			printf ("\nNombre del titular. %s", p.a.nombre);
			printf ("\nTelefono del titular %d", p.a.telefono);
		}
	}
}