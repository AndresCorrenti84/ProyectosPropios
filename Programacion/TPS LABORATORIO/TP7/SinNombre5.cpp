#include <iostream>
#include <stdio.h>
using namespace std;

struct NUMEROS {
	int numeroA;
	int numeroB;
};

struct NUMEROS leer ();
int retornar (int num1, struct NUMEROS *num);

main (){
	struct NUMEROS n;
	int resultado;
	n = leer();
	resultado = retornar(n.numeroA,&n);
	printf ("El numero menor es: %d", resultado);
}


struct NUMEROS leer (){
	struct NUMEROS num;
	printf ("Ingrese un numero: ");
	scanf ("%d", &num.numeroA);
	printf ("Ingrese otro numero: ");
	scanf ("%d", &num.numeroB);
	return num;
}

int retornar (int num1, struct NUMEROS *num){
	if (num1 > num->numeroB){
		return num->numeroB;
	}else {
		return num1;
	}
}