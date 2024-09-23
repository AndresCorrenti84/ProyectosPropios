#include <stdio.h>
#include <string.h>

struct ASEGURADO {
	char nombre[15];
	int telefono;
};


struct POLIZAS {
	char patente [10];
	int modelo;
	char marca[10];
	int vigencia;
	char accidente;
	int nrochoques;
	struct ASEGURADO a;
};

void cargadatos (struct POLIZAS p[]);
void mostrardatos (struct POLIZAS p[]);
void accidentespolizas (struct POLIZAS p[]);
void polizasvigentes (struct POLIZAS p[]);
int main (){
	struct POLIZAS pe[100];
	
	cargadatos(pe);
	mostrardatos(pe);
	accidentespolizas(pe);
	polizasvigentes(pe);
	
}

void cargadatos (struct POLIZAS p[]){
	
	for (int i = 0; i < 1; i++){
		printf ("PATENTE: ");
		scanf ("%s", &p[i].patente);
		printf ("\nMODELO: ");
		do{
			
			scanf ("%d", &p[i].modelo);
		}while(p[i].modelo < 2000);
		printf ("\nMARCA: ");
		scanf("%s", &p[i].marca);
		printf ("VIGENCIA DE POLIZA: 1=SI/2=NO  ");
		scanf ("%d", &p[i].vigencia);
		printf ("\nCANTIDAD DE CHOQUES:");
		scanf("%d", &p[i].nrochoques);
		for (int j = 0; j < p->nrochoques ; j++){
			printf ("\nGRAVEDAD DEL ACCIDENTE: ");
			scanf("%s", &p[j].accidente);
		}
		printf ("\nNOMBRE TITULAR: ");
		scanf("%s", &p[i].a.nombre);
		printf ("\nCELULAR TITULAR: ");
		scanf("%d", &p[i].a.telefono);
	}
}

/*void mostrardatos (struct POLIZAS p[]){
	for (int i = 0; i < 1; i++){
		printf ("  DATOS DE VEHICULO  \n");
		printf ("%s ", p[i].patente);
		printf ("\n%d ", p[i].modelo);
		printf ("\n%s ", p[i].marca);
		printf ("\n%d ", p[i].vigencia);
		printf ("\n% ", p[i].nrochoques);
		printf ("\n%s ", p[i].accidente);
		printf ("\n%s ", p[i].a.nombre);
		printf ("\n%d ", p[i].a.telefono);
	}
} */

void accidentespolizas (struct POLIZAS p[]){
	int contador = 0;
	for (int i = 0; i < 1; i++){
		if (p[i].accidente != 'g' && p[i].accidente != 'y' ){
			contador++;
		}
		printf ("La cantidad de polizas que no tienen ningun accidente GRAVE son: %d", contador);
	}
}


void polizasvigentes (struct POLIZAS p[]){
	
	char marca[20];
	int comparacion;
	
	for (int i = 0; i < 1; i++){
		printf ("\nMARCA DE LA POLIZA QUE DESEA. ");
		scanf ("%s", &marca);
		comparacion = strcmp(marca, p[i].marca);
		
		if (comparacion == 0 && p[i].vigencia == 1){
			printf ("  DATOS DE VEHICULO  \n");
			printf ("%s ", p[i].patente);
			printf ("\n%d ", p[i].modelo);
			printf ("\n% ", p[i].nrochoques);
			printf ("\n%s ", p[i].a.nombre);
			printf ("\n%d ", p[i].a.telefono);
		}
	}
}

