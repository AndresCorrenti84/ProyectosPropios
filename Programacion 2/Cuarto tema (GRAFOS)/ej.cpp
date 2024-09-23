#include <stdio.h>
#include <malloc.h>
#define FILAS_MATRIZ_B 6
#define COLUMNAS_MATRIZ_B 6
#define FILAS_MATRIZ_A 6
#define COLUMNAS_MATRIZ_A 6


int main (){
	int matriz[6][6];
	int producto[6][6];
	
	for (int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			matriz[1][2] = 1;
			matriz[1][3] = 1;
			matriz[1][4] = 1;
			matriz[2][2] = 1;
			matriz[4][3] = 1;
			matriz[5][6] = 1;
		}
	}
	
	/*int matrizA[FILAS_MATRIZ_A][COLUMNAS_MATRIZ_A] = {
        {3, 2, 1},
    {1, 1, 3},
        {0, 2, 1},
    };
    int matrizB[FILAS_MATRIZ_B][COLUMNAS_MATRIZ_B] = {
        {2, 1},
    {1, 0},
        {3, 2},
    }; 
    
    if (COLUMNAS_MATRIZ_A != FILAS_MATRIZ_B) {
        printf("Columnas de matriz A deben ser igual a filas de matriz B");
        return 0;
    }
    
    //Lugar en donde se almacena el resultado
    int producto[FILAS_MATRIZ_B][COLUMNAS_MATRIZ_B]; */
    
    // Necesitamos hacer esto por cada columna de la segunda matriz (B)
    for (int a = 0; a < 6; a++) {
        // Dentro recorremos las filas de la primera (A)
        for (int i = 0; i < 6; i++) {
            int suma = 0;
            // Y cada columna de la primera (A)
            for (int j = 0; j < 6; j++) {
                // Multiplicamos y sumamos resultado
                suma += matriz[i][j] * matriz[i][j];
            }
            // Lo acomodamos dentro del producto
            producto[i][j] = suma;
        }
    }
    
    // Recorrer producto
    printf("Imprimiendo producto\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", producto[i][j]);
        }
        printf("\n");
    }
}
