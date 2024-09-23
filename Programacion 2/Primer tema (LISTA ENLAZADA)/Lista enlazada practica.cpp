#include <stdio.h>
#include <malloc.h>

void crearnodo (struct NODO **cabeza, int dato);
void imprimirlista (struct NODO *cabeza);
void agregardato (struct NODO **cabeza, int numero);
void insertardespues (struct NODO *nodoprevio, int numero);

struct NODO {
	int dato;
	struct NODO *siguiente;
};



int main(){
	struct NODO *cabecera = NULL;
	
	crearnodo(&cabecera, 1);
	
	crearnodo(&cabecera, 200);
	
	insertardespues(cabecera, 5050);
	
	agregardato(&cabecera, 320);
	
	imprimirlista(cabecera);
	
	
	
	return 0;
}


void crearnodo (struct NODO **cabeza, int dato){
	//paso 1 reservar memoria
	NODO *nuevo = (NODO *) malloc(sizeof(NODO));
	NODO *auxiliar = *cabeza;
	//paso 2 agregar dato
	nuevo->dato = dato;
	//paso 3 ponemos NULL al proximo nodo
	nuevo->siguiente = NULL;
	//paso 4 validamos que si la lista esta vacia, ponemos 
	if (*cabeza == NULL){
		*cabeza = nuevo;
		return;
	}
	//paso 5 para recorrer el nodo
	while (auxiliar->siguiente != NULL ){
		auxiliar = auxiliar->siguiente;
	}
	auxiliar->siguiente = nuevo;
}

void imprimirlista (struct NODO *cabeza){
	
	while (cabeza != NULL){
		printf ("%d", cabeza->dato);
		cabeza = cabeza->siguiente;
	}
}

void agregardato (struct NODO **cabeza, int numero){
	//reservamos espacio
	
	NODO *nuevo = (NODO *)malloc(sizeof(NODO));
	
	//poner el nuevo dato
	nuevo->dato = numero;
	
	//el nuevo nodo tiene que apuntar a la cabeza vieja
	nuevo->siguiente = *cabeza;
	
	//mover el puntero de la cabeza vieja a la nueva
	*cabeza = nuevo;
}

void insertardespues (struct NODO *nodoprevio, int numero){
	
	//preguntamos si el nodo previo es nulo
	if (nodoprevio == NULL){
		printf ("El nodo no puede ser nulo.");
		return;
	}
	
	//reservamos memoria.
	NODO *nuevo = (NODO *)malloc(sizeof(NODO));
	
	//configuramos el dato
	nuevo->dato = numero;
	
	//hacer el proxim del nuevo nodo como el prox del nodoprevio
	nuevo->siguiente = nodoprevio->siguiente;
	
	//hacer el proximo nodo del nodo previo como el prox.
	nodoprevio->siguiente = nuevo;
}