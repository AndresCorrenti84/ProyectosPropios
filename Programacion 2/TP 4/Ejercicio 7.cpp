#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <malloc.h>

void crearlista (struct NODO refcabecera, int num);

struct NODO {
	int dato;
	struct NODO * siguiente;
};


int main (){
	struct NODO *head = NULL;
	srand (time(NULL));
	
	for (int i = 0; i < 100; i++){
		crearlista (&head; reand ()%101);
	}
	
	
}


void crearlista (struct NODO refcabecera, int num){
	struct NODO *nuevo_nodo = (struct NODO*) malloc (sizeof(struct NODO));
	struct NODO *ultimo = *refcabecera;
	nuevo_nodo->dato = num;
	nuevo_nodo->siguiente = NULL;
	
	if (*refcabecera == NULL){
		*refcabecera = nuevo_nodo;
		return;
	}
	
	while ( ultimo->siguiente != NULL){
		ultimo = ultimo->siguiente
		
	}
}