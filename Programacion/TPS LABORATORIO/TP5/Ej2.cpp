#include <iostream>
#include <stdlib.h>
using namespace std;

void sueldos(int empleados, int categoria, int valhora, int sueldo, int sueldoneto, int total);

int main (void){
	int trabajadores;
	int catg;
	int xhora;
	int cobro;
	int cobroneto;
	int final;
	sueldos(trabajdores, catg, xhora, cobro, cobroneto, final);
}


void sueldos (int empleados, int categoria, int valhora, int sueldo, int sueldoneto, int total){
	do {
		printf (" Ingrese cantidad de empleados: ");
		scanf ("%d", &empleados);
	}while (empleados < 0);
	for (int i = 1 ; i <= empleados ; i++) {
		do {
			printf ("Ingrese su categoria (1 = 15) (2 = 10) (3 = 7) (4 = 5): ");
			scanf ("%d", &categoria);
		}while (valhora < 0 && valhora > 5);
		switch (categoria) {
			case 1: valhora = 15; break;
			case 2: valhora = 10; break;
			case 3: valhora = 7; break;
			case 4: valhora = 5; break;
		}
		do {
			printf ("Ingrese las horas trabajadas: ");
			scanf ("%d", &horas);
		}while (horas <= 1 && horas >= 300);
		if (horas > 200){
		sueldo = ((horas - 200) * valhora *3) + (40 * valhora * 2) + (160 * valhora);
		}
		if (horas > 160 && horas <= 200) {
			sueldo = ((horas - 160) * valhora * 2) + (160 * valhora);
		}
		if (horas > 0 && horas < 160) {
			sueldo = horas * valhora;
		}
		sueldoneto = sueldo - (sueldo * 0.13);
		total = total + sueldoneto;
	}
	total = total / empleados;
	printf ("\nEl promedio de los sueldos es de: " "%d", total);
}
