#include <stdio.h>
#include <malloc.h>

struct NODO {
	int dato;
	NODO *siguiente;
};

void insertarcola (NODO *&frente, NODO *&fin, int numero);
bool colavacia (NODO *frente);
void eliminarcola (NODO *&frente, NODO *& fin, int numero);

int main (){
	NODO *frente = NULL;
	NODO *fin = NULL;
	
	int dato, dato1, dato2;
	
	
	printf ("Ingrese un numero. ");
	scanf ("%d", &dato);
	insertarcola(frente, fin, dato);
	
	printf ("\nIngrese un numero. ");
	scanf ("%d", &dato);
	insertarcola(frente, fin, dato);
	
	printf ("\nIngrese un numero. ");
	scanf ("%d", &dato);
	insertarcola(frente, fin, dato);
	
	while (frente != NULL ){
		eliminarcola(frente, fin, dato);
		printf ("\nNumeros borrados.");
	}
	
}


void insertarcola (NODO *&frente, NODO *&fin, int numero){
	//paso 1 reservamos memoria y creamos una nueva variable.
	NODO *nuevo = (NODO *)malloc(sizeof(NODO));
	
	//paso 2 igualamos el dato al numero, y el siguiente al NULL ya que no hay nada.
	nuevo->dato = numero;
	nuevo->siguiente = NULL;
	
	//paso 3 nos preguntamos si la cola esta vacia
	if (colavacia(frente)){
		
		frente = nuevo;
	} 
	// en caso de que no esta vacia, le asignamos el nuevo al ultimo para generar mas.
	else {
		
		fin->siguiente = nuevo;
	}
	
	fin = nuevo;
}


bool colavacia (NODO *frente){
	//if simplificado
	return (frente == NULL)? true : false ;
	
}

void eliminarcola (NODO *&frente, NODO *& fin, int numero){
	
	numero = frente->dato;
	
	NODO *aux = frente;
	
	if (frente == fin){
		frente == NULL;
		fin == NULL;
	} else {
		
		frente = frente->siguiente;
		
	}
	free (aux);
}