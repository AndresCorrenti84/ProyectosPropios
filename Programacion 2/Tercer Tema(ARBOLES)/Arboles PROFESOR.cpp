// operaciones de insercion Y BORRADO en un arbol binario de busqueda
#include<stdio.h>
#include<stdlib.h>

struct nodo
{
    int dato;
    struct nodo *izq, *der;  //solo dos hijos
};

struct nodo *nuevoNodo(int item);
void imprimeInorder(struct nodo* nodo);
struct nodo* buscar(struct nodo* raiz, int dato);
struct nodo* insertar(struct nodo* nodo, int dato);
struct nodo * minValorNodo(struct nodo* nodo);
struct nodo* borraNodo(struct nodo* raiz, int dato);
void preorder (nodo* nodo);



// PROGRAMA PRINCIPAL
int main()
{
    /* crearemos el siguiente arbol   (esta puesto en forma horizontal abajo). Raiz: 50
    
    50
    --30
            --20
              --19
              --21
         --40
              --39
              --41
    --70
          --60
          --80
    
    */
    

    struct nodo *raiz = NULL;
    raiz = insertar(raiz, 50);   //sugerencia:  ir armando el arbol en papel y lapiz
    insertar(raiz, 30);
    insertar(raiz, 20);
    insertar(raiz, 40);
    insertar(raiz, 70);
    insertar(raiz, 60);
    insertar(raiz, 80);
    
    insertar(raiz,19);
    insertar(raiz,21);
    
    insertar(raiz,39);
    insertar(raiz,41);
    
    // imprimir
    imprimeInorder(raiz);
    
    printf("\n\nBorrar 30\n");   //y se reacomodara el arbol de acuerdo a lo que vimos en la pizarra
    borraNodo(raiz, 30);
    imprimeInorder(raiz);
    
    printf("\n\nSubnodo de 39  (el que reacomode)\n");
    imprimeInorder(buscar(raiz, 39));

    return 0;
}

// funcion para crear un nodo nuevo
struct nodo *nuevoNodo(int item) {
    struct nodo *temp = (struct nodo *)malloc(sizeof(struct nodo));
    temp->dato = item;
    temp->izq = temp->der = NULL;
    return temp;
}

/* funcion para insertar un nuevo nodo con un dato */
struct nodo* insertar(struct nodo* nodo, int dato) {
    /* si el arbol está vacio, retornar solo el nuevo nodo */
    if (nodo == NULL){  //CASO BASE
    	
    	return nuevoNodo(dato);
	}
    /* en otro caso, realizar la recursión por el arbol */
    if (dato < nodo->dato){
    	
    	nodo->izq = insertar(nodo->izq, dato);
	}
    else if (dato > nodo->dato){
    	
    	nodo->der = insertar(nodo->der, dato);
	}

    /* retornar el puntero a nodo */
    return nodo;
}

// funcion para buscar un dato especifico  (dato)
struct nodo* buscar(struct nodo* raiz, int dato) {
    // Casos: raiz es nula o el dato esta presente en la raiz
    if (raiz == NULL || raiz->dato == dato)  //CASO BASE
      return raiz;
    
    // el dato es mas grande que la raiz
    if (raiz->dato < dato)
      return buscar(raiz->der, dato);

    // el dato es mas pequeño que la raiz
    return buscar(raiz->izq, dato);
}

struct nodo* borraNodo(struct nodo* raiz, int dato) {
    // caso base
    if (raiz == NULL) return raiz;  //CASO BASE
 
    //si el dato a ser borrado es menor que la raiz, recorrer
    //por el subarbol izquierdo
    if (dato < raiz->dato)
        raiz->izq = borraNodo(raiz->izq, dato);
 
    // si el dato a borrar es mas grande que la raiz, recorrer
    //por el subarbol derecho   
    else if (dato > raiz->dato)
        raiz->der = borraNodo(raiz->der, dato);

    //si el dato es igual a la raiz, entonces borrar este nodo
    else
    {
        // nodo con solo un hijo o sin hijo
        if (raiz->izq == NULL)
        {
            struct nodo *temp = raiz->der;
            free(raiz);
            return temp;
        }
        else if (raiz->der == NULL)
        {
            struct nodo *temp = raiz->izq;
            free(raiz);
            return temp;
        }
 
          
        //LAS LINEAS DE ABAJO SON PARA REACOMODAR EL ARBOL-------------
        //(Como vimos en la pizarra. En el lugar del borrado viene
        //el mas chico del subarbol derecho)
        // nodo con dos hijos. Acceder con inorder (mas pequeño
        // en el subarbol)
        struct nodo* temp = minValorNodo(raiz->der);
 
        // copiar el contenido del sucesor en inorder en este nodo
        raiz->dato = temp->dato;
 
        // borrar el sucesor en inorder
        raiz->der = borraNodo(raiz->der, temp->dato);
    }
    return raiz;
}
// funcion para hacer un recorrido inorder
void imprimeInorder(struct nodo* nodo) {  //izquierda - raiz - derecha
    if (nodo == NULL)
      return;
    imprimeInorder(nodo->izq);
    printf("%d ", nodo->dato);
    imprimeInorder(nodo->der);
}

void preorder (nodo* nodo){
	if (nodo == NULL){
		return;
	} else {
		printf ("%d", nodo->dato);
		preorder(nodo->izq);
		preorder(nodo->der);
	}
}

/*
Dado un arbol binario no vacio, retornar el nodo con el dato minimo.
No es necesario buscar en todo el arbol.
*/
struct nodo * minValorNodo(struct nodo* nodo) {
    struct nodo* actual = nodo;
 
    /* recorrer a través de la rama izquierda   */
    while (actual && actual->izq != NULL)
        actual = actual->izq;
 
    return actual;
}

/*
Dado un arbol y un dato, esta funcion borra el dato y retorna la nueva
raiz */