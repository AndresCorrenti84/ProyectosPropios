#include <stdio.h>
#include <iostream>
using namespace std;

struct NUMEROS {
	int numero1;
	int numero2;
};

struct NUMEROS leer ();
int retornar (struct NUMEROS *num);

main (){
	struct NUMEROS n;
	int resultado;
	n = leer();
	resultado = retornar(&n);
	printf ("El numero menor es %d", resultado);
}

struct NUMEROS leer (){
	struct NUMEROS num;
	printf ("Ingrese un numero: ");
	scanf ("%d",&num.numero1);
	printf ("Ingrese otro numero: ");
	scanf ("%d",&num.numero2);
	return num;
}

int retornar (struct NUMEROS *num){
	if (num->numero1 > num->numero2){
		return num->numero2;
	}else {
		return num->numero1;
	}
}