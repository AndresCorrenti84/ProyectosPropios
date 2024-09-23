#include <stdio.h>
#include <iostream>

using namespace std;

//Ejercicio Parcial, Ignacio Juri.

struct PROVEEDOR{
	
	char nombre[20];
	char tecnico[20];
	int telefono;
};

struct REVISION{
	
	int rtm[12];
};

struct MAQUINA{
	
	int piso;
	int nroInvent;
	int oficina;
	char responsable[20];
	struct REVISION x;
	struct PROVEEDOR y;
};

void cargarDatos(struct MAQUINA maq[], struct REVISION rev, struct PROVEEDOR prov);
void mostrarDatos(struct MAQUINA maq[], struct REVISION rev, struct PROVEEDOR prov);

main() {
	
	struct MAQUINA m[10];
	struct REVISION q;
	struct PROVEEDOR p;
	
	cargarDatos(m, q, p);
	mostrarDatos(m, q, p);
}

void cargarDatos(struct MAQUINA maq[], struct REVISION rev, struct PROVEEDOR prov){
int respuesta;
	
	printf ("Debera cargar los datos de las maquinas de la empresa\n");
	
	for (int i=0; i<10; i++){
	
	    printf ("\nMaquina %d \n", i);
	    printf ("\nIngrese el piso en el que se encuentra la maquina: ");
	    scanf ("%d", &maq[i].piso);
	    printf ("\nIngrese el numero de inventario de la maquina: ");
	    scanf ("%d", &maq[i].nroInvent);
	    printf ("\nIngrese el numero de oficina del piso actual: ");
	    scanf ("%d", &maq[i].oficina);
		printf ("\nIngrese el nombre del responsable del piso: ");
		scanf ("%s", &maq[i].responsable);
		
		for (int j=0; j<12; j++){
			
			printf ("\nIngrese el estado de la maquina en el mes %d ", i);
			printf ("\n\n1 (si funciona), 2 (no tiene arreglo), 3 (en reparacion)\n");
			do {
				respuesta = 0;
				scanf ("%d", &respuesta);
				
				switch (respuesta) {
					
					case 1: maq[i].x.rtm[j] = respuesta; break;
					case 2: maq[i].x.rtm[j] = respuesta; break;
					case 3: maq[i].x.rtm[j] = respuesta; break;
				}
			} while(maq[i].x.rtm[j] != 1 && maq[i].x.rtm[j] != 2 && maq[i].x.rtm[j] != 3);
		}
		
		printf ("\nIngrese el nombre o razon social del proveedor: ");
		scanf ("%s", &maq[i].y.nombre);
		printf ("\nIngrese el nombre del tecnico del proveedor: ");
		scanf ("%s", &maq[i].y.tecnico);
	    printf ("\nIngrese el numero del telefono del tecnico: ");
	    scanf ("%d", &maq[i].y.telefono);
	}
}

void mostrarDatos(struct MAQUINA maq[], struct REVISION rev, struct PROVEEDOR prov){
int cont = 0;
   
	for(int i=0; i<10; i++){	
        for(int j=6; j<12; j++){

            if(maq[i].x.rtm[j] == 3){

            cont++;
            
                if(cont >= 2){
                	
                	printf("\nEl numero de invetario de la maquina %d es %d ", i, maq[i].nroInvent);
		            printf("\nEl numero de la oficina del piso %d es %d ", i, maq[i].oficina);
		            printf("\nEl nombre del responsable del piso %d es %s ", i, maq[i].responsable);
		
		            printf("\nEl nombre del proveedor es %s ", maq[i].y.nombre);
		            printf("\nEl nombre del tecnico es %s ", maq[i].y.tecnico);
		            printf("\nEl numero de telefono del tecnico es %d ", maq[i].y.telefono);
                    
					printf("\nLa maquina %d tuvo mas de 2 revisiones en el segundo semestre", i); break;
                }
            }
        }
    }
}

