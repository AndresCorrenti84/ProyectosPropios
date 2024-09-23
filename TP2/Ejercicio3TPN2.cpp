#include <iostream>
using namespace std;

main () {
	float kmr, kmtotal, bultosigr, bultotal, neto, total, iva;
	cout <<(" Ingrese cuantos kilometros recorrio ")<<endl;
	cin >>kmr;
	cout <<(" Ingrese cuantos bultos lleva ")<<endl;
	cin >>bultosigr;
	kmtotal = (kmr * 20);
	bultotal = (40 * bultosigr);
	neto = ( bultotal+kmr);
	iva = ( neto * 21) / 100;
	total = (neto + iva);
	cout <<" El valor total del viaje es "<<total<<"$"<<endl;
}

