#include <stdio.h>
#include <iostream>


//estructuras

struct PROVEEDOR {
	char nomprovedor [15];
	char tecnico [15];
	int telefono;
};

struct REVISION {
	int revisionAnual[12];
	int revisionMensual;
};

struct ORGANIZACION	 {
	int piso;
	int nroinventario;
	int oficina;
	char nomresponsable [15];
	struct REVISION rev;
	struct PROVEEDOR prov;
};
	
//encabezado
	
void cargardatos (struct ORGANIZACION org[]);
void mostrarDatos(struct ORGANIZACION org[]);
void mostrarmaquina(struct Organizacion org[]);

//mainprincipal
main(){
	struct REVISION r[12];
	struct PROVEEDOR p;
	struct ORGANIZACION v[10];
	cargardatos(v);
	mostrarDatos(v);
	mostrarmaquina(v);
}

//subproceso
void cargardatos (struct ORGANIZACION org[]){
	for (int i = 0; i < 10; i++){
		printf ("Ingrese en que piso se encuentra la maquina. ");
		scanf ("%d", &org[i].piso);
		printf ("\nIngrese numero de inventario. ");
		scanf ("%d", &org[i].nroinventario);
		printf ("\nIngrese el numero de oficina del piso que se encuentra. ");
		scanf ("%d", &org[i].oficina);
		printf ("Ingrese el nombre del responsable. ");
		scanf ("%s", &org[i].nomresponsable);
		printf ("\nIngrese el nombre del proveedor." );
		scanf ("%s", &org[i].prov.nomprovedor);
		printf ("Ingrese el nombre del tecnico. ");
		scanf ("%s", &org[i].prov.tecnico);
		printf ("Ingrese el telefono del tecnico. ");
		scanf ("%d", &org[i].prov.telefono);
		 for (int j = 0; j < 12; j ++){
		 	int respuesta = 0;
		 	printf ("Ingrese el estado de la maquina en el piso %d", j);
		 	printf ("\n(1= SI FUNCIONA, 2=NO FUNCIONA, 3=EN ARREGLO)");
		 	do{
		 		respuesta = 0;
		 		scanf ("%d", &respuesta);
		 		switch (org[i].rev.revisionMensual){
		 			 case 1: org[i].rev.revisionMensual = respuesta;
		 			 break;
					 case 2: org[i].rev.revisionMensual = respuesta;
					 break;
					 case 3: org[i].rev.revisionMensual = respuesta;
					 break;
				 }
			 } while (org[i].rev.revisionMensual != 1 && org[i].rev.revisionMensual != 2 && org[i].rev.revisionMensual != 3);
		 }
		
	}
	
}


void mostrarDatos(struct ORGANIZACION org[]){
		for(int i=0;i<10;i++){
			printf("El invetario del piso %d es de %d \n",i,org[i].piso);
			//printf("El numero de la oficina del piso %d es de %d \n",i,org[i].oficina);
			//printf("El encargado del piso %d es de %s \n",i,org[i].nomresponsable);
			printf("El nombre del proveedor %d es de %s \n",i,org[i].prov.nomprovedor);
			//printf("El nombre del tecnico del piso %d es de %s\n",i,org[i].prov.nomencargado);
			printf("El numero de telefono del tecnico del piso %d, es %d",i,org[i].prov.telefono);
			
			for(int j = 0; j < 12; j++){
				printf("\nEl estado de la maquina %d en el mes %d fue de %d",i,j,org[i].rev.revisionMensual[j]);
			}
		}
}


void mostrarmaquina(struct Organizacion org[]){
	
	for(int i=0;i<10;i++){
		int cont=0;
		for(int j=6;j<12;j++){
			
			if(org[i].rev.revisionMensual[j]==3){
				cont++;
				if(cont>=2){
						printf(" La maquina %d tuvo mas de 2 revisiones en el segundo semestre \n",i);
							break;
							for(int i=0;i<10;i++){
							
		                    	printf("El invetario del piso %d es de %d \n",i,org[i].piso);
		                    	//printf("El numero de la oficina del piso %d es de %d \n",i,org[i].oficina);
			                    //printf("El encargado del piso %d es de %s \n",i,org[i].nomresponsable);
			                    printf("El nombre del proveedor %d es de %s \n",i,org[i].prov.nomprovedor);
			                    //printf("El nombre del tecnico del piso %d es de %s\n",i,org[i].prov.nomencargado);
			                    printf("El numero de telefono del tecnico del piso %d, es %d",i,org[i].prov.telefono);
		                    }
						
				}
			}
		}
	
	}
}