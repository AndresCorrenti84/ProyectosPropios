#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct NODO {
	int dato;
	struct NODO *izq;
	struct NODO *der;
};

struct NODO *nuevoNodo (int item);
struct NODO*insertar (struct NODO* NODO, int item);
void imprimirINORDER (struct NODO *NODO);
int contarhijos (struct NODO *NODO, int *aux);

int main (){
	int auxiliar = 0;
	struct NODO *raiz = NULL;
	raiz = insertar(raiz, 50);
	insertar(raiz, 40);
	insertar(raiz, 20);
	insertar(raiz, 45);
	insertar(raiz, 60);
	insertar(raiz, 55);
	insertar(raiz, 70);
	
	imprimirINORDER(raiz);
	
	printf ("\nLa amplitud del arbol es: %d", contarhijos(raiz, &auxiliar));
	
	
}

struct NODO *nuevoNodo (int item){
	struct NODO *temporal = (NODO *)malloc(sizeof(NODO));
	temporal->dato = item;
	temporal->der = NULL;
	temporal->izq = NULL;
	return temporal;
}

struct NODO *insertar (struct NODO* NODO, int item){
	if (NODO == NULL){
		return nuevoNodo(item);
	}
	
	if (item < NODO->dato){
		NODO->izq = insertar(NODO->izq, item);
	} else if ( item > NODO->dato){
		NODO->der = insertar(NODO->der, item);
	}
	
	return NODO;
}

void imprimirINORDER (struct NODO *NODO){
	if(NODO == NULL){
		return;
	}
	imprimirINORDER(NODO->izq);
	printf ("%d ", NODO->dato);
	imprimirINORDER(NODO->der);
}

int contarhijos (struct NODO *NODO, int *aux){
	if(NODO == NULL || NODO->izq == NULL && NODO->der == NULL){
		*aux = *aux + 1;
		return *aux;
	}
	
	contarhijos(NODO->izq, aux);
	contarhijos(NODO->der, aux);
	return *aux;
}