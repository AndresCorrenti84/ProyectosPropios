#include <stdio.h>
#include <malloc.h>

void append(struct Nodo **ref_cabeza, int nueva_data );
void push(struct Nodo **ref_cabeza, int nuevo_dato);
void imprimeLista(struct Nodo *head);
void insertAfter(struct Nodo *prev_nodo, int nueva_data);

struct Nodo {                  //8 bytes  
	int dato;                 //4 bytes
	struct Nodo *proximo;     //4 bytes
};

/* Dada una referencia (puntero a puntero) a la cabeza
de una lista y un entero, agregar un nuevo nodo al final */
void append(struct Nodo **ref_cabeza, int nueva_data ) {
	//1. Reservar Memoria
	struct Nodo *nuevo_nodo = (Nodo*) malloc( sizeof(Nodo)) ; 
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

/*Dada una referencia (puntero a puntero) a la cabeza de una lista
y un entero, insertar un nuevo nodo al comienzo de la lista */
void push(struct Nodo **ref_cabeza, int nuevo_dato) {
	//1. reservar memoria
	struct Nodo nuevo_nodo = (struct Nodo) malloc (sizeof( Nodo));
	
	//2. poner el nuevo dato
	nuevo_nodo->dato = nuevo_dato;
	
	//3. el nuevo nodo, tiene que apuntar a la cabeza vieja
	nuevo_nodo -> proximo = *ref_cabeza;
	
	
	//4. mover el puntero de la cabeza vieja al nuevo nodo
	*ref_cabeza = nuevo_nodo;
}

//Funcion que imprime la lista comenzando por la cabeza
void imprimeLista(struct Nodo *head) {
    	while(head != NULL) {
			printf("%d\n" , head->dato);
			head = head->proximo;
		}
}

void insertAfter(struct Nodo *prev_nodo, int nueva_data) {

	//1. chequear si el prev_nodo es NULL
	if(prev_nodo == NULL)
	{
		printf("el nodo no puede ser NULL");
		return;
	}
	
	//2. reservar memoria
	struct Nodo nuevo_nodo = (struct Nodo) malloc(sizeof(struct Nodo));
	
	//3. configurar el dato
	nuevo_nodo -> dato = nueva_data;
	
	//4. hacer el proximo del nuevo nodo como el proximo del prev_nodo
	nuevo_nodo -> proximo = prev_nodo -> proximo;
	
	//5. hacer el proximo de prev_nodo como el nuevo_nodo
	prev_nodo -> proximo = nuevo_nodo; 
	
}
				 
				 

int main() {                
	struct Nodo *head=NULL;

    append( &head , 6 );        // 200-> 6 -> 500 ->8->10
	append( &head , 8 );	
	append( &head , 10 );	
	push( &head, 200);
	insertAfter( head->proximo , 500 );
	
	imprimeLista( head );
	
	return 0;
}