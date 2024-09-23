#include<stdio.h>
#include<stdlib.h>


struct Nodo
{
    int valor;
    struct Nodo *izq;
    struct Nodo *der;
    int alto;
};

int max(int a, int b);

int alto(struct Nodo *N)
{
    if (N == NULL)
        return 0;
    return N->alto;
}

int max(int a, int b)
{
    return (a > b)? a : b;
}


struct Nodo* nuevoNodo(int valor)
{
    struct Nodo* Nodo = (struct Nodo*)
        malloc(sizeof(struct Nodo));
    
    Nodo->valor   = valor;
    Nodo->izq   = NULL;
    Nodo->der  = NULL;
    Nodo->alto = 1;
    return(Nodo);
}

struct Nodo *rotaDerecha(struct Nodo *y)
{
    struct Nodo *x = y->izq;
    struct Nodo *T2 = x->der;
    x->der = y;
    y->izq = T2;
    y->alto = max(alto(y->izq), alto(y->der))+1;
    x->alto = max(alto(x->izq), alto(x->der))+1;
    return x;
}

struct Nodo *rotaIzquierda(struct Nodo *x)
{
    struct Nodo *y = x->der;
    struct Nodo *T2 = y->izq;
    y->izq = x;
    x->der = T2;
    x->alto = max(alto(x->izq), alto(x->der))+1;
    y->alto = max(alto(y->izq), alto(y->der))+1;
    return y;
}

int Balancear(struct Nodo *N)
{
    if (N == NULL)
        return 0;
    return alto(N->izq) - alto(N->der);
}

struct Nodo* insertar(struct Nodo* Nodo, int valor)
{
    if (Nodo == NULL)
        return(nuevoNodo(valor));
    if (valor < Nodo->valor)
        Nodo->izq  = insertar(Nodo->izq, valor);
    else if (valor > Nodo->valor)
        Nodo->der = insertar(Nodo->der, valor);
    else
        return Nodo;
    Nodo->alto = 1 + max(alto(Nodo->izq),
                           alto(Nodo->der));
    int balance = Balancear(Nodo);
    if (balance > 1 && valor < Nodo->izq->valor)
        return rotaDerecha(Nodo);
    if (balance < -1 && valor > Nodo->der->valor)
        return rotaIzquierda(Nodo);
    if (balance > 1 && valor > Nodo->izq->valor)
    {
        Nodo->izq =  rotaIzquierda(Nodo->izq);
        return rotaDerecha(Nodo);
    }
    if (balance < -1 && valor < Nodo->der->valor)
    {
        Nodo->der = rotaDerecha(Nodo->der);
        return rotaIzquierda(Nodo);
    }
    return Nodo;
}

struct Nodo * nodoMinimoValor(struct Nodo* Nodo)
{
    struct Nodo* actual = Nodo;
    /* recorrer hacia abajo para encontrar la hoja más a la izquierda
    */
    while (actual->izq != NULL)
        actual = actual->izq;
    return actual;
}

struct Nodo* borraNodo(struct Nodo* base, int valor)
{
    if (base == NULL)
        return base;
    if ( valor < base->valor )
        base->izq = borraNodo(base->izq, valor);
    else if( valor > base->valor )
        base->der = borraNodo(base->der, valor);
    else
    {
        if( (base->izq == NULL) || (base->der == NULL) )
        {
            struct Nodo *temp = base->izq ? base->izq :
                base->der;
            if (temp == NULL)
            {
                temp = base;
                base = NULL;
            }
            else
                *base = *temp;
            free(temp);
        }
        else
        {
            struct Nodo* temp = nodoMinimoValor(base->der);
            base->valor = temp->valor;
            base->der = borraNodo(base->der, temp->valor);
        }
    }
    if (base == NULL)
        return base;
    base->alto = 1 + max(alto(base->izq),
                           alto(base->der));
    int balance = Balancear(base);
    if (balance > 1 && Balancear(base->izq) >= 0)
        return rotaDerecha(base);
    if (balance > 1 && Balancear(base->izq) < 0)
    {
        base->izq =  rotaIzquierda(base->izq);
        return rotaDerecha(base);
    }
    if (balance < -1 && Balancear(base->der) <= 0)
        return rotaIzquierda(base);
    if (balance < -1 && Balancear(base->der) > 0)
    {
        base->der = rotaDerecha(base->der);
        return rotaIzquierda(base);
    }
    return base;
}
void preOrder(struct Nodo *base)
{
    if(base != NULL)
    {
        printf("%d ", base->valor);
        preOrder(base->izq);
        preOrder(base->der);
    }
}


int main()
{
    struct Nodo *base = NULL;
    
    base = insertar(base, 27);
    base = insertar(base, 9);
    base = insertar(base, 19);
    base = insertar(base, 91);
    base = insertar(base, 90);
    base = insertar(base, 72);
    /*   otro conjunto de daos de prueba: descomentar
    base = insertar(base, 1);
    base = insertar(base, 2);
    base = insertar(base, 3);
    base = insertar(base, 4);
    base = insertar(base, 5);
    base = insertar(base, 6);
    */
    printf("El arbol AVL en forma preOrder: \n");
    preOrder(base);
    printf("\n");
    base = borraNodo(base, 9);
    base = borraNodo(base, 72);
    printf("El arbol en preOrder luego de borrar: \n");
    preOrder(base);
    printf("\n");
    base = insertar(base, 1);
    base = insertar(base, 2709);
    printf("El arbol en preOrder luego de las dos inserciones: \n");
    preOrder(base);
    printf("\n");
    return 0;
}
