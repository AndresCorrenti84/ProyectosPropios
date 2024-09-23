#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct NODO {
	char dato;
	struct NODO *izq;
	struct NODO *der;
};

struct NODO *nuevoNodo (int item);
struct NODO*insertar (struct NODO* NODO, int item);
void imprimirINORDER (struct NODO *NODO);

int main (){
	struct NODO *raiz = NULL;
	raiz = insertar(raiz, '+');
	insertar(raiz, 'x');
	insertar(raiz, '2');
	insertar(raiz, '-');
	insertar(raiz, 'a');
	insertar(raiz, '1');
	insertar(raiz, '*');
	insertar(raiz, '3');
	insertar(raiz, 'b');
	
	
	imprimirINORDER(raiz);
	
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
	printf ("%c ", NODO->dato);
	imprimirINORDER(NODO->der);
}
