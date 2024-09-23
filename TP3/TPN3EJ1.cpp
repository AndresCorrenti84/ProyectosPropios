 	#include <iostream>
using namespace std;

main () {
	int num, i;
	
	for (i = 1; i <= 3000; i++) {
		num = i %3;
		if (num == 0) {
			printf ("\n El numero:  %d es multiplo de 3",i);
	}	
	}
}
