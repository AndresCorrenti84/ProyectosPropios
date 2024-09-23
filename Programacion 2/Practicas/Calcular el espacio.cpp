#include <stdio.h>
#include <malloc.h>


int main (){
	
	int *numero;
	
	numero = (int *) malloc (sizeof(int));
	
	*numero = 202; //Le asignamos un valor para ver despues como se borra;
	
	printf ("%d", *numero); //Muestra el numero asignado;
	
	printf ("\n%d", &numero); //ESPACIO DE MEMORIA QUE ESTA ALMACENADO
	
	free (numero); //Para liberar un espacio de memoria de un puntero, colocamos sin *;
}