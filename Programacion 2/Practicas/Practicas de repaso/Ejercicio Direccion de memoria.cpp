#include <iostream>
#include <stdlib.h>
#include <malloc.h>
 using namespace std;
 
 int main (){
 	int a= 10;
 	int *b = (int *) malloc(sizeof (int));
 	double *c;
 	
 	b = &a;
 	printf ("%p", b);
 	
 	printf ("%d", *b);
 	
	 b++;
	 
 	printf ("\n%d", b);
 	
 	printf ("\n%d", *b);
 	
 	*b = 20;
 	
 	printf ("\n%d", *b);
 }