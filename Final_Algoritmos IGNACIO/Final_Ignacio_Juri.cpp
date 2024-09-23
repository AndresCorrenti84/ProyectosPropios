#include <iostream>
#include <string.h>

//Final Ignacio Juri

void cargaDatos(struct polizas q);
void calculo(struct polizas q);
void mostrar(struct polizas q);

struct asegurado{

	char nombre[20];
	int telefono;
};

struct polizas{
	
	char patente[10];
	int modelo;
	char marca[20];
	int poliza;
	int choques;
	char accidente[4];
	struct asegurado a;
};

main(){
	
	struct polizas p;
	
	cargaDatos(p);
	calculo(p);
	mostrar(p);
}

void cargaDatos(struct polizas q){

	for (int i=0; i<100; i++){
		
		printf ("\nDatos de la poliza: %d\n", i);
		
		printf ("\nIngrese la patente del vehiculo: ");
	    scanf ("%s", &q.patente);
	    do{
		
		printf ("Ingrese el modelo del vehiculo: ");
		scanf("%d", &q.modelo);
		
	    } while (q.modelo <= 2000);
	
	    printf ("Ingrese la marca del vehiculo: ");
    	scanf ("%s", &q.marca);
	
	    printf ("\nLa poliza se encuentra vigente? Ingrese 1(si) o 2(No): ");
	    scanf ("%d", &q.poliza);
	    
	    printf ("\nIngrese la cantidad de accidentes del vehiculo: ");
	    scanf ("%d", &q.choques);
	    
	    for (int j=0; j<q.choques; j++){
	    	
	    	printf ("Ingrese el valor del accidente %d: ", j);
	    	scanf ("%s", &q.accidente);
		}
		
		printf ("\nDatos del asegurado");
		printf ("\nIngrese el nombre del asegurado: ");
		scanf ("%s", &q.a.nombre);
		printf ("Ingrese el telefono del asegurado: ");
		scanf ("%d", &q.a.telefono);
	}
}

void calculo(struct polizas q){
int contador; 
	
	for (int i=0; i<100; i++){
		
		if (q.accidente != "g"){
			
			contador ++;
		}
	}
	printf ("\nLa cantidad de polizas que no han tenido accidentes graves son: %d", contador);
}

void mostrar(struct polizas q){
char marca[20];
int comparacion;
	
	for (int i=0; i<100; i++){
		
		printf ("\nIngrese una marca para la poliza: ");
		scanf ("%s", &marca);
		comparacion = strcmp(marca, q.marca);
		
		if (comparacion = 0 && q.poliza == 1){
			
			printf ("\nLa patente es: %s", q.patente);
			printf ("El modelo es: %d", q.modelo);
			printf ("Tuvo %d accidentes", q.choques);
			printf ("\nDatos del asegurado");
			printf ("\nSu nombre es: %s", q.a.nombre);
			printf ("Su telefono es: %d", q.a.telefono);
		}
	}
}

//Ejemplo metodo busqueda binaria

/*main(){
	
	int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8}; //El arreglo debe estar ordenado de forma ascendente
	int sup, inf, mitad, dato;
	char flag = 'F';
	
	dato = 6; //Dato que queremos encontar en el arreglo
	inf = -1; //Indica el inicio del arreglo
	sup = 8; //Indica la cantidad de elementos del arreglo
	
	while ((inf < sup-1) && (sup > inf+1)){
		
		mitad = (inf + sup) / 2;
		
		if (numeros[mitad] == dato){
			
			flag = 'V';
			break;
		}
		
		if (numeros[mitad] > dato){
			
			sup = mitad;
		}
		
		if (numeros[mitad] < dato){
			
			inf = mitad;
		}
	}
	
	if (flag == 'V'){
		
		printf ("\nEl numero se encontro en la posicion: %d", mitad);
	}
	else {
		
		printf ("\nEl numero no ha sido encontrado");
	}
}
*/
