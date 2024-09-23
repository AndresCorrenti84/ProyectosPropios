#include <iostream>
using namespace std;
//cout <<("Presione 'ENTER' para ver la cantidad de monedas que hay en el banco")<<endl;
main() {
	float nombre, un, dos, cincuenta, veinticinco, diez, cinco, mt;
	cout <<(" Ingrese el nombre de la sucursal (Gueymallen) ")<<endl;
	cin >>nombre;
	un =(1 * 5300);
	 cout <<  " \nEl monto de monedas de $1 es de  "<<un;
	dos =(2*257);
	cout <<" \nEl monto de monedas de $2 es de  "<<dos;
	cincuenta =(0.5 * 2400);
	cout <<" \nEl monto de monedas de $50 CENTAVOS es de  "<<cincuenta;
	veinticinco = (0.25 * 0);
	cout <<" \nEl monto de monedas de $25 CENTAVOS es de  "<<veinticinco;
	diez =(0.10 * 6108);
	cout <<" \nEl monto de monedas de $10 CENTAVOS es de  "<<diez;
	cinco =(0.5 * 2357);
	cout <<" \nEl monto de monedas de $5 CENTAVOS es de  "<<cinco;
	mt = (un + dos+ cincuenta + veinticinco + diez + cinco);
	cout <<" \nEl monto total es de "<<mt<<" pesos "<<endl;
}
