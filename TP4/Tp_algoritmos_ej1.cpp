#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
//structs.
struct Talumno {
	int identificador;
	char M, V;
	float notas[10];
	bool pasa = false;
};

//Encabezado de subprocesos.
struct Talumno leerdatos ();
float nota (struct Talumno datos);

main (){
	struct Talumno n;
	float prom;
	n = leerdatos();
	prom = nota(n);
}

struct Talumno leerdatos (){
	struct Talumno datos;
	printf ("Complete los datos del alumno.\n");
	printf ("Ingrese su usuario:(Numero de dni sin puntos.)\n");
	scanf ("%d", &datos.identificador);
	fflush(stdin);
	printf ("\nIngrese su sexo(M = MUJER, V = VARON.):\n");
	scanf ("%c", &datos.M);
    return datos;
}

float nota (struct Talumno datos){
	
	float promedio, notafinal;
	for(int i = 0; i < 10; i++){
		printf("\nIngrese sus 10 notas:\n");
		scanf ("%f", &datos.notas[i]); 
		promedio = promedio + datos.notas[i];
    }
    notafinal = promedio/10;
    printf ("La nota final es de:%f ", notafinal);
    
    if (notafinal > 6 ){
    	datos.pasa = true;
	} 
	if (datos.pasa == true){
		printf ("\nEl alumno si pasa.\n");
	}
	if (datos.pasa == false){
		printf ("\nEl alumno no pasa.\n");
	}
    return notafinal;
}

