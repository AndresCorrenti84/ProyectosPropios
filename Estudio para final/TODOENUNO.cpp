//METODO BURBUJA
main(){
	
	int vector[7];
	int i, j, aux;
	
	for (i=0; i<7; i++){
		
		printf ("Ingrese un numero: ");
		scanf ("%d", &vector[i]);
	}
	
	printf ("\nVector ordenado: ");
	for (int i=0; i<7; i++){
		for (int j=0; j<7; j++){
			
			if (vector[j] > vector[j+1]){
				aux = vector[j];
				vector[j] = vector[j+1];
				vector[j+1] = aux;
			}
		}
	}
	
	for (int i=0; i<7; i++){
		
		printf ("[%d] ", vector[i]);
	}
}
/*BUSQUEDA BINARIA
main(){
	
	int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8}; //El arreglo debe estar ordenado de forma ascendente
	int sup, inf, mitad, dato;
	char flag = 'F';
	
	dato = 6; //Dato que queremos encontar en el arreglo
	inf = -1; //Indica el inicio del arreglo
	sup = 8; //Indica la cantidad de elementos del arreglo
	
	while ((inf < sup-1) && (sup > inf+1)){
		
		mitad = (inf + sup) / 2;
		
		if (numeros[mitad] == dato){
			
			flag = 'V';
			break;
		}
		
		if (numeros[mitad] > dato){
			
			sup = mitad;
		}
		
		if (numeros[mitad] < dato){
			
			inf = mitad;
		}
	}
	
	if (flag == 'V'){
		
		printf ("\nEl numero se encontro en la posicion: %d", mitad);
	}
	else {
		
		printf ("\nEl numero no ha sido encontrado");
	}
} */
/*BUSQUEDA SECUENCIAL
int main(){
	int a[] = {3,4,2,1,5};
	int i,dato;
	char band = 'F';
	
	dato = 4; 
	//Busqueda Secuencial
	i=0;
	while((band == 'F') && (i<5)){
		if(a[i] == dato){
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F'){
		cout<<"El numero a buscar no existe en el arreglo"<<endl;
	}
	else if(band == 'V'){
		cout<<"El numero a sido encontrado en la pos: "<<i-1<<endl;
	}
	
	
	getch();
	return 0;
}*/