#include <stdio.h>
#include <malloc.h>

struct Nodo {                 //8 bytes  

	int dato;                 //4 bytes
	struct Nodo *proximo;     //4 bytes
};

void append(struct Nodo **, int numero);
void push(struct Nodo **, int);
void insertAfter(struct Nodo *, int);
void imprimeLista(struct Nodo *);

int main() {                
	
	struct Nodo *head = NULL;

//Ingreso de elementos de forma normal
    append(&head , 6);        
	append(&head , 8);	
	append(&head , 10);	
	
//Poner numero 200 al principio	
	push(&head, 900);
	
//Poner numero 500 despues del proximo al primero	
	insertAfter(head->proximo , 500);
	
// 200-> 6 -> 500 ->8->10
    
    printf ("La lista contiene los siguientes elementos: \n\n");
	imprimeLista(head);
	
	return 0;
}

/* Dada una referencia (puntero a puntero) a la cabeza
de una lista y un entero, agregar un nuevo nodo al final */

void append(struct Nodo **head, int numero){
	
	//1. Reservar Memoria
	Nodo *nuevo_nodo = (Nodo *) malloc(sizeof(Nodo)); 
	struct Nodo *ultimo = *head;  //lo necesitamos en el paso 5
	
	//2. Agregar el dato de interes
	nuevo_nodo -> dato = numero;
	
	//3. En el proximo de este nodo, pongo NULL
	nuevo_nodo -> proximo = NULL;
	
	//4. Si la lista es vacia, poner el nuevo nodo como la cabeza
	if (*head == NULL){
		
	    *head = nuevo_nodo; 
		return; 
	}
	
	//5. Sino, recorrer la lista hasta el ultimo Nodo
	while (ultimo -> proximo != NULL){
		
		ultimo = ultimo -> proximo;  //me corro al proximo nodo
	}
	
	//6. Cambiar el proximo del ultimo nodo
	ultimo -> proximo = nuevo_nodo;
	
}

/*Dada una referencia (puntero a puntero) a la cabeza de una lista
y un entero, insertar un nuevo nodo al comienzo de la lista */

void push(struct Nodo **head, int numero) {
	
	//1. reservar memoria
	Nodo *nuevo_nodo = (Nodo *) malloc(sizeof(Nodo));
	
	//2. poner el nuevo dato
	nuevo_nodo -> dato = numero;
	
	//3. el nuevo nodo, tiene que apuntar a la cabeza vieja
	nuevo_nodo -> proximo = *head;
	
	//4. mover el puntero de la cabeza vieja al nuevo nodo
	*head = nuevo_nodo;
}

//Funcion que inserta un numero despues del proximo al primero

void insertAfter(struct Nodo *prev_nodo, int numero) {

	//1. chequear si el prev_nodo es NULL
	if (prev_nodo == NULL){
		
		printf("el nodo no puede ser NULL");
		return;
	}
	
	//2. reservar memoria
	Nodo *nuevo_nodo = (Nodo *) malloc(sizeof(Nodo));
	
	//3. configurar el dato
	nuevo_nodo -> dato = numero;
	
	//4. hacer el proximo del nuevo nodo como el proximo del prev_nodo
	nuevo_nodo -> proximo = prev_nodo -> proximo;
	
	//5. hacer el proximo de prev_nodo como el nuevo_nodo
	prev_nodo -> proximo = nuevo_nodo; 
}

//Funcion que imprime la lista comenzando por la cabeza

void imprimeLista(struct Nodo *head){
	
    	while(head != NULL){
    		
			printf("%d\n", head -> dato);
			head = head -> proximo;
		}
}