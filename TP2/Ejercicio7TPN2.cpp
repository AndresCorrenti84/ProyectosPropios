#include <iostream>
using namespace std;

main () {
	int edad;
	cout <<(" Ingrese su edad ")<<endl;
	cin >>edad;
	if (edad < 1) {
		cout <<(" Recien nacido ")<<endl;
	} 
	else if (edad > 1 && edad <= 5) {
		cout <<(" Infante ")<<endl;
	}
	else if (edad >= 6 && edad <= 12) {
		cout <<(" Niño ")<<endl;
	}
	else if (edad > 12 && edad <= 18) {
		cout <<(" Pre-Adolescente ")<<endl;
	}
	else if (edad > 18 && edad <= 25) {
		cout <<(" Adulto joven ")<<endl;
	}
	else if (edad > 25 && edad <= 35) {
		cout <<(" Adulto ")<<endl;
	}
	else if (edad > 35 && edad <= 50) {
	}
}
