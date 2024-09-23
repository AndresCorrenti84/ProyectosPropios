#include <stdio.h>
#include <iostream>

using namespace std;

struct NUMEROS {
	int numeroA;
	int numeroB;
};

struct NUMEROS leer ();
int retornar (struct NUMEROS);

main (){
	struct NUMEROS n;
	int resultado;
	n = leer();
	resultado = retornar(n);
	printf ("El menor numero es %d", resultado);
}

struct NUMEROS leer (){
	struct NUMEROS num;
	printf ("Ingrese un numero: ");
	scanf ("%d",&num.numeroA);
	printf ("Ingrese otro numero: ");
	scanf ("%d",&num.numeroB);
	return num;
}

int retornar (struct NUMEROS num){
	if (num.numeroA < num.numeroB){
		return num.numeroA;
	}else{
		return num.numeroB;
	}
}