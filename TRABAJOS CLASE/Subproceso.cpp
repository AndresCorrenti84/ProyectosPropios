#include <stdlib.h>
#include <iostream>
#include <time.h>
void mostrarmatriz (int filas, int columnas, int matriz[10][10]);
void llenarmatriz(int filas, int columnas, int matriz[10][10]);
int coincidencia (int filas, int columnas, int matrizA[10][10], int matrizB[10][10]);
int sumadediagonal (int filas, int columnas, int matriz[10][10]);
int sumadediagonalsecundaria (int filas, int columnas, int matriz[10][10]);
main (){  //Llamado de funciones.
	int a;
	srand (time(NULL));
	int matrizA [10][10]; 
	int matrizB [10][10];
	llenarmatriz(10,10, matrizA); //primero llamamos al proceso.
	llenarmatriz(10,10, matrizB);
	printf ("La matriz A es:\n"); //despues ponemos paa que nos la mestre, en este caso la matriz A
	mostrarmatriz(10,10, matrizA);
	printf ("La matriz B es:\n"); // matriz b.
	mostrarmatriz(10,10, matrizB);
	a=coincidencia (10,10, matrizA, matrizB);
	printf ("Coinciden %d veces", a);
	printf ("\nLa suma de la diagonal principal de la matriz A es: %d", sumadediagonal(10,10, matrizA)); //llamamos a la funcion de forma distinta para que muestre el resultado.
	printf ("\nLa suma de la diagonal principal de la matriz B es: %d", sumadediagonal(10,10, matrizB));
	printf ("\nLa suma de la diagonal secundaria de la matriz A es: %d", sumadediagonalsecundaria(10,10, matrizA));
	printf ("\nLa suma de la diagonal secundaria de la matriz B es: %d", sumadediagonalsecundaria(10,10, matrizB));
}
void llenarmatriz(int filas, int columnas, int matriz[10][10]){ //Un proceso, porque no devuelve nada (VOID).
	for (int i = 0; i < filas; i++){
		for ( int j = 0; j < columnas; j++){
			 matriz[i][j] = rand ()%10;
		} //llenar la matriz con numeros aleatorios.
    }
}
void mostrarmatriz (int filas, int columnas, int matriz[10][10]){//Un proceso, porque no devuelve nada (VOID).
	for (int i = 0; i < filas; i ++){
		for (int j = 0; j < columnas; j++){
			printf ("[%d]", matriz[i][j]);
		}
			printf ("\n"); //salto de linea para ordenar la matriz.
	}
}

int coincidencia (int filas, int columnas, int matrizA[10][10], int matrizB[10][10]){ //Esto es una funcion, porque devuelve algo, en este caso una el aumento de un contador. (INT).
	int contador;
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
			if (matrizA[i][j] == matrizB[i][j]){
				contador++;
			 }
		}
	}
	return contador; //return para que devuelva el valor.
}

int sumadediagonal (int filas, int columnas, int matriz[10][10]){ //Esta es una funcion, devuelve una suma.
	int suma = 0;
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
			if (i == j){
				suma = suma + matriz[i][j];
			   }
		    }
	    }
	    return suma; //return para que devuelva el valor. (LO QUE VA A DAR.)
	}
int sumadediagonalsecundaria (int filas, int columnas, int matriz[10][10]){ //Esta es una funcion, devuelve una suma.
	int suma=0;
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
			if (i + j == columnas-1){
				suma = suma + matriz[i][j];
		    	}
		    }
	    }
	    return suma; //return para que devuelva el valor.
	}
