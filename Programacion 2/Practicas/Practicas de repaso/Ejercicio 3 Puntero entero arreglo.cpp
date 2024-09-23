#include <iostream>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <time.h>

 using namespace std;
 
 int main (){
 	int *p;
 	int arreglo {1,2,3,4,5};
 	p = (int *) malloc (arreglo *sizeof(int));
 	*p = arreglo;
 	p++;
 	
 	for (int i = 0 ; i < 5; i++){
 		printf ("[%d]", i);
 		
	 }
 }