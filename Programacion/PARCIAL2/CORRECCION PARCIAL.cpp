#include <stdio.h>

struct PARCIAL {
	
	int campo1;
	int campo2;
};

void leer (struct PARCIAL *mono);
struct PARCIAL intercambio (struct PARCIAL mono);

main (){
	
	struct PARCIAL pe, peintercambio;

	leer (&pe);
	peintercambio = pe;
	printf (" \n%d", pe.campo1);
	printf ("\n%d", pe.campo2);
	peintercambio = intercambio(peintercambio);
	printf ("\n%d", peintercambio.campo1);
	printf ("\n%d", peintercambio.campo2);
	
}

void leer (struct PARCIAL *mono){
	printf ("Ingrese un numero ");
	scanf ("%d", &mono->campo1);
	printf ("\nIngrese otro numero ");
	scanf ("%d", &mono->campo2);
}

struct PARCIAL intercambio (struct PARCIAL mono){
	int aux;
	aux= mono.campo1;
	mono.campo1 = mono.campo2;
	mono.campo2 = aux;
	return mono;
}
