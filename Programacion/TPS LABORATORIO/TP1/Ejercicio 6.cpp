#include <iostream>
using namespace std;

main() {
	int diaA, mesA, yearA, dnac, mnac, anac, edad;
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
    cout << "Ingrese Fecha de Nacimiento: ";
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
    
