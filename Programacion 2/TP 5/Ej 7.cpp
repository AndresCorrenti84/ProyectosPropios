#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct NODO {
	int dato;
	struct NODO *izq;
	struct NODO *der;
};

struct NODO *nuevoNodo (int item);
struct NODO*insertar (struct NODO *NODO, int item);
void imprimirINORDER (struct NODO *NODO);
void imprimirPREORDER (struct NODO *NODO);
void imprimirPOSTORDER(struct NODO *NODO);

int main (){
	struct NODO *raiz = NULL;
	raiz = insertar(raiz, 5);
	insertar(raiz, 49);
	insertar(raiz, 9);
	insertar(raiz, 47);
	insertar(raiz, 62);
	insertar(raiz, 19);
	insertar(raiz, 20);
	insertar(raiz, 8);
	insertar(raiz, 4);
	
	
	imprimirINORDER(raiz);
	printf ("\n");
	imprimirPOSTORDER(raiz);
	printf ("\n");
	imprimirPREORDER(raiz);
	
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

void imprimirPREORDER (struct NODO *NODO){
	
    if (NODO != NULL) {
        printf("%d ", NODO->dato);
        imprimirPREORDER(NODO->izq);
        imprimirPREORDER(NODO->der);
    }
}

void imprimirPOSTORDER (struct NODO *NODO) {
	
    if (NODO != NULL) {
        imprimirPOSTORDER(NODO->izq);
        imprimirPOSTORDER(NODO->der);
        printf("%d ", NODO->dato);
    }
}

