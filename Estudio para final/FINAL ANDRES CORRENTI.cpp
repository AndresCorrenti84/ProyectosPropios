#include <stdio.h>
#include <string.h>

struct SUPERVISOR {
	char nombre[15];
	char domicilio[15];
	int telefono;
};

struct EMPLEADO {
	char nombre[15];
	int sexo;
	char turno[15];
	struct SUPERVISOR s;
	int unidades;
};

//void cargardatos (struct EMPLEADO e[]);
void segundopunto (struct EMPLEADO e[]);
void tercerpunto (struct EMPLEADO e[]);

int main (){
	struct SUPERVISOR sup;
	struct EMPLEADO emp;
	
	
	//cargardatos(emp);
	//segundopunto(emp);
	//tercerpunto(emp);
}


void cargardatos (struct EMPLEADO e[]){
	for (int i = 0; i < 15; i++){
		printf ("NOMBRE EMPLEADO; ");
		scanf ("%s", &e[i].nombre);
		printf ("\nSEXO EMPLEADO(1=MASCULINO/2=FEMENINO); ");
		scanf ("%d", &e[i].sexo);
		printf ("\nTURNO EMPLEADO; ");
		scanf ("%s", &e[i].turno);
		for (int j = 0; j < 12; j++){
			printf ("\nUNIDADES VENDIDAS EN EL MES %d", j);
			scanf ("%d", &e[i].unidades);
		}
		printf ("\nNOMBRE SUPERVISOR;");
		scanf("%s", &e[i].s.nombre);
		printf ("\nDOMICILIO SUPERVISOR; ");
		scanf ("%s", &e[i].s.domicilio);
		printf ("\nTELEFONO DEL SUPERVISOR;");
		scanf ("%d", &e[i].s.telefono);
	}
}

void segundopunto (struct EMPLEADO e[]){
	for (int i = 15; i < 15; i++){
		for (int j = 1; j < 12/2+1; j++){ //revisar
			
			if (e[i].sexo == '2' && e[i].unidades[j] == 0 ){
			printf ("DATOS DEL EMPLEADO.\n");
			
			printf ("%s", e[i].nombre);
			printf ("\n%s", e[i].turno);
			
			printf ("\nDATOS DEL SUPERVISOR.");
			
			printf ("\n%s", e[i].s.nombre);
			printf ("\n%d", e[i].s.telefono);
			}
		}
	}
}

void tercerpunto (struct EMPLEADO e[]){
	int igualar;
	char turno[15];
	
	for (int i = 0; i < 15; i++){
		printf ("\nIngrese el turno que desea buscar;");
		scanf ("%s", &turno);
		
		igualar = strcmp(turno, e[i].turno);
		
		for (int j = 0; j < 12/6; j++){
			if (igualar == 0 && e[i].unidades >= 100){
			printf ("\nNOMBRE ENCARGAR;");
			scanf ("%s", &e[i].s.nombre);
			printf ("\nTELEFONO ENCARGADO;");
			scanf ("%d", &e[i].s.telefono);
			}
		}	
	}
} 


*METODO BURBUJA
main(){
	
	char vector[10]; //ARREGLO DE CARACTERES
	int aux;
	
	for (int i=0; i<10; i++){ 
		
		printf ("Ingrese letras: "); //EL USUARIO LLENA EL VECTOR
		scanf ("%s", &vector[i]); //LO ESCANEAMOS
	}
	

	for (int i=0; i<10; i++){ //UTILIZAMOS DOS FORS ANIDADOS PARA RECORRER, COMPARAR Y ORDENAR EL ARREGLO.
		for (int j=0; j<10; j++){
			
			if (vector[j] > vector[j+1]){
				aux = vector[j];           //COMPARA LOS CARACTERES, PARA VER CUAL VA PRIMERO.
				vector[j] = vector[j+1];
				vector[j+1] = aux;
			}
		}
	}
	
	for (int i=0; i<10; i++){
		
		printf ("[%s] ", vector[i]); //Y ACA TENDREMOS EL ARREGLO ORDENADO.
	}
}*/


PASAJE POR VALOR: 

void numeros (int n1; int n2) ;

int main (){
	int numeroA; //declaramos estas dos variables que van a reemplazar a las del proceso
	int numeroB;
	
	numeros(numeroA, numeroB);
}

void numeros (int n1; int n2) { //declaramos dos enteros
	printf ("Ingrese numero 1; ");
	scanf ("%d", &n1);
	printf ("Ingrese numero 2; ");
	scanf ("%d", &n2);
} */

*PASAJE POR REFERENCIA 

struct NUMERO {
	int numero1;
	int numero2;
};
void cargarnumero (struct NUMERO *num);
int main (){
	struct NUMERO n;
	cargarnumero(&n); //luego aca se pasa con &.
}

void cargarnumero (struct NUMERO *num){ //Le pasamos con un * para ver lo que hay en esa direccion de memoria
	printf ("Ingrese primer numero: ");
	scanf ("%d", &num->numero1); //en este caso utilizamos flechita, para entrar en la estructura.
	printf ("Ingrese segundo numero: ");
	scanf ("%d", &num->numero2);
} */

NUMEROS ALEATORIOS 

#include <stdlib.h>;
#include <time.h>; //utilizamos estas dos librerias, una es para que cada numero sea nuevo, y otra para incluir la funcion.

int main (){
	int numeros;
	srand(time(NULL));
	
	for (int i = 0; i < 10; i++){ //bucle for para que en 10 veces hayan 10 numeros al azar.
		numeros = rand()%20; //esto le pone un rango, en este caso, del 0 al 20.
		printf ("%d", numeros); //imprimimos y tendremos 10 numeros al azar del 0 al 20.
	}
} */