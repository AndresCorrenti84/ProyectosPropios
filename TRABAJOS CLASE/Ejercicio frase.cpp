#include <iostream>
using namespace std;
#include <string.h>
//ingresar una frase y que muestre cuantas vocales tiene
main() {
	char frase [60],vocal = 0, i;
	cout <<(" Ingrese una frase ")<<endl;
	gets (frase);
	cout <<endl<< "La frase es " <<frase;
	vocal=0;
	for (i = 0; i <= strlen(frase); i++ ) 
	switch (frase [i]){
		case 'a': vocal++; break;
		case 'e': vocal++; break;
		case 'i': vocal++; break;
		case 'o': vocal++; break;
		case 'u': vocal++; break;
	}
	cout <<"\nTiene "<<vocal<<" vocales"<<endl;
}
