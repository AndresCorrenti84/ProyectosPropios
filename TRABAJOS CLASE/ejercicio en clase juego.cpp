#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

// Ejercicio en clase; Piedra, Papel o Tijera

const int PIE = 0;
const int PA = 1;
const int TI = 2;

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


