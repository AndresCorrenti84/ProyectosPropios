#include <iostream>
#include <stdlib.h>
#include <iostream>

//subprocesos encabezado
int numero1 (int n1);
int numero2 (int *n2);
int validacion (int *M, int N);
int pares (int *M, int *N);

//main principal
main (){
	int A, numA;
	A = numero1(numA);
	int B, numB;
	B = numero2(&numB);
	validacion(&A, B);
	pares(&A, &B);
}
//subprocesos
int numero1 (int n1){
	do{
		printf ("Ingrese un numero A:\n ");
    	scanf ("%d", &n1);
	}while (n1 < 0);
	printf ("\nNumero A validado.");
	return n1;
}

int numero2 (int *n2){
	do{
		printf ("\nIngrese un numero B: \n");
		scanf ("%d", &*n2);
	}while(*n2 < 0);
	printf ("\nNumero B validado.");
	return *n2;
}

int validacion (int *M, int N){
	if (*M < N){
		printf ("\nEl numero menor es el primero, ahora se mostraran los pares entre si. \n");
	}else {
		printf ("\nError, vuelva a intentarlo.");
		system ("pause");
	}
}

int pares (int *M, int *N) {

    if (*M % 2 != 0) {

        *M = *M++;
    }

    for ( ; *M<=*N; *M=*M+2) {

        printf ("[%d]", *M);
    }
}
