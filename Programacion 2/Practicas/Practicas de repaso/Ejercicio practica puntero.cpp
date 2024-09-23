#include <iostream>
#include <stdlib.h>
#include <malloc.h>//sirve para hacer un arreglo de letras sin reservar un espacio determinado.
#include <string.h>
 using namespace std;
 struct PERSONA{
 	char *nombre; 
 	int edad;
 };
 
 int main (){
 	struct PERSONA a;
 	struct PERSONA *b;
 	//struc A
 	a.nombre = (char *) malloc (20);
 	strcpy (a.nombre, "Juan");
 	a.edad = 20;
 	printf ("%s", a.nombre);
 	printf (" %d", a.edad);
 	//struc B
 	b = (struct PERSONA *) malloc (sizeof(struct PERSONA));
 	b-> nombre = "Ana";
 	b-> edad = 22;
 	printf ("\n%s", b->nombre);
 	printf (" %d", b->edad);
 }