#include <stdio.h>
#include <iostream>
#include <time.h>

using namespace std;

void Matriz1 (int matriz[5][5]);
void MostrarMatriz1 (int matriz[5][5]);
int SumaDeElementos (int matriz[5][5]);


int main (){
	srand (time(NULL));
	int MatrizA[5][5];
	Matriz1(MatrizA);
	//suma
	SumaDeElementos(MatrizA);
}

void Matriz1 (int matriz[5][5]){
	for (int i = 0; i < 5; i++){
		for(int j= 0; j < 5; j++){
			matriz [i][j] = rand()%5;
			printf ("[%d]", matriz[i][j]); 
		}
		printf ("\n");
	}
}

void MostrarMatriz1 (int matriz[5][5]){
	
	for (int i = 0; i < 5; i++){
		for (int j = 0; i < 5; i++){	
		   printf ("[%d]", matriz[i][j]);
		}
		printf ("\n");
	}
}


int SumaDeElementos (int matriz[5][5]){
	int suma = 0;
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
		    suma = suma + matriz[i][j];	
		}
	}
	printf ("%d", suma);
}