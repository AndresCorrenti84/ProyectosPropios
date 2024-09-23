#include <iostream>
using namespace std;

 main () {
 	int numero1, numero2, numero3;
 	cout <<(" Ingrese su primer numero ")<<endl;
 	cin >>numero1;
 	cout <<(" Ingrese su segundo numero ")<<endl;
 	cin >>numero2;
 	cout <<(" Ingrese su tercer numero ")<<endl;
 	cin >>numero3;
 	if (numero1 > numero2 && numero1 > numero3){
 		cout <<(" El primer numero es mayor")<<endl;
	 }
	 else if (numero2 > numero1 && numero2 > numero3) {
	 	cout <<(" El sesgundo numero es el mayor ")<<endl;
	 } 
	 else if (numero3 > numero2 && numero3 > numero1) {
	 	cout <<(" El tercer numero es el mayor")<<endl;
	 }
	 if ( numero1 < numero2 && numero1 < numero3) {
	 	cout <<(" El primer numero es el menor ")<<endl;
	 }
	 else if (numero2 < numero1 && numero2 < numero3) {
	 	cout <<(" El segundo numero es el menor ")<<endl;
	 }
	 else if ( numero3 < numero2 && numero3 < numero2) {
	 	cout <<(" El tercer numero es el menor ")<<endl;
	 }
 }
