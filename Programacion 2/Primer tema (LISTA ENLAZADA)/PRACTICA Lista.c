#include<stdio.h>
#include<malloc.h>
struct Nodo{
	int dato;
	struct Nodo *proximo;
};

void append(struct Nodo **ref_cabeza, int nueva_data );
void main(){
	struct Nodo *head;
	head=NULL;
	append(&head,6);
	append(&head,9);
	
}
void append(struct Nodo **ref_cabeza, int nueva_data ) 
{
	//1. Reservar Memoria
	struct Nodo *nuevo_nodo = (struct Nodo*) malloc(sizeof(struct Nodo)) ; 
	struct Nodo *ultimo = *ref_cabeza;  //lo necesitamos en el paso 5
	
	//2. Agregar el dato de interes
	nuevo_nodo -> dato = nueva_data;
	
	//3. En el proximo de este nodo, pongo NULL
	nuevo_nodo -> proximo = NULL;
	
	//4. Si la lista es vacia, poner el nuevo nodo como la cabeza
	if( *ref_cabeza == NULL){
		*ref_cabeza = nuevo_nodo; 
		return;
	}
	//5. Sino, recorrer la lista hasta el ultimo Nodo
	while( ultimo->proximo != NULL) {
		ultimo = ultimo->proximo;  //me corro al proximo nodo
	}
	
	//6. Cambiar el proximo del ultimo nodo
	ultimo -> proximo = nuevo_nodo;
	return;
}
void imprimeLista(struct Nodo **ref_cabeza){
	struct Nodo *aux_puntero;
	aux_puntero=*ref_cabeza;
	while(aux_puntero!=NULL){
		printf("El valor es : %d",aux_puntero->dato);
		aux_puntero=aux_puntero->proximo;
	}
}


















