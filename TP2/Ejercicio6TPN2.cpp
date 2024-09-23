#include <iostream>
using namespace std;

main () {
	char nombre[60];
	int diames=20;
	int sueldo, sueldoneto, inasistencia, total;
	cout <<(" Ingrese su nombre. ")<<endl;
	cin >>nombre;
	cout <<(" Ingrese el monto de su sueldo. ")<<endl;
	cin >>sueldo;
	cout <<(" Ingrese la cantidad de inasistencias. ")<<endl;
	cin >>inasistencia;
	sueldoneto = (diames - inasistencia);
	total = (sueldo / diames)*sueldoneto;
	cout <<" El sueldo correspondiente es de "<<total<<"$."<<endl;
	
}
