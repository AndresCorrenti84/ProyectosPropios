#include <iostream>
#include <stdio.h>
using namespace std;
#include <iostream>
using namespace std;
int main (void) {
	int numero;
	printf ("Ingrese un numero: ");
	scanf ("%d", &numero);
	if (numero > 20 && numero <40){
		printf ("El numero es correcto. ");
	} else {
		printf ("El numero que ingreso es mayor/menor que el permitido. ");
	}
	
}































































/*MATRIZ.
int main (void) {
	int matriz [100][100], filas, columnas, f, c, prom, promedio, prom2, promedio2;
	printf ("Ingrese cuantas filas ");
	scanf ("%d",& filas);
	printf ("\nIngrese cuantas columnas ");
	scanf ("%d",& columnas);
	for (f = 0; f < filas; f++){
		for (c = 0; c < columnas; c++){
			printf ("Ingrese un numero: ");
			scanf ("%d",& matriz [f][c]);
		}
	}
	for (f = 0; f < filas; f++){
		for (c = 0; c < columnas; c++){
			printf ("\t%d", matriz [f][c]);
		}
		printf ("\n");	
	}
	printf (" La diagonal principal es: ");
	for (f = 0; f < filas; f++){
		for (c = 0; c < columnas; c++){
			if (f == c){
				printf ("%d", matriz [f][c]);
				prom = prom + matriz [f][c];
			}
		}	
	}
	promedio = prom/columnas;
	printf ("\nEl promedio es: " "%d", promedio); 
	
	printf ("\nLa diagonal secundaria es: ");
	for (f = 0; f < filas; f++){
		for (c = 0; c < columnas; c++){
			if ((f + c)==(columnas-1)) {
				printf ("%d", matriz [f][c]);
				prom2 = prom2 + matriz [f][c];
			}
		}
	}
	promedio2 = prom2/columnas;
	printf ("\nEl promedio es: " "%d", promedio2); 
}*/
/* DO-WHILE
main () {
	int num1, num2, norg;
	do{
		do {
		printf (" Ingrese un numero: ");
		scanf ("%d", &num1);
	       }while (num1 <= 1);
	    do {
		printf ("Ingrese otro numero:");
		scanf ("%d", &num2);
	       }while (num2 <= 1);
	}while (num1 > num2);
	num1 = norg;
	if (num1 %2 != 0) {
		num1 = num1 ++;
	} 
	while (num1 < num2) {
		norg = num1;
		num1 = num1 +2;
		printf ("%d", num1);
	}

}/*
SRAND SWITCH.
main() {

int pj = 0, pmaq = 0, cantjuegos = 0, jugador, jugadamaq, i;
cout << "Ingrese la cantidad de Juegos: " << endl;
cin >> cantjuegos;

srand (time(NULL));
for (i=1; i<=cantjuegos; i++) {
cout << "Ingrese <0> piedra, <1> papel, <2> tijera: " << endl;
	
	do {
		cin >> jugador;
		
	} while (jugador <0 || jugador >2);
		
		jugadamaq = rand()%3;
		cout << "La maquina elijio: \n" << jugadamaq;
		cout << "\nUsted eligio: " << endl;
		
	switch (jugador){
		
		case PIE: cout << "Piedra" << endl; break; 
		case PA: cout << "Papel" << endl; break;
		case TI: cout << "Tijera" << endl; break;
		}
		
		switch (jugadamaq){
			case PIE: switch (jugador){
				case PIE: cout << "No se suman puntos" << endl; break;
		        case PA: pj ++; cout << "El jugador gana un punto" << endl; break;
		        case TI: pmaq ++; cout << "La maquina gana un punto" << endl; break;
			} break;
			case PA: switch (jugador){
				case PIE: pmaq ++; cout << "La maquina gana un punto" << endl; break;
		        case PA: cout << "No se suman puntos" << endl; break;
		        case TI: pj ++; cout << "El jugador gana un punto" << endl; break;
			} break;
			case TI: switch (jugador){
				case PIE: pj ++; cout << "El jugador gana un punto" << endl; break;
		        case PA: pmaq ++; cout << "La maquina gana un punto" << endl; break;
		        case TI: cout << "No se suman puntos" << endl; break;
			} break;
		} 
		
}
     if (pmaq > pj) {
     	cout << "La maquina gana el juego" << endl;
	 } else if (pmaq < pj){
	 	cout << "El jugador gana el juego" << endl;
	 } else {
	 	cout << "Hay empate" << endl;
	 }
	 
     system ("pause");
}
