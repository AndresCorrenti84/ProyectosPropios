#include <stdio.h>
#include <malloc.h>
#include <iostream>

struct Nodo{
	int dato;
	Nodo *siguiente;
};
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void buscarLista(Nodo *, int);
void eliminarNodo(Nodo *&, int);

int main(){
	Nodo *lista = NULL;
	int dato;
	
	std::cout<<"digite un numero: ";
	std::cin>>dato;
	insertarLista(lista, dato);
	
	std::cout<<"\ndigite un numero: ";
	std::cin>>dato;
	insertarLista(lista, dato);
	
	std::cout<<"\ndigite un numero: ";
	std::cin>>dato;
	insertarLista(lista, dato);
	
	mostrarLista(lista);
	std::cout<<"\n buscando nodo 5 ";
	buscarLista(lista, 5);
	std::cout<<"\neliminando elemento 33 ";
	eliminarNodo(lista, 33);
	mostrarLista(lista);
	
	return 0;
}
void eliminarNodo(Nodo *&lista, int n){
	//preguntamos si la lista esta vacia
	if(lista != NULL){
	Nodo *aux_borrar;
	Nodo *anterior = NULL;
	
	aux_borrar = lista;
	//recorrer la lista
	while((aux_borrar != NULL) && (aux_borrar->dato != n)){
		anterior = aux_borrar;
		aux_borrar = aux_borrar->siguiente;
	}
	//el elemnto no ha sido encontrado
	if(aux_borrar == NULL){
		std::cout<<"\nEl elemento " <<n<<" no existe\n";
	}
	//El primer elemento es el q vamos a borrar
	else if(anterior == NULL){
		lista = lista->siguiente;
		delete aux_borrar;//se elimina el primero
	}
	//El nodo esta en la lista pero no es el primero
	else{
		anterior->siguiente = aux_borrar->siguiente;
		delete aux_borrar;
	}
	}
}


void buscarLista(Nodo *lista, int n){
	bool bandera = false;
	
	Nodo *actual = new Nodo();
	actual = lista;
	
	while((actual != NULL) && (actual->dato <= n)){
		if(actual->dato == n){
			bandera=true;
		}
		actual = actual->siguiente;
	}
	
	if(bandera == true){
		std::cout<<"Elemento "<<n<<" Si a sido encontrado en la lista\n";
	}
	else{
		std::cout<<"Elemento "<<n<<" No a sido encontrado en la lista\n";
	}
}

void mostrarLista(Nodo *lista){
	//paso 1
	Nodo *actual = new Nodo();
	// paso 2
	actual = lista;
	//paso 3
	while(actual != NULL){
		std::cout<<actual->dato<<" ->";
		actual = actual->siguiente;
	}
}


void insertarLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo(); //creamos nuevo nodo
	nuevo_nodo->dato = n; //asignamos un dato al nuevo nodo

	Nodo *aux1 = lista;
	Nodo *aux2;
	
//bucle while para siempre tener ordenada la lista
	while((aux1 != NULL) && (aux1->dato < n)){ 
		aux2 = aux1;
		aux1 = aux1->siguiente;
		}
// IF se cumple si el elemento va al principio de la lista
	if(lista == aux1){
		lista = nuevo_nodo; //nuevo_nodo pasa a ser el 1°elemento de la list
	}else{
//este else se cumple si se ha entrado al while
	aux2->siguiente = nuevo_nodo;
}
nuevo_nodo->siguiente = aux1; //marcamos la ultima posicion como NULL
std::cout << "\n\tElemento " <<n<<" insertado en la lista ";
}
