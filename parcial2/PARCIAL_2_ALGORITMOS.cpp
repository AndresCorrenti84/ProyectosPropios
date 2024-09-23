#include <stdio.h>
#include <iostream>

void cargardatosmaquina (struct MAQUINAS maq[], int npiso);
void mostrar (struct MAQUINAS maq[], int npiso);
void ordenamientoinv (struct MAQUINAS maq[], int npiso);

struct PROVEEDOR {
	char nombreEmpresa[20];
	char tecnico[20];
	int telefono;
};

struct MAQUINAS {
	int piso;
	int nroinventario;
	int oficina;
	char responsable[20];
	int revisiontecnica [12];
	struct PROVEEDOR prov;
};



int main (){
	struct MAQUINAS m[10];
	struct PROVEEDOR p;
	int numeropiso;
	
	printf ("Ingrese la cantidad de pisos del edificio. ");
	scanf ("%d", &numeropiso);
	cargardatosmaquina(m, numeropiso);
	//mostrar(m, numeropiso);
	ordenamientoinv(m, numeropiso);
}


void cargardatosmaquina (struct MAQUINAS maq[], int npiso){
	int respuesta;
	

	for (int i = 0; i < npiso; i++){
		printf ("Coloque el piso en el que se encuentra la maquina. "); 
		scanf ("%d", &maq[i].piso);
		printf ("\nColoque el Numero de inventario. ");
		scanf ("%d", &maq[i].nroinventario);
	//	printf ("\nColoque la oficina en la que se encuentra la maquina. ");
	//	scanf ("%d", &maq[i].oficina);
	//	printf ("\nIngrese el nombre del responsable de la maquina. ");
	//	scanf ("%s", &maq[i].responsable);
	//	printf ("\nColoque el nombre de la empresa; "); 
	//	scanf ("%s", &maq[i].prov.nombreEmpresa);
	//	printf ("\nColoque el nombre del tecnico; ");  
	//	scanf ("%s", &maq[i].prov.tecnico);
	//	printf ("\nIngrese el telefono del proveedor; ");
	//	scanf ("%d", &maq[i].prov.telefono);
		printf ("\n");
		
		
		
		//FOR PARA CADA MAQUINA DE LA REVISION TECNICA ANUAL.
		
		for (int j = 1; j < 2; j++){
			printf ("\nEn el mes %d,  como fue la revision? ", i);
			
			int rta = 0;
			do{
				printf ("\nSI LA MAQUINA FUNCIONA COLOQUE 1, SI ESTA ROTA COLOQUE 2, SI ESTA EN ARREGLO COLOQUE 3\n");
				scanf ("%d", &respuesta);
				switch (respuesta){
					
					case 1 : maq[i].revisiontecnica[j] = respuesta;
					break;
					
					case 2 : maq[i].revisiontecnica[j] = respuesta;
					break;
					
					case 3 : maq[i].revisiontecnica[j] = respuesta;
					break;	
					
				}
			}while (respuesta != 1 && respuesta != 2 && respuesta != 3);
		}
	}	

}









void mostrar (struct MAQUINAS maq[], int npiso){
	
	/*for (int i = 0; i < npiso; i++){
		printf ("\nPiso %d", i);
		printf ("El piso es; %d", maq[i].piso);
		printf ("\nEl numero de inventario es; %d", maq[i].nroinventario);
		printf ("\nSe encuentra en la oficina; %d", maq[i].oficina);
		printf ("\nEl nombre del responsable es; %s", maq[i].responsable);
		printf ("\nEl nombre de la empresa que arreglo la maquina es; %s", maq[i].nombreEmpresa);
		printf ("\nEl nombre del tecnico que se encargo de la maquina es; %s", maq[i].tecnico);
		printf ("\nEl numero de telefono del tecnico es; %d", maq[i].telefono);
		for (int j = 1; j < 2; j++){
			printf ("\nLa revision tecnica en el mes %d fue ;%d", j,maq[i].revisiontecnica[j]);
		}
	} */
	int control;
	for (int i = 0; i < npiso; i++){
        for (int j = 7; j < 13; j++){

            if (maq[i].revisiontecnica[j] == 3){

                control ++;

                if (control >= 2){

                    printf("\nEl numero de invetario de la maquina %d es %d ", i, maq[i].nroinventario);
                    printf("\nEl numero de la oficina del piso %d es %d ", i, maq[i].oficina);
                    printf("\nEl nombre del responsable del piso %d es %s ", i, maq[i].responsable);
                    printf("\nEl nombre del proveedor es %s ", maq[i].prov.nombreEmpresa);
                    printf("\nEl nombre del tecnico es %s ", maq[i].prov.tecnico);
                    printf("\nEl numero de telefono del tecnico es %d ", maq[i].prov.telefono);
                }
            }
        }
    }
}


void ordenamientoinv (struct MAQUINAS maq[], int npiso){
	int aux;
	int i;
	struct MAQUINAS vectoraux[npiso];
	for (int i = 0; i < npiso; i++){
		vectoraux[i].nroinventario = maq[i].nroinventario;
	}
	
	for (int i = 0; i < npiso; i++){
		printf ("[%d]", vectoraux[i].nroinventario);
	}
	
	printf ("\nLos numeros de invetario ordenados son; ");
	for (int i = 0; i < npiso; i++){
		for (int j = 0; j < npiso; j++){
			if ( vectoraux[j].nroinventario > vectoraux[j+1].nroinventario){
				aux = vectoraux[j+1].nroinventario;
				vectoraux[j+1].nroinventario = vectoraux[j].nroinventario;
				vectoraux[j].nroinventario = aux;
			}	
		}
	} 
	
	for (int i = 0; i < npiso; i++){
		printf ("[%d]", vectoraux[i].nroinventario);
	}
	
	/*printf ("\nLos numeros de inventario ordenados son; ");
	
	for (int i = 0; i < npiso; i++){
		printf ("[%d]", vectoraux[i].nroinventario);
	}
	
	 printf("\nOrden Descendente \n");
        for(int i = npiso-1; i >= 0;i--){
            printf("%d",vectoraux[i].nroinventario);
        }*/
}
