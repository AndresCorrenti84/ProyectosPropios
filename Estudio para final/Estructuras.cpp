#include <stdio.h>

struct persona{
	int dni;
	char nombre[10];
	int edad;
	char sexo[10];
};

void leerdatos (struct persona *pe);
void mostrardatos (struct persona pe);

int main(){
	struct persona p;
	leerdatos(&p);
	mostrardatos(p);
}

void leerdatos (struct persona *pe){
	printf ("Ingrese su numero de documento.\n ");
	scanf("%d", &pe->dni);
	printf ("Ingrese su nombre. \n");
	scanf("%s", &pe->nombre);
	printf("Ingrese su edad. \n");
	scanf("%d", &pe->edad);
	printf("Ingrese su sexo.(MASCULINO-FEMENINO) \n");
	scanf ("%s", &pe->sexo);
}

void mostrardatos (struct persona pe){
	printf("El numero de documento es: %d", pe.dni);
	printf("\nEl nombre de la persona es: %s", pe.nombre);
	printf("\nLa edad de la persona es: %d", pe.edad);
	printf ("\nEl sexo de la persona es: %s", pe.sexo);
}
