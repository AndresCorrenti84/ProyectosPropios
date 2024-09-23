#include <stdio.h>
#include <iostream>
#include <time.h>

using namespace std;

void MatrizA (int matriz[5][5]);
void MostrarMatrizA (int matriz [5][5]);
int NumeroMayor (int matriz [5][5]);

int main (){
	srand (time(NULL));
	int Matriz1 [5][5];
	MatrizA(Matriz1);
	//mayor
	NumeroMayor(Matriz1);
	
}

void MatrizA (int matriz[5][5]){
	for (int i = 0; i < 5; i++){
		for(int j= 0; j < 5; j++){
			matriz [i][j] = rand()%5;
			printf ("[%d]", matriz[i][j]); 
		}
		printf ("\n");
	}
}

void MostrarMatrizA (int matriz [5][5]){
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			printf ("%d", matriz[i][j]);
		}
		printf ("/n");
	}
}

int NumeroMayor (int matriz [5][5]){
	int Mayor = 0;
	
	for (int i = 0 ; i < 5; i++){
		for(int j = 0; j < 5; j++){
			if(Mayor<matriz[i][j]){
                Mayor=matriz[i][j];
            }
		}
	}
	printf ("El mayor es %d", Mayor);
}