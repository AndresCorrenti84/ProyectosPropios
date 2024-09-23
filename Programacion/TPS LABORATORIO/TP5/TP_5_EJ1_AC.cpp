#include <stdlib.h>
#include <iostream>
#include <stdio.h>


using namespace std;

int validacionNA (int n1);
int validacionNB (int n2);
int comparacion (int M, int N);
int pares (int M, int N) ;

main () {
	int A, A1;
	A = validacionNA(A1);
	int B, B1;
	B = validacionNB(B1);
	comparacion(A, B);
	pares(A, B);
}

int validacionNA (int n1){
	do{
		printf ("Ingrese un numero: \n");
		scanf ("%d", &n1);
	}while (n1 < 0);
	printf ("\nNumero A validado. ");
	return n1;
}

int validacionNB (int n2){
	do{
		printf ("\nIngrese otro numero: ");
    	scanf ("%d", &n2);
	}while (n2 < 0);
	printf ("\nNumero B validado. ");
	return n2;
}

int comparacion (int M, int N){
	if (M < N){
		printf ("\nEl numero ingresado es correcto, se mostraran los pares entre si. ");
	}else {
		printf ("\nError, intentelo de nuevo. ");
		system ("pause");
	}
}

int pares (int M, int N) {

    if (M % 2 != 0) {

        M = M++;
    }

    for ( ; M<=N; M=M+2) {

        printf ("[%d]", M);
    }
}
