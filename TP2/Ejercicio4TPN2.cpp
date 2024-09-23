#include <iostream>
using namespace std;

main() {
	float ganancia1, ganancia2, rec1, rec2, e50=50, cant50v, desc50=12, cant25v, e25=25, desc25=9, total50, total25;
	cout <<(" Ingrese la cantidad de entradas que vendio de $50 : ")<<endl;
	cin >>cant50v;
	cout <<(" Ingrese la cantidad de entradas que vendio de $25 : ")<<endl;
	cin >>cant25v;
	rec1 = (cant50v * e50);
	rec2 = (cant25v * e25);
	cout <<" La recaudacion por entrada de 50 es de :"<<rec1<<"$"<<endl;
	cout << " La recaudacion por entrada de 25 es de : "<<rec2<<"$"<<endl;
	total50 = (cant50v * desc50);
	total25 = (cant25v * desc25);
	cout <<" Descuento de entradas de 50$ : "<<total50<<endl;
	cout <<" Descuento de entradas de 25$ : "<<total25<<endl;
	ganancia1 = (rec1 - total50);
	ganancia2 = (rec2 - total25);
	cout <<" La ganancia total de las entradas de 50 es de : "<<ganancia1<<endl;
	cout <<" La ganancia total de las entradas de 25 es de : "<<ganancia2<<endl;
}
