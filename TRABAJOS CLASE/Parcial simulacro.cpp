#include <iostream>
#include<math.h>
using namespace std;
// saber cuantas cifras tiene el numero, 2, 1, 3, dividiendolo x 10, hasta q el cociente de 0, despues de eso tengo q armar el numero al reves, inverso multiplicativo. teniendo el numero 3 cifras, el primer resto(del numero de la izq. x10 a la 2, y asi continuamente.)

main () {
	int nume, norg, cifras, resto, invertido, i;
	cout <<(" Ingrese un numero entero ")<<endl;
	cin >>nume;
	norg = nume;
	cifras = 1;
	while (nume /10 != 0) {
		nume=nume / 10;
		cifras ++;
	}
	cout <<(" Tiene ")<<cifras<<" cifras "<<endl;
	invertido = 0;
	nume = norg;
	for (i = cifras -1; i >=0; i--) {
		resto = nume % 10;
		invertido = invertido + resto * pow (10, i);
		nume=nume/10;
	}
	cout <<(" El numero invertido es ")<<invertido;
	if (norg == invertido){
		cout <<(" \nEl numero es CAPICUA ")<<endl;
	} 
	else {
		cout <<(" \nEl numero ingresado NO ES CAPICUA ")<<endl;
	}
}
