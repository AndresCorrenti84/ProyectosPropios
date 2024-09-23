#include <stdio.h>
#include <stdlib.h>

struct nodo {
  int vertice;
  struct nodo* proximo;
};

struct nodo* crearNodo(int v);

struct Grafo {
  int numVertices;
  int* visitado;

  //necesitamos nodo** para almacenar un arreglo de listas linkeadas
  struct nodo** listaAdys;

};

// algoritmo DFS
void DFS(struct Grafo* Grafo, int vertice) {
  struct nodo* listaAdy = Grafo->listaAdys[vertice];
  struct nodo* temp = listaAdy;

  Grafo->visitado[vertice] = 1;
  printf("visitado %d \n", vertice);

  while (temp != NULL) {
    int verticeConectado = temp->vertice;

    if (Grafo->visitado[verticeConectado] == 0) {
      DFS(Grafo, verticeConectado);
    }
    temp = temp->proximo;
  }
}

// Crear un nodo
struct nodo* crearNodo(int v) {
  struct nodo* nuevoNodo = malloc(sizeof(struct nodo));
  nuevoNodo->vertice = v;
  nuevoNodo->proximo = NULL;
  return nuevoNodo;
}

// Crear Grafo
struct Grafo* createGrafo(int vertices) {
  struct Grafo* Grafo = malloc(sizeof(struct Grafo));
  Grafo->numVertices = vertices;

  Grafo->listaAdys = malloc(vertices * sizeof(struct nodo*));

  Grafo->visitado = malloc(vertices * sizeof(int));

  int i;
  for (i = 0; i < vertices; i++) {
    Grafo->listaAdys[i] = NULL;
    Grafo->visitado[i] = 0;
  }
  return Grafo;
}

// Agrega arista
void agregaArista(struct Grafo* Grafo, int src, int dest) {
  // agrega arista desde fuente a destino
  struct nodo* nuevoNodo = crearNodo(dest);
  nuevoNodo->proximo = Grafo->listaAdys[src];
  Grafo->listaAdys[src] = nuevoNodo;

  // agrega arista desde destino a fuente
  nuevoNodo = crearNodo(src);
  nuevoNodo->proximo = Grafo->listaAdys[dest];
  Grafo->listaAdys[dest] = nuevoNodo;
}

// imprime el grafo
void imprimeGrafo(struct Grafo* Grafo) {
  int v;
  for (v = 0; v < Grafo->numVertices; v++) {
    struct nodo* temp = Grafo->listaAdys[v];
    printf("\n Lista de adyacencia del vertice %d\n ", v);
    while (temp) {
      printf("%d -> ", temp->vertice);
      temp = temp->proximo;
    }
    printf("\n");
  }
}

int main() {
  struct Grafo* Grafo = createGrafo(4);
  agregaArista(Grafo, 0, 1);
  agregaArista(Grafo, 0, 2);
  agregaArista(Grafo, 1, 2);
  agregaArista(Grafo, 2, 3);

  imprimeGrafo(Grafo);

  DFS(Grafo, 2);

  return 0;
}