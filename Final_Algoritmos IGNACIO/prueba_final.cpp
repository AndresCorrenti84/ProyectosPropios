#include <iostream>

void cargaDatos(struct edificio f[], int *piso);
void muestraDatos(struct edificio f[], int *piso);
void inventario(struct edificio f[], int *piso);

struct proveedor{
	
	char nombre[20];
	char tecnico[20];
	int telefono;
};

struct edificio{
	
	int nroInven;
	int oficina;
	char responsable[20];
	int rta[12];
	struct proveedor q;
};

main(){
	
	struct edificio e[10];
	int nroPiso;
	
	cargaDatos(e, &nroPiso);
	muestraDatos(e, &nroPiso);
	inventario(e, &nroPiso);
}

void cargaDatos(struct edificio f[], int *piso){
int i, j, aux = 0;
	
	printf ("Ingrese la cantidad de pisos que hay en el edificio: ");
	scanf ("%d", piso);
	
	printf ("\nDebera cargar los datos de todos los pisos del eificio\n");
	for (i=0; i<*piso; i++){
		
		printf ("\nDatos del piso: %d", i);
		printf ("\nIngrese nro de inventario: ");
		scanf ("%d", &f[i].nroInven);
		printf ("Ingrese el numero de oficina: ");
		scanf ("%d", &f[i].oficina);
		printf ("Ingrese el nombre del responsable: ");
		scanf ("%s", &f[i].responsable);
		
		printf ("\nEstado de la maquina del piso: %d", i);
		for (j=1; j<13; j++){
			
			printf ("\n\nIngrese el estado de la maquina en el mes: %d", j);
			printf ("\n\nIngrese 1 (si funciona), 2 (no funciona o no tiene arreglo), 3 (en reparacion): ");
			
			do{
				scanf ("%d", &aux);
				switch (aux){
					
					case 1: f[i].rta[j] = aux; break;
					case 2: f[i].rta[j] = aux; break;
					case 3: f[i].rta[j] = aux; break;
				}
			} while (f[i].rta[j] != 1 && f[i].rta[j] != 2 && f[i].rta[j] != 3);
		}
		
		printf ("\n\nIngrese los datos del proveedor del piso: %d", i);
		printf ("\n\nIngrese el nombre o razon social del proveedor: ");
		scanf ("%s", &f[i].q.nombre);
		printf ("Ingrese el nombre del tecnico del proveedor: ");
		scanf ("%s", &f[i].q.tecnico);
		printf ("Ingrese el numero del telefono del tecnico: ");
		scanf ("%d", &f[i].q.telefono);
	}
}

void muestraDatos(struct edificio f[], int *piso){
int i, j, control;
	
	for (i=0; i<*piso; i++){
		
		control = 0;
		
		printf ("\n\nMuestra de datos del piso: %d\n", i);
		for (j=7; j<13; j++){
			
			if (f[i].rta[j] == 3){
				
				control ++;
			}
		}
		
		if (control > 2){
					
			printf("\nEl numero de invetario de la maquina %d es %d ", i, f[i].nroInven);
		    printf("\nEl numero de la oficina del piso %d es %d ", i, f[i].oficina);
		    printf("\nEl nombre del responsable del piso %d es %s ", i, f[i].responsable);
		    printf("\nEl nombre del proveedor es %s ", f[i].q.nombre);
		    printf("\nEl nombre del tecnico es %s ", f[i].q.tecnico);
		    printf("\nEl numero de telefono del tecnico es %d ", f[i].q.telefono);
			printf("\nLa maquina %d tuvo mas de 2 revisiones en el segundo semestre", i);
			printf ("\n");
		}
	}
}

void inventario(struct edificio f[], int *piso){
int aux = 0;
struct edificio vectorAux[*piso];

    for (int i=0; i<*piso; i++){
    	
        vectorAux[i].nroInven = f[i].nroInven;
    }

    for (int i=0; i<*piso; i++){
        for (int j=0; j<*piso; j++){
        	
            if (vectorAux[j].nroInven > vectorAux[j+1].nroInven){
                aux = vectorAux[j].nroInven;
                vectorAux[j].nroInven = vectorAux[j+1].nroInven;
                vectorAux[j+1].nroInven = aux;
            }
        }
    }

    printf ("\nLos numeros de invetario ordenados son: ");
    for (int i=0; i<*piso; i++){
    	
        printf ("[%d] ", vectorAux[i].nroInven);
    }
}
