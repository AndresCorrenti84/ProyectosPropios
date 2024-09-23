#include <stdio.h>
#include <malloc.h>

struct NODO {
	int dato;
	NODO *siguiente;
};

void agregarpila (NODO *&pila, int numero);
void sacarpila (NODO *&pila, int &numero);

int main (){
	NODO *pila = NULL;
	int n;
	int rta;
	
	printf ("Ingrese cuantos elementos desea agregar. ");
	scanf ("%d", &rta);
	for (int i = 0; i < rta; i++){
		printf ("\nIngrese un numero. ");
		scanf ("%d", &n);
		agregarpila(pila, n);
	}
	
	for (int i = 0; i < rta; i++){
	sacarpila(pila, n);
	printf ("%d", n);	
	}
}

void agregarpila (NODO *&pila , int numero){
	//1er paso crear espacio de memoria.
	
	NODO *nuevo = (NODO *)malloc(sizeof(NODO));
	
	//2do paso llenar la pila
	nuevo->dato = numero;
	
	//3er paso agregar el siguiente-
	nuevo->siguiente = pila;
	
	//4to igual la pila al nuevo creado
	
	pila = nuevo;
}

void sacarpila (NODO *&pila, int &numero){
	//Igualamos la pila a la variable auxiliar.
	NODO *aux = pila;
	//Igualamos el dato del aux, al numero.
	numero = aux->dato;
	//Igualamos el dato al numero.
	pila = aux->siguiente;
	//Liberamos la variable para borrarlo.
	free (aux);
}
