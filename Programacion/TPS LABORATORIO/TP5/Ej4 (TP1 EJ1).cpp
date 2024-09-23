#include <iostream>
#include <stdlib.h>
using namespace std;
int positnegat(int numero);
int main (void){
	int num;
	positnegat(num);
}


int positnegat(int numero){
	printf (" Ingrese su numero ");
	scanf ("%d", &numero);
	if(numero  >= 0) {
		printf ("\nSu numero es POSITIVO ");
	}else {
		printf (" Su numero es NEGATIVO ");
    }  
}
