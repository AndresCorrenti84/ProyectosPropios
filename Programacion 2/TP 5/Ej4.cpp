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
int contaraltura1 (struct NODO *NODO, int *aux);
int contaraltura2 (struct NODO *NODO, int *aux);
int comparar (int altura1, int altura2);

int main (){
	int auxiliarder = 0;
	int auxiliarizq = 0;
	struct NODO *raiz = NULL;
	raiz = insertar(raiz, 50);
	insertar(raiz, 40);
	insertar(raiz, 20);
	insertar(raiz, 45);
	insertar(raiz, 60);
	insertar(raiz, 55);
	insertar(raiz, 70);
	insertar(raiz, 85);
	insertar(raiz, 90);
	
	imprimirINORDER(raiz);
	
	//printf ("\nLa altura del arbol del lado derecho es: %d", contaraltura1(raiz, &auxiliarder));
	//printf ("\nLa altura del arbol del lado izquierdo es: %d", contaraltura2(raiz, &auxiliarizqo));
	printf ("\nEl largo del arbol es: %d", comparar(contaraltura1(raiz, &auxiliarder), contaraltura2(raiz, &auxiliarizq)));
	
	
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

int contaraltura1 (struct NODO *NODO, int *aux){
	if(NODO == NULL){
		return 0;
	}
	*aux = *aux + 1;
	//contaraltura(NODO->izq, aux);
	contaraltura1(NODO->der, aux);
	return *aux;
}

int contaraltura2 (struct NODO *NODO, int *aux){
	if(NODO == NULL){
		return 0;
	}
	*aux = *aux + 1;
	//contaraltura(NODO->izq, aux);
	contaraltura2(NODO->izq, aux);
	return *aux;
}

int comparar (int altura1, int altura2){
	if (altura1 > altura2){
		return altura1;
	} else{
		return altura2;
	}
}