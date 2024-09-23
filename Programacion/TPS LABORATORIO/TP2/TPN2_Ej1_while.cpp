#include <stdio.h>
using namespace std;

main () {
	int num1, num2, norg;
	do{
		do {
		printf (" Ingrese un numero: ");
		scanf ("%d", &num1);
	       }while (num1 <= 1);
	    do {
		printf ("Ingrese otro numero:");
		scanf ("%d", &num2);
	       }while (num2 <= 1);
	}while (num1 > num2);
	num1 = norg;
	if (num1 %2 != 0) {
		num1 = num1 ++;
	} 
	while (num1 < num2) {
		norg = num1;
		num1 = num1 +2;
		printf ("%d", num1);
	}

}
