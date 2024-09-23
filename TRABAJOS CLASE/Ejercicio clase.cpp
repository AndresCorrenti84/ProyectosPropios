#include <iostream>
using namespace std;

main() {
	float x,y;
	cout <<(" Ingrese su coordenadad de eje X, Y")<<endl;
	cin >>x;
	cin >>y;
	if(x == 0 && y == 0) {
		cout <<(" Se encuentra en la ordenada al origen ")<<endl;
	}
	else if (x == 0 || y== 0) {
		cout <<(" Esta en algun eje (una raiz)")<<endl;
	}
	else {
		if ( x>0) {
			if (y>0){
				cout <<(" SE ENCUENTRA EN EL PRIMER CUADRANTE ")<<endl;
				}
				else {
					cout <<(" SE ENCUENTRA EN EL CUARTO CUADRANTE ")<<endl;
			}
		} else {
			if(y > 0) {
				cout <<(" SE ENCUENTRA EN EL TERCER CUADRANTE ")<<endl;
				}
				else {
					cout<<(" SE ENCUENTRA EN EL SEGUNDO CUADRANTE ")<<endl;
			}
		}
	}
	
	system ("pause");
}
