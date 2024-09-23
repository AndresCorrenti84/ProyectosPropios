#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

//encabezado de subprocesos.
void arregloA (int vector[5]);
void arregloB (int vector[5]);
void ordenarA (int vector[5]);
void ordenarB (int vector[5]);
//ordenados que se muestran.
void mostrarvectorA (int vector[5]);
void mostrarvectorB (int vector[5]);
//encabezado del arreglado.
void arregloC (int vectorA[5], int vectorB[5], int vectorC[10]);
//Mostrar vector unido.
void mostrarvectorC (int vectorC[10]);
//main principal.
main (){
	int vecA[5];
	arregloA(vecA);
	int vecB[5];
	arregloB(vecB);
	//vectores ordenados:
	ordenarA(vecA);
	ordenarB(vecB);
	//mostrar vectores ordenados.
	printf ("El vector ordenado A es: ");
	mostrarvectorA(vecA);
	printf ("\nEl vector ordenado B es: ");
	mostrarvectorB(vecB);
    //armar el  vectorC;
	int vecC[10];
	arregloC(vecA, vecB, vecC);
	//combinados.
	printf ("\n");
	printf ("El vector C (combinado), es: ");
	mostrarvectorC(vecC);
}


//subprocesos
void arregloA (int vector[5]){
	for (int i = 0; i < 5; i++){
		printf ("Llene el vector A: ");
		scanf ("%d", &vector[i]);
	}
}

void arregloB (int vector[5]){
	for(int i = 0; i < 5; i++){
		printf ("Llene el vector B: ");
		scanf ("%d", &vector[i]);
	}
}

void ordenarA (int vector[5]){
	int aux;
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			if(vector[j] > vector[j+1]){
				aux = vector[j];
				vector[j] = vector[j+1];
				vector[j+1] = aux;
			}
		}
	}
}


void mostrarvectorA (int vector[5]){
	for (int i = 0; i < 5; i++){
		printf ("[%d]", vector[i]);
	}
}


void ordenarB (int vector[5]){
	int aux;
    for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			if(vector[j] > vector[j+1]){
				aux = vector[j];
				vector[j] = vector[j+1];
				vector[j+1] = aux;
			}
		}
	}
}
void mostrarvectorB (int vector[5]){
	for (int i = 0; i < 5; i++){
		printf ("[%d]", vector[i]);
	}
}

void arregloC (int vectorA[5], int vectorB[5], int vectorC[10]){
	for (int i = 0; i < 5; i++){
		vectorC[i] = vectorA[i];
	}
	for (int i = 5; i < 10; i++){
		vectorC[i] = vectorB[i-5];
	}
	
}

void mostrarvectorC (int vectorC[10]){
	for (int i = 0; i < 10; i++){
		printf ("[%d] ",vectorC[i]);
	}
}
