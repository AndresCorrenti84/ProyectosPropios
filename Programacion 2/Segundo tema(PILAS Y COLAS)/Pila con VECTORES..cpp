#include <stdio.h>

int crearlista (int vec[5], int numero, int top);
int quitar (int vec[5], int *top);


int main (){
	int pila[5];
	int dato;
	int tope = 0;
	
	for (int i = 0; i < 5; i++){
		
		printf ("Ingrese un dato; ");
		scanf ("%d", &dato);
		
		tope = crearlista(pila, dato, tope);
	}
	tope--;
	int a;
	a = quitar(pila, &tope);
	printf ("%d", a);
	
	a = quitar(pila, &tope);
	printf ("\n%d", a);
	
	a = quitar(pila, &tope);
	printf ("\n%d", a);
	
	a = quitar(pila, &tope);
	printf ("\n%d", a);
	
	a = quitar(pila, &tope);
	printf ("\n%d", a);
}


int crearlista (int vec[5], int numero, int top){
	
	if (top == 5){
		return top;
		
	}
	
	vec[top] = numero;
	return top +1;
}

int quitar (int vec[5], int *top){
	
	int devolver = vec[*top];
	vec[*top] = 0;
	
	*top = (*top) - 1;
	return devolver;
}