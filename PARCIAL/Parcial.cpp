#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

main () {
	int dadoR, dadoN, i, unoR=0, unoN=0, contador1=0, contador2=0, tirada;
	srand (time(NULL));
	for (i = 0; i < 100; i++){
	do{
		dadoN = rand()%7;
		dadoR = rand()%7;
		if(dadoR == 1){
			unoR++;
		}
		else if (dadoN== 1){
			unoN++;
	 } contador1 ++;
	}while(dadoR != dadoN);
	do {
		dadoR = rand()%7;
		contador2++;
	}while(dadoN != dadoR);
	tirada = contador1 + contador2;
   }
}
