#include <iostream>
using namespace std;

main() {

    int cocacola, sprite, fanta, opcion, gaseosas;
    float monto=0;
    bool venta;

	cout<<"Maquina de bebidas"<<endl;
	cout<<"\nIngrese la cantidad de Cocacola que hayan en la maquina: "<<endl; 
	cin>> cocacola;
    cout<<"Ingrese la cantidad de Sprite que hayan en la maquina: "<<endl;
	cin>> sprite;
    cout<<"Ingrese la cantidad de Fanta que hayan en la maquina: "<<endl;
	cin>> fanta;
	cout<<"\nSi ingresa <1> usted estara metiendo monedas de $0.50"<<endl;
	cout<<"\nSi ingresa <2> usted estara metiendo monedas de $1"<<endl;

    while(true) {
    	
	    while(monto < 3.50) {
		
		cout<<"\nIngrese monedas para recibir la bebida (Valor $3.50): "<<endl;
		cin>> opcion;
		
		switch(opcion) {
			
			case 1: monto+=0.50, cout<<"Su monto es: "<<"$"<<monto<<endl; break;
			case 2: monto+=1, cout<<"Su monto es: "<<"$"<<monto<<endl; break;
			
			}	
		} (monto > 3.50);

    system("cls");
	cout<<"Elija la bebida: "<<endl;
	cout<<"\n<1> Cocacola, disponibles: ["<<cocacola<<"]\n";
	cout<<"<2> Sprite, disponibles: ["<<sprite<<"]\n";
	cout<<"<3> Fanta, disponibles: ["<<fanta<<"]\n\n";
	cin>>gaseosas;
	
		switch(gaseosas) {
			
			case 1: if(cocacola == 0) {
						cout<<"Disculpe, no hay mas bebidas"<<endl;
						venta = false;
					} else {
						cocacola--, cout<<"Retire su bebida Cocacola"<<" y en la maquina Queda(n): "<<cocacola<<endl;
						venta = true;
					} break;
					
			case 2: if(sprite == 0) {
						cout<<"Disculpe, no hay mas bebidas"<<endl;
						venta = false;
					} else {
						sprite--, cout<<"Retire su bebida Sprite"<<" y en la maquina Queda(n): "<<sprite<<endl;
						venta = true;
					} break;
					
			case 3: if(fanta == 0) {
						cout<<"Disculpe, no hay mas bebidas"<<endl;
						venta = false;
					} else {
						fanta--, cout<<"Retire su bebida Manaos"<<" y en la maquina Queda(n): "<<fanta<<endl;
						venta = true;
					}break;
			}
			
		if(venta) {
			cout<<"\nRetire su vuelto "<< (monto - 3.50) <<"$"<< endl;
		} else {
			cout<<"\nRetire su vuelto "<< monto <<"$"<< endl;
		}
		monto=0;
    }
}
