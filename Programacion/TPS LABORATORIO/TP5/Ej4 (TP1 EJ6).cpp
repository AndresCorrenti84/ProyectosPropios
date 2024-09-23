#include <iostream>
#include <stdlib.h>
using namespace std;
int calcularedad (int diaA, int mesA, int yearA, int dnac, int mnac, int anac, int edad);
int main (void){
	int dia, mes, anho, dianac, mesnac, anhonac, edad;
	calcularedad(dia, mes, anho, dianac, mesnac, anhonac, edad);
}

int calcularedad (int diaA, int mesA, int yearA, int dnac, int mnac, int anac, int edad) {
    cout << "\nIngrese Año Actual: ";
    cin >> yearA;
    cout << "Ingrese Mes Actual: ";
    cin >> mesA;
    cout << "Ingrese dia Actual: ";
    cin >> diaA;
    cout << "\nIngrese Año Nacimiento: ";
    cin >> anac;
    cout << "Ingrese Mes de Nacimiento: ";
    cin >> mnac;
    cout << "Ingrese Dia de Nacimiento: ";
    cin >> dnac;
    if ( mnac < mesA) {
		edad = yearA - anac;
	} else if ( mnac == mesA) {
		if (dnac <= diaA) {
			edad =yearA - anac ;
		}
		else {
			edad = (yearA - anac) -1;
		}
	} else if (mnac > mesA) {
		edad = (yearA - anac) -1;
	} cout <<" La edad es de: "<<edad<<" años "<<endl;
}
