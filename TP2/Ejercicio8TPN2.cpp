#include <iostream>
using namespace std;


const int adicional = 45;
const int si = 1;
const int no = 0;


main () {
	int pago, anio, multa, plan, recargo;
	cout << "Conteste si el beneficiario esta pagando otra financiacion: <1> si <0> no" << endl;
	cin >> pago;
	
	switch (pago) {
		
	case si: cout << "No puede acceder a una financiacion porque hay otra en curso" << endl; break;
	case no:
	
	cout << "Ingrese el año en que se efectuo la multa: " << endl;
	cin >> anio;
	cout << "Ingrese el valor de la multa: " << endl;
	cin >> multa;
	cout << "Ingrese el recargo por la multa: " << endl;
	cin >> recargo;
	cout << "Elija el plan de cuotas: 1, 3, 6, 9, 12, 18" << endl;
	cin >> plan;
	
	if (anio <2022) {
		switch (plan) {
		case 1: multa = (multa+recargo+adicional)/1; cout << "Plan 1 cuota, pagara 1 cuota (+recargo +adicional) de: " << multa; break;
		case 3: multa = (multa+recargo+adicional)/3; cout << "Plan 3 cuotas, pagara 3 cuotas (+recargo +adicional) de: " << multa; break;
		case 6: multa = (multa+recargo+adicional)/6; cout << "Plan 6 cuotas, pagara 6 cuotas (+recargo +adicional) de: " << multa; break;
		case 9: multa = (multa+recargo+adicional)/9; cout << "Plan 9 cuotas, pagara 9 cuotas (+recargo +adicional) de: " << multa; break;
		case 12: multa = (multa+recargo+adicional)/12; cout << "Plan 12 cuotas, pagara 12 cuotas (+recargo +adicional) de: " << multa; break;
		case 18: multa = (multa+recargo+adicional)/18; cout << "Plan 18 cuotas, pagara 18 cuotas (+recargo +adicional) de: " << multa; break;
	}
	} else {
		switch (plan) {
		case 1: multa = (multa+recargo)/1; cout << "Plan 1 cuota, pagara 1 cuota (+recargo) de: " << multa; break;
		case 3: multa = (multa+recargo)/3; cout << "Plan 3 cuotas, pagara 3 cuotas (+recargo) de: " << multa; break;
		case 6: multa = (multa+recargo)/6; cout << "Plan 6 cuotas, pagara 6 cuotas (+recargo) de: " << multa; break;
		case 9: multa = (multa+recargo)/9; cout << "Plan 9 cuotas, pagara 9 cuotas (+recargo) de: " << multa; break;
		case 12: multa = (multa+recargo)/12; cout << "Plan 12 cuotas, pagara 12 cuotas (+recargo) de: " << multa; break;
		case 18: multa = (multa+recargo)/18; cout << "Plan 18 cuotas, pagara 18 cuotas (+recargo) de: " << multa; break;
	}
	} break;
	}
	
}
