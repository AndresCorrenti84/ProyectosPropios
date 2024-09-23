#include <iostream>
#include <stdlib.h>
using namespace std; //ejercicio 4 de tp 5 (ej4 tp1  if)
int calculopar (int numeropar);
int main (void){
	int npar;
	calculopar(npar);
}

int calculopar (int numeropar){	
	printf (" Ingrese numero par ");
	scanf ("%d", &numeropar);
	if (numeropar  %2 == 0) {
		printf (" El numero ingresado es par ");
	}else{
		printf (" El numero ingresado es impar ");
	}
} 
 //ejercicio 4 de tp5 (ej1 tp1 switch)

#include <iostream>
#include <stdlib.h>
using namespace std;
int calculopar (int numeropar, int resto);
int main (void){
	int npar2, restO;
	calculopar(restO, npar2);
	
}
int calculopar (int numeropar, int resto) {
	printf (" Ingrese su numero ");
	scanf ("%d", &numeropar);
	resto = (numeropar %2 == 0);
	switch(resto) {
		case 1: printf(" Su numero es par "); break;
		default: printf(" Numero impar "); break;
	}
}
