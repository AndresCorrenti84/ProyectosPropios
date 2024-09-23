#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
void vector (char vec[5]);
void mostrarletras (char vec[5]);
int main (){
	printf ("100 LETRAS.\n");
	char vc[5];
	vector(vc);
	char letra[5];
	mostrarletras(vc);
}



void vector (char vec[5]){
	for (int i = 0; i < 5; i++){
		printf ("Ingrese una letra MAYUSCULA. ");
		scanf ("%c", &vec[i]);
		vec[i]=toupper(vec[i]);
		fflush(stdin);	
	}
}

void mostrarletras (char vec[5]){
	for (int i = 0; i < 5; i++){
		printf ("\n%d", i);
		printf (" %c", vec[i]);
	}
}
