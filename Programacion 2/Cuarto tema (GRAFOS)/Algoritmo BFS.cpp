// algoritmo BFS

#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 40
#include <malloc.h>

struct cola {
  int items[CANTIDAD];
  int frente;
  int atras;
};

struct cola* crearCola();
void encolar(struct cola* q, int);
int desencolar(struct cola* q);
void display(struct cola* q);
int estaVacio(struct cola* q);
void imprimeCola(struct cola* q);

struct nodo {
  int vertice;
  struct nodo* proximo;
};

struct nodo* crearNodo(int);

struct Grafo {
  int numVertices;
  struct nodo** listasAdyacencia;
  int* visitado;
};

// algoritmo BFS
void bfs(struct Grafo* Grafo, int verticeComienzo) {
  struct cola* q = crearCola();

  Grafo->visitado[verticeComienzo] = 1;
  encolar(q, verticeComienzo);

  while (!estaVacio(q)) {
    imprimeCola(q);
    int verticeActual = desencolar(q);
    printf("visitado %d\n", verticeActual);

    struct nodo* temp = Grafo->listasAdyacencia[verticeActual];

    while (temp) {
      int adyVertice = temp->vertice;

      if (Grafo->visitado[adyVertice] == 0) {
        Grafo->visitado[adyVertice] = 1;
        encolar(q, adyVertice);
      }
      temp = temp->proximo;
    }
  }
}

// crear un nodo
struct nodo* crearNodo(int v) {
  struct nodo* nuevoNodo = malloc(sizeof(struct nodo));
  nuevoNodo->vertice = v;
  nuevoNodo->proximo = NULL;
  return nuevoNodo;
}

// crear un grafo
struct Grafo* catrasGrafo(int vertices) {
  struct Grafo* Grafo = malloc(sizeof(struct Grafo));
  Grafo->numVertices = vertices;

  Grafo->listasAdyacencia = malloc(vertices * sizeof(struct nodo*));
  Grafo->visitado = malloc(vertices * sizeof(int));

  int i;
  for (i = 0; i < vertices; i++) {
    Grafo->listasAdyacencia[i] = NULL;
    Grafo->visitado[i] = 0;
  }

  return Grafo;
}

// agregar arista
void agregaArista(struct Grafo* Grafo, int src, int dest) {
  // agregar arista desde fuente a destino
  struct nodo* nuevoNodo = crearNodo(dest);
  nuevoNodo->proximo = Grafo->listasAdyacencia[src];
  Grafo->listasAdyacencia[src] = nuevoNodo;

  // agregar arista desde destino a fuente
  nuevoNodo = crearNodo(src);
  nuevoNodo->proximo = Grafo->listasAdyacencia[dest];
  Grafo->listasAdyacencia[dest] = nuevoNodo;
}

// crear cola
struct cola* crearCola() {
  struct cola* q = malloc(sizeof(struct cola));
  q->frente = -1;
  q->atras = -1;
  return q;
}

// chequea si la cola esta vacia
int estaVacio(struct cola* q) {
  if (q->atras == -1)
    return 1;
  else
    return 0;
}

// agregar elementos a la cola
void encolar(struct cola* q, int valor) {
  if (q->atras == CANTIDAD - 1)
    printf("\ncola is Full!!");
  else {
    if (q->frente == -1)
      q->frente = 0;
    q->atras++;
    q->items[q->atras] = valor;
  }
}

// Remover elementos de la cola
int desencolar(struct cola* q) {
  int item;
  if (estaVacio(q)) {
    printf("cola vacía");
    item = -1;
  } else {
    item = q->items[q->frente];
    q->frente++;
    if (q->frente > q->atras) {
      printf("reseteando cola ");
      q->frente = q->atras = -1;
    }
  }
  return item;
}

// imprime la cola
void imprimeCola(struct cola* q) {
  int i = q->frente;

  if (estaVacio(q)) {
    printf("cola vacía");
  } else {
    printf("\ncola contiene \n");
    for (i = q->frente; i < q->atras + 1; i++) {
      printf("%d ", q->items[i]);
    }
  }
}

int main() {
  struct Grafo* Grafo = catrasGrafo(6);
  agregaArista(Grafo, 0, 1);
  agregaArista(Grafo, 0, 2);
  agregaArista(Grafo, 1, 2);
  agregaArista(Grafo, 1, 4);
  agregaArista(Grafo, 1, 3);
  agregaArista(Grafo, 2, 4);
  agregaArista(Grafo, 3, 4);

  bfs(Grafo, 0);

  return 0;
}
