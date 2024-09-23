#include <iostream>
using namespace std;

main () {
	float dias, vxdia, vneto, vtotal, iva, vliva, consumicion;
	cout <<(" Ingrese la cantidad de dias que estuvo")<<endl;
	cin >>dias;
	cout <<(" Ingrese el valor por dia")<<endl;
	cin >>vxdia;
	vneto = (dias * vxdia);
	cout <<" El valor neto SIN IVA, es de "<<vneto<<"$"<<endl;
	iva = (vneto * 21) / 100;
	vliva = (vneto + iva);
	cout <<" El valor neto CON IVA, es de "<<vliva<<"$"<<endl;
	consumicion = (vneto / 3) * 1;
	cout <<" El precio adicional por la consumicion del frigobar es de "<<consumicion<<"$"<<endl;
}
